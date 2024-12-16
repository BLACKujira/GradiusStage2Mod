#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EEnemyPath_Command.h"
#include "EnemyPathData_Head.generated.h"

UCLASS(Blueprintable)
class UEnemyPathData_Head : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnemyPath_Command Command;
    
    UEnemyPathData_Head();

};

