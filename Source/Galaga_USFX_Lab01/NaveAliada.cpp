// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveAliada.h"

// Sets default values
ANaveAliada::ANaveAliada()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	velocidad = 500.0f;
	puntos = 0;
	bEstaviva = true;

}

void ANaveAliada::moverNave(FVector Direccion)
{
	//Logica para que la nave se mueva o este alado de nuestra nave
}

void ANaveAliada::Disparar()
{
	//la logica de disparo que esta en proyectil
}

void ANaveAliada::puntaje(int sumapuntos)
{
	puntos += sumapuntos;
}

// Called when the game starts or when spawned
void ANaveAliada::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveAliada::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

