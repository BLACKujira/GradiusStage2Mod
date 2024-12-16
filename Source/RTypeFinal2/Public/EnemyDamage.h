#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EnemyDamage.generated.h"

class UMaterialInstanceDynamic;
class UMeshComponent;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEnemyDamage : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* TargetMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* MaterialParam;
    
public:
    UEnemyDamage(const FObjectInitializer& ObjectInitializer);

};

