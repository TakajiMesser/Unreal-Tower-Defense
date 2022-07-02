// Fill out your copyright notice in the Description page of Project Settings.

#include "HexGridManager.h"

ATDHexGridManager::ATDHexGridManager()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ATDHexGridManager::Tick(float deltaTime)
{
	Super::Tick(deltaTime);
}

void ATDHexGridManager::GenerateGrid(float tileWidth, float tileHeight, const FIntVector &gridSize)
{
	
}

FVector ATDHexGridManager::HexToWorldCoordinates(const FIntVector &coordinates)
{
	return FVector()
}

FIntVector ATDHexGridManager::WorldToHexCoordinates(const FVector &coordinates)
{
	return FIntVector()
}

FVector ATDHexGridManager::SnapWorldCoordinatesToHexCenter(const FVector &coordinates)
{
	return FVector()
}

FTDHexTile ATDHexGridManager::GetNeighboringTile(const FIntVector &tile, EHexDirection direction)
{
	return FTDHexTile()
}

void ATDHexGridManager::BeginPlay()
{
	Super::BeginPlay();
}
