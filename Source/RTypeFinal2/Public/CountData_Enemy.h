#pragma once
#include "CoreMinimal.h"
#include "CountData_Header.h"
#include "CountData_Param.h"
#include "CountData_Position.h"
#include "ECountData_Dir.h"
#include "CountData_Enemy.generated.h"

class UObject;

UCLASS(Blueprintable)
class UCountData_Enemy : public UCountData_Header {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Serial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCountData_Position position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECountData_Dir Dir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* PathData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCountData_Param Param;
    
    UCountData_Enemy();

};

