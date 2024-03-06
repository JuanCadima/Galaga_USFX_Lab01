// Fill out your copyright notice in the Description page of Project Settings.


#include "Highscore.h"

// Sets default values
AHighscore::AHighscore()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AHighscore::AddHighScore(const FString& PlayerName, int32 Score)
{
    // Crear una nueva entrada de puntuación alta
    FHighScoreEntry NewEntry;
    NewEntry.PlayerName = PlayerName;
    NewEntry.Score = Score;

    // Agregar la nueva entrada al arreglo
    HighScores.Add(NewEntry);

    // Ordenar el arreglo en orden descendente según la puntuación
    HighScores.Sort([](const FHighScoreEntry& A, const FHighScoreEntry& B) {
        return A.Score > B.Score;
        });

    // Limitar la cantidad de puntuaciones altas a MaxHighScores
    if (HighScores.Num() > MaxHighScores)
    {
        HighScores.SetNum(MaxHighScores);
    }
}

int32 AHighscore::GetMaxHighScores() const
{
	return MaxHighScores;;
}

void AHighscore::SetMaxHighScores(int32 NewMaxHighScores)
{
	MaxHighScores = NewMaxHighScores;
}

// Called when the game starts or when spawned
void AHighscore::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHighscore::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

