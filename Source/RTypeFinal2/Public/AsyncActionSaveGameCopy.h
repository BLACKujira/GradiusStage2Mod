#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnAsyncHandleSaveGameCopyDelegate.h"
#include "AsyncActionSaveGameCopy.generated.h"

class UAsyncActionSaveGameCopy;
class UObject;

UCLASS(Blueprintable)
class UAsyncActionSaveGameCopy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAsyncHandleSaveGameCopy Completed;
    
    UAsyncActionSaveGameCopy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAsyncActionSaveGameCopy* AsyncCopyGameToSlot(UObject* WorldContextObject, const FString& SlotNameSrc, const FString& SlotNameDst, const int32 UserIndex);
    
};

