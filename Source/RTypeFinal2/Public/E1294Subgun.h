#pragma once
#include "CoreMinimal.h"
#include "E1294Parts.h"
#include "E1294Subgun.generated.h"

class UE1294SubgunParam;

UCLASS(Blueprintable)
class AE1294Subgun : public AE1294Parts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MapObjectFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UE1294SubgunParam* EnemyParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnemySerialNo;
    
public:
    AE1294Subgun(const FObjectInitializer& ObjectInitializer);

};

