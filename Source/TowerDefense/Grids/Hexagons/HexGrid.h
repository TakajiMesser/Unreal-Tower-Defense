// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Math/IntVector.h"
#include "HexTile.h"
#include "HexGrid.generated.h"

USTRUCT()
struct FTDHexGrid
{
    GENERATED_BODY()

    FTDHexGrid() { }
    FTDHexGrid(float tileWidth, float tileHeight, FIntVector gridSize, TArray<FTDHexTile> tiles)
        : TileWidth(tileWidth),
        TileHeight(tileHeight),
        GridSize(gridSize),
        Tiles(tiles) { }

    UPROPERTY()
    float TileWidth;

    UPROPERTY()
    float TileHeight;

    UPROPERTY()
    FIntVector GridSize;

    UPROPERTY()
    TArray<FTDHexTile> Tiles;
};
