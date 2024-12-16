#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SanitizeDisplayTextArrayResultDelegate.h"
#include "SanitizeDisplayTextArrayCallbackProxy.generated.h"

class UObject;
class USanitizeDisplayTextArrayCallbackProxy;

UCLASS(Blueprintable, MinimalAPI)
class USanitizeDisplayTextArrayCallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSanitizeDisplayTextArrayResult OnFinish;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
public:
    USanitizeDisplayTextArrayCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USanitizeDisplayTextArrayCallbackProxy* SanitizeDisplayTextArrayCallbackProxy(UObject* NewWorldContextObject, int32 LocalUserIndex, const TArray<FString>& _textArray);
    
};

