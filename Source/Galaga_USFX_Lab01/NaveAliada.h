// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveAliada.generated.h"

UCLASS()
class GALAGA_USFX_LAB01_API ANaveAliada : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANaveAliada();

protected:
	//propiedades implementadas
	FString Nombre;
	float velocidad;
	float vida;
	int puntos;
	int dano;

public:
	//metodos implementados
	void moverNave(FVector Direccion);
	void Disparar();
	void puntaje(int sumapuntos);
	//variable
	bool bEstaviva;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
