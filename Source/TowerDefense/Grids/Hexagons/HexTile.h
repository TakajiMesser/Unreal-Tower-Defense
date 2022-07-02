// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Math/IntVector.h"
#include "HexTile.generated.h"

USTRUCT()
struct FTDHexTile
{
    GENERATED_BODY()
    
    FTDHexTile() { }
    FTDHexTile(FIntVector coordinates) : Coordinates(coordinates) { }
    FTDHexTile(int x, int y, int z) : Coordinates(FIntVector(x, y, z)) { }
    
    UPROPERTY()
    FIntVector Coordinates;
};
