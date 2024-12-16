#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "E7521GParam.generated.h"

class AE7521;
class USkeletalMesh;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class UE7521GParam : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Src;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* GMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AE7521* Parent;
    
    UE7521GParam();

};

