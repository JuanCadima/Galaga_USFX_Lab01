// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Highscore.generated.h"
struct FHighScoreEntry
{
	FString PlayerName;
	int32 Score;
};
UCLASS()
class GALAGA_USFX_LAB01_API AHighscore : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHighscore();

protected:
	int32 MaxHighScores;
	TArray<FHighScoreEntry> HighScores;

public:

	// Accesor para obtener la lista de puntuaciones altas
	const TArray<FHighScoreEntry>& GetHighScores() const { return HighScores; }
	// M�todo para agregar una nueva puntuaci�n alta
	void AddHighScore(const FString& PlayerName, int32 Score);

	// Accesor para obtener la puntuaci�n m�xima permitida
	int32 GetMaxHighScores() const;

	// Accesor para establecer la puntuaci�n m�xima permitida
	void SetMaxHighScores(int32 NewMaxHighScores);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};


