#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TempMeshSpawner.generated.h"

class UInstancedStaticMeshComponent;

UCLASS(Blueprintable)
class ATempMeshSpawner : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInstancedStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MeshVisibility;
    
    ATempMeshSpawner(const FObjectInitializer& ObjectInitializer);

};

