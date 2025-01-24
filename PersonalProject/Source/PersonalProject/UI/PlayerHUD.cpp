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
#include "Kismet/KismetMathLibrary.h"

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

	UPanelSlot* PanelSlot = Objective->Slot;

	if (Player)
	{
		if (Player->ObjectivePoint == FVector::ZeroVector)
		{
			Objective->SetVisibility(ESlateVisibility::Hidden);
		}
		else
		{
			Objective->SetVisibility(ESlateVisibility::Visible);
		}
	}

	if (UCanvasPanelSlot* CanvasSlot = Cast<UCanvasPanelSlot>(PanelSlot))
	{
		if (!CheckIfbehind())
		{
			float PosX = Rotation->GetComponentRotation().Yaw * -1 * 10 - 2700;
			CanvasSlot->SetPosition(FVector2D(CheckNavPoint(), -35));
		}
	}
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

double UPlayerHUD::CheckNavPoint()
{
	FVector RotationX = GetNavPointRotXNorm2D();

	FVector CamRight = Rotation->GetRightVector();
	FVector CamForward = Rotation->GetForwardVector();

	double PosX = (CamRight.Dot(RotationX) / CamForward.Dot(RotationX)) * 700;

	return PosX;
}

bool UPlayerHUD::CheckIfbehind()
{
	FVector ObjNorm = GetNavPointRotXNorm2D().GetSafeNormal();
	FVector CamNorm = Rotation->GetForwardVector().GetSafeNormal();

	double DotProd = FVector::DotProduct(ObjNorm, CamNorm);
	double AcosRad = FMath::Acos(DotProd);
	double Degrees = FMath::RadiansToDegrees(AcosRad);

	if (Degrees < 140)
	{
		return true;
	}

	return false;
}

FVector UPlayerHUD::GetNavPointRotXNorm2D()
{
	FVector NavPoint;

	if (Player)
	{
		NavPoint = Player->ObjectivePoint;
	}

	FVector StartLocation = NavPoint;
	FVector TargetLocation = Rotation->GetComponentLocation();

	FRotator LookAtRotation = UKismetMathLibrary::FindLookAtRotation(StartLocation, TargetLocation);
	FVector RotationX = LookAtRotation.Vector().GetSafeNormal2D();

	return RotationX;
}
