#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnAsyncHandleDoesSaveGameExistWithResultDelegate.h"
#include "AsyncActionDoesExistSaveGameWithResult.generated.h"

class UAsyncActionDoesExistSaveGameWithResult;
class UObject;

UCLASS(Blueprintable)
class UAsyncActionDoesExistSaveGameWithResult : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAsyncHandleDoesSaveGameExistWithResult Completed;
    
    UAsyncActionDoesExistSaveGameWithResult();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAsyncActionDoesExistSaveGameWithResult* AsyncDoesSaveGameExistWithResult(UObject* WorldContextObject, const FString& SlotName, const int32 UserIndex);
    
};

