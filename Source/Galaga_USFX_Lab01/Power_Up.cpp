// Fill out your copyright notice in the Description page of Project Settings.


#include "Power_Up.h"

// Sets default values
APower_Up::APower_Up()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Duracion = 10.0f;
	bEstaActivo = false;
}

void APower_Up::activarPowerup()
{
	bEstaActivo = true;
	//se puede implementar una logica que sea para que el power up sea un objeto que tenga localizacion exacta o aleatoria
}

void APower_Up::Desactivar()
{
	bEstaActivo = false;
}

// Called when the game starts or when spawned
void APower_Up::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APower_Up::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

