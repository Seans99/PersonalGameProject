#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PrimaryGameMode.generated.h"

class UTitleScreen;
class APrimaryPlayerController;

UENUM(BlueprintType)
enum class EGameState : uint8
{
	ETitleScreen		UMETA(DisplayName = "TitleScreen"),
	EInGame				UMETA(DisplayName = "In Game"),
	EPause				UMETA(DisplayName = "Pause"),
	EGameOver			UMETA(DisplayName= "Game Over")
};

UCLASS()
class PERSONALPROJECT_API APrimaryGameMode : public AGameModeBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	bool bDebugMode = false;
	
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

private:
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UTitleScreen> TitleScreenWidgetClass;

	UPROPERTY()
	UTitleScreen* TitleScreenWidget;

private:
	APrimaryPlayerController* Controller;

private:
	void TitleScreenSetup();
	void InGameSetup();
	void PauseSetup();
	void GameOverSetup();
};
