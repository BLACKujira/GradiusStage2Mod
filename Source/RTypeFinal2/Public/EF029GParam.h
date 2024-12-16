#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EF029GParam.generated.h"

class AEF029;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class UEF029GParam : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Src;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEF029* Parent;
    
    UEF029GParam();

};

