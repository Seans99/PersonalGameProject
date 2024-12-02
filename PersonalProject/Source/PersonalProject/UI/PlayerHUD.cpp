#include "PlayerHUD.h"
#include "../PrimarySystems/PrimaryPlayerCharacter.h"
#include "../Components/HealthComponent.h"
#include "Components/Image.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include <Kismet/GameplayStatics.h>

void UPlayerHUD::NativeConstruct()
{
	Super::NativeConstruct();
	Player = Cast<APrimaryPlayerCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	if (Player)
	{
		PlayerHC = Player->FindComponentByClass<UHealthComponent>();
		if (PlayerHC)
		{
			// Set the health bar percentage and health text values
			HealthBar->SetPercent(PlayerHC->CurrentHealth);
			FString Text = FString::Printf(TEXT("%d / %d"), PlayerHC->CurrentHealth, PlayerHC->MaxHealth);
			FText NewText = FText::FromString(Text);
			HealthText->SetText(NewText);
			PlayerHC->OnDamage.AddDynamic(this, &UPlayerHUD::HealthChange);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Health component not found"));
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
	HealthBar->SetPercent(PlayerHC->CurrentHealth);
	FString Text = FString::Printf(TEXT("%d / %d"), PlayerHC->CurrentHealth, PlayerHC->MaxHealth);
	FText NewText = FText::FromString(Text);
	HealthText->SetText(NewText);
}
