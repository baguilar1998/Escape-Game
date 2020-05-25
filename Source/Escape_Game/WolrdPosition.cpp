// Fill out your copyright notice in the Description page of Project Settings.


#include "WolrdPosition.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UWolrdPosition::UWolrdPosition()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

}


// Called when the game starts
void UWolrdPosition::BeginPlay()
{
	Super::BeginPlay();

	FString ActorName = GetOwner()->GetName();
	UE_LOG(LogTemp, Warning, TEXT("Name Of Actor: %s"), *ActorName);
	// GetOwner()->GetTransform().GetLocation().ToString();
	FString ObjectPosition = GetOwner()->GetActorLocation().ToString();
	UE_LOG(LogTemp, Warning, TEXT("%s is located at %s"), *ActorName, *ObjectPosition);

	
}


// Called every frame
void UWolrdPosition::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


}

