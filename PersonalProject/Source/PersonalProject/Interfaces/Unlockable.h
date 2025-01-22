#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Unlockable.generated.h"

UINTERFACE(MinimalAPI)
class UUnlockable : public UInterface
{
	GENERATED_BODY()
};

class PERSONALPROJECT_API IUnlockable
{
	GENERATED_BODY()

public:
	virtual void Unlock() = 0;
};
