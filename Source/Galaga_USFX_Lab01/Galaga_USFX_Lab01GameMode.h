// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_USFX_Lab01GameMode.generated.h"

class ANaveEnemiga;

UCLASS(MinimalAPI)
class AGalaga_USFX_Lab01GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFX_Lab01GameMode();

public:
	ANaveEnemiga* NaveEnemiga01;

protected:

	virtual void BeginPlay() override;
};



