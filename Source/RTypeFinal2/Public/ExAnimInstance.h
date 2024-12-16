#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ExAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UExAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UExAnimInstance();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DeleteAll();
    
};

