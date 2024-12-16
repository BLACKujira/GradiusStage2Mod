#pragma once
#include "CoreMinimal.h"
#include "CountData_Header.h"
#include "CountData_PExplosion.generated.h"

UCLASS(Blueprintable)
class UCountData_PExplosion : public UCountData_Header {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDummy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyOF;
    
    UCountData_PExplosion();

};

