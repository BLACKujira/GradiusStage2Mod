#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnAsyncHandleDoesSaveGameExistDelegate.h"
#include "AsyncActionDoesExistSaveGame.generated.h"

class UAsyncActionDoesExistSaveGame;
class UObject;

UCLASS(Blueprintable)
class UAsyncActionDoesExistSaveGame : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAsyncHandleDoesSaveGameExist Completed;
    
    UAsyncActionDoesExistSaveGame();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAsyncActionDoesExistSaveGame* AsyncDoesSaveGameExist(UObject* WorldContextObject, const FString& SlotName, const int32 UserIndex);
    
};

