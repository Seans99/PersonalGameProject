#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "CodeGenerator.generated.h"

UCLASS()
class PERSONALPROJECT_API UCodeGenerator : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UCodeGenerator();

private:
	int32 RandomCode = 0;

public:
	void GenerateRandomCode();
	int32 GetRandomCode();
};