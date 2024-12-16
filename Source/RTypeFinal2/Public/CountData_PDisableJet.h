#pragma once
#include "CoreMinimal.h"
#include "CountData_Header.h"
#include "CountData_PDisableJet.generated.h"

UCLASS(Blueprintable)
class UCountData_PDisableJet : public UCountData_Header {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisable;
    
    UCountData_PDisableJet();

};

