// Fill out your copyright notice in the Description page of Project Settings.


#include "PositioningReplicator.h"

// Sets default values for this component's properties
UPositioningReplicator::UPositioningReplicator()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	
}


// Called when the game starts
void UPositioningReplicator::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UPositioningReplicator::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	// ...
}


void UPositioningReplicator::ReplicateRemoteComponent()
{
	//UE_LOG(LogNetworkReplication, Verbose, TEXT("ReplicateRemoteComponent"));
	//ComponentToReplicate
}

void UPositioningReplicator::ServerSetPosition(FVector newPos)
{
	ServerPosition = newPos;
}