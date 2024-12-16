#pragma once
#include "CoreMinimal.h"
#include "E5605Parts.h"
#include "E5605Engine.generated.h"

class UE5605EngineParam;
class UMeshComponent;

UCLASS(Blueprintable)
class AE5605Engine : public AE5605Parts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MapObjectFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UE5605EngineParam* EnemyParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* ParentMesh;
    
public:
    AE5605Engine(const FObjectInitializer& ObjectInitializer);

};

