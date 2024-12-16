#pragma once
#include "CoreMinimal.h"
#include "CountData_Header.h"
#include "CountData_EnemyKill.generated.h"

UCLASS(Blueprintable)
class UCountData_EnemyKill : public UCountData_Header {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Serial;
    
    UCountData_EnemyKill();

};

