// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Squad.generated.h"

UCLASS()
class GALAGA_USFX_LAB01_API ASquad : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASquad();

protected:
	//metodos
	int numMiembros;
	//un array de miembros si es que se requiere
	TArray<AActor*> Miembros;

public:

	void agregarMiembro(AActor* NuevoMiembro);
	void RealizarAccion();

	//variable
	bool bMision; //una variable para que la squad(miembros) sea llamado

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
