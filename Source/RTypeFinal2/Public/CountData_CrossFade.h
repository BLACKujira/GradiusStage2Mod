#pragma once
#include "CoreMinimal.h"
#include "CountData_Header.h"
#include "CountData_CrossFade.generated.h"

UCLASS(Blueprintable)
class UCountData_CrossFade : public UCountData_Header {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UCountData_CrossFade();

};

