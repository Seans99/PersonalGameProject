#include "PlayerHUD.h"
#include "../PrimarySystems/PrimaryPlayerCharacter.h"
#include "../Components/HealthComponent.h"
#include "../Components/StaminaComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/Image.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include <Kismet/GameplayStatics.h>

void UPlayerHUD::NativeConstruct()
{
	Super::NativeConstruct();
	Player = Cast<APrimaryPlayerCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	if (Player)
	{
		Rotation = Player->FindComponentByClass<UCameraComponent>();
		GetWorld()->GetTimerManager().SetTimer(
			CompassTimer,
			this,
			&UPlayerHUD::SetDirection,
			0.01f,
			true
		);

		PlayerHC = Player->FindComponentByClass<UHealthComponent>();
		PlayerSTAM = Player->FindComponentByClass<UStaminaComponent>();
		if (PlayerHC)
		{
			// Set the health bar percentage and health text values
			HealthBar->SetPercent(PlayerHC->CurrentHealth * 0.01f);
			PlayerHC->OnDamage.AddDynamic(this, &UPlayerHUD::HealthChange);
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Health component not found"));
		}

		if (PlayerSTAM)
		{
			StaminaBar->SetPercent(PlayerSTAM->CurrentStamina * 0.01f);
			PlayerSTAM->OnStaminaLoss.AddDynamic(this, &UPlayerHUD::StaminaChange);
			PlayerSTAM->OnStaminaRegain.AddDynamic(this, &UPlayerHUD::StaminaChange);
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Stamina component not found"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Player not found"));
	}
}

void UPlayerHUD::NativeTick(const FGeometry& Geometry, float DeltaTime)
{
	Super::NativeTick(Geometry, DeltaTime);

}

void UPlayerHUD::HealthChange()
{
	HealthBar->SetPercent(PlayerHC->CurrentHealth * 0.01f);
}

void UPlayerHUD::StaminaChange()
{
	StaminaBar->SetPercent(PlayerSTAM->CurrentStamina * 0.01f);
}

void UPlayerHUD::SetDirection()
{
	UPanelSlot* PanelSlot = CompassPoints->Slot;

	if (UCanvasPanelSlot* CanvasSlot = Cast<UCanvasPanelSlot>(PanelSlot))
	{
		float PosX = Rotation->GetComponentRotation().Yaw * -1 * 10 - 2700;
		CanvasSlot->SetPosition(FVector2D(PosX, -30));
	}
}
