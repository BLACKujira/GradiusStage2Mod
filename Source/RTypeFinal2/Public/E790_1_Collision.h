#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "E790_1_ColArmor.h"
#include "E790_1_ColBody.h"
#include "E790_1_ColHead.h"
#include "E790_1_ColNeck.h"
#include "E790_1_ColTail.h"
#include "E790_1_Collision.generated.h"

UCLASS(Abstract, Blueprintable)
class UE790_1_Collision : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FE790_1_ColBody body[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FE790_1_ColArmor Armor[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FE790_1_ColNeck> Neck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FE790_1_ColTail Tail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FE790_1_ColHead Head;
    
    UE790_1_Collision();

};

