// Fill out your copyright notice in the Description page of Project Settings.


#include "CodeCampCharacter.h"

// Sets default values
ACodeCampCharacter::ACodeCampCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACodeCampCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACodeCampCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACodeCampCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

