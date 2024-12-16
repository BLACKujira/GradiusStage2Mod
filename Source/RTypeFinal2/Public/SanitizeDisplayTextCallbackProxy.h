#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SanitizeDisplayTextResultDelegate.h"
#include "SanitizeDisplayTextCallbackProxy.generated.h"

class UObject;
class USanitizeDisplayTextCallbackProxy;

UCLASS(Blueprintable, MinimalAPI)
class USanitizeDisplayTextCallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSanitizeDisplayTextResult OnFinish;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
public:
    USanitizeDisplayTextCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USanitizeDisplayTextCallbackProxy* SanitizeDisplayText(UObject* NewWorldContextObject, int32 LocalUserIndex, const FString& _text);
    
};

