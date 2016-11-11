// Fill out your copyright notice in the Description page of Project Settings.

#include "VisualNovel.h"
#include "VisualCharacter.h"


// Sets default values
AVisualCharacter::AVisualCharacter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AVisualCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVisualCharacter::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

