// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Power_Up.generated.h"

UCLASS()
class GALAGA_USFX_LAB01_API APower_Up : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APower_Up();

protected:
	//propiedades
	float Duracion;

public:
	//metodos
	void activarPowerup();
	void Desactivar();
	//variable
	bool bEstaActivo;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
