#pragma once
#include "CoreMinimal.h"
#include "EEnemyPath_Plane.h"
#include "EnemyPathData_Head.h"
#include "EnemyPathData_Plane.generated.h"

UCLASS(Blueprintable)
class UEnemyPathData_Plane : public UEnemyPathData_Head {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnemyPath_Plane Plane;
    
    UEnemyPathData_Plane();

};

