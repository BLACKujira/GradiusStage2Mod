#pragma once
#include "CoreMinimal.h"
#include "TempMeshSpawner.h"
#include "TempMeshSpawnerSphere.generated.h"

UCLASS(Blueprintable)
class ATempMeshSpawnerSphere : public ATempMeshSpawner {
    GENERATED_BODY()
public:
    ATempMeshSpawnerSphere(const FObjectInitializer& ObjectInitializer);

};

