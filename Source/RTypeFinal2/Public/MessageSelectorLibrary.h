#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MessageSelectorParams.h"
#include "MessageSelectorLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class UMessageSelectorLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMessageSelectorLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="_worldContextObject"))
    static void MakeMessageSelectorParams(UObject* _worldContextObject, FMessageSelectorParams& _params, const FName _textTable, TArray<FName> _textIds);
    
};

