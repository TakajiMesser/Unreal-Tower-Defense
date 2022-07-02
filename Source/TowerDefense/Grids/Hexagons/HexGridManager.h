// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Math/IntVector.h"
#include "HexTile.h"
#include "HexGrid.h"
#include "HexDirection.h"
#include "HexGridManager.generated.h"

UCLASS()
class TOWERDEFENSE_API ATDHexGridManager : public AActor
{
    GENERATED_BODY()

public:
    ATDHexGridManager();

    virtual void Tick(float deltaTime) override;

    UFUNCTION()
    void GenerateGrid(float tileWidth, float tileHeight, const FIntVector &gridSize);

    UFUNCTION()
    FVector HexToWorldCoordinates(const FIntVector &coordinates);

    UFUNCTION()
    FIntVector WorldToHexCoordinates(const FVector &coordinates);

    UFUNCTION()
    FVector SnapWorldCoordinatesToHexCenter(const FVector &coordinates);

    UFUNCTION()
    FTDHexTile GetNeighboringTile(const FIntVector &tile, EHexDirection direction);

    UPROPERTY()
    FTDHexGrid Grid;

protected:
    virtual void BeginPlay() override;

};
