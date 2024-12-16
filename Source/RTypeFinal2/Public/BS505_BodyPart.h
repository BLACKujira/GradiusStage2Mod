#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS505_BodyPart.generated.h"

class AActor;
class UMeshComponent;

UCLASS(Blueprintable)
class ABS505_BodyPart : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* ParentMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Camera;
    
public:
    ABS505_BodyPart(const FObjectInitializer& ObjectInitializer);

};

