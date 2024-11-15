#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PrimaryGameMode.generated.h"

class UTitleScreen;
class USettings;
class APrimaryPlayerController;

UENUM(BlueprintType)
enum class EGameState : uint8
{
	ETitleScreen		UMETA(DisplayName = "TitleScreen"),
	EInGame				UMETA(DisplayName = "In Game"),
	EPause				UMETA(DisplayName = "Pause"),
	EGameOver			UMETA(DisplayName = "Game Over")
};

UCLASS()
class PERSONALPROJECT_API APrimaryGameMode : public AGameModeBase
{
	GENERATED_BODY()

public: 
	APrimaryGameMode();

	EGameState CurrentState;

	void SetState(EGameState NewState);

	EGameState GetCurrentState() const;

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

private:
	virtual void StartPlay() override;

public: 
	UPROPERTY(EditAnywhere, Category = "Level")
	FName TitleScreenLevel;

	UPROPERTY(EditAnywhere, Category = "Level")
	FName Level1;

public:
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UTitleScreen> TitleScreenWidgetClass;

	UPROPERTY()
	UTitleScreen* TitleScreenWidget;

	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<USettings> SettingsScreenWidgetClass;

	UPROPERTY()
	USettings* SettingsWidget;

private:
	APrimaryPlayerController* Controller;

private:
	void TitleScreenSetup();
	void InGameSetup();
	void PauseSetup();
	void GameOverSetup();
};
