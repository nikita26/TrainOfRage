// Fill out your copyright notice in the Description page of Project Settings.

#include "background_dust.h"

// Sets default values
Abackground_dust::Abackground_dust()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}
// Called when the game starts or when spawned
void Abackground_dust::BeginPlay()
{
	Super::BeginPlay();
	
	
}

// Called every frame
void Abackground_dust::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

