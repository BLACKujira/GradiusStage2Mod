#pragma once
#include "CoreMinimal.h"
#include "EParamCapsule.h"
#include "E790_1_ColArmor.generated.h"

USTRUCT(BlueprintType)
struct FE790_1_ColArmor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEParamCapsule Armor_A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEParamCapsule Armor_B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEParamCapsule Armor_C;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    RTYPEFINAL2_API FE790_1_ColArmor();
};

