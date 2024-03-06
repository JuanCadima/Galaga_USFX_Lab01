// Fill out your copyright notice in the Description page of Project Settings.


#include "Squad.h"

// Sets default values
ASquad::ASquad()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	numMiembros = 5;
	bMision = false;
}

void ASquad::agregarMiembro(AActor* NuevoMiembro)
{
	// Implementar lógica para agregar un nuevo miembro al escuadrón
	if (NuevoMiembro)
	{
		Miembros.Add(NuevoMiembro);
	}
}

void ASquad::RealizarAccion()
{
	//Logica para implementar que el squad realize la mision
	for (AActor* Miembro : Miembros)
	{
	}

	// Actualizar el squad si esta en mision
	bMision = true;
}

// Called when the game starts or when spawned
void ASquad::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASquad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

