#pragma once
#include "CoreMinimal.h"
#include "CountData_Enemy.h"
#include "CountData_EnemyCondExist.generated.h"

UCLASS(Blueprintable)
class UCountData_EnemyCondExist : public UCountData_Enemy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Cond_Id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Cond_Serial;
    
    UCountData_EnemyCondExist();

};

