#pragma once
#include "CoreMinimal.h"
#include "EStageBranchType.h"
#include "EnemyParam.h"
#include "I002Model.h"
#include "I002Param.generated.h"

UCLASS(Blueprintable)
class UI002Param : public UEnemyParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemScrollSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EStageBranchType, FI002Model> model;
    
    UI002Param();

};

