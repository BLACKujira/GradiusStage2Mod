#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "E7520GParam.generated.h"

class AE7520;
class USkeletalMesh;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class UE7520GParam : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Src;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* GMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AE7520* Parent;
    
    UE7520GParam();

};

