#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnAsyncHandleSaveDataDelegate.h"
#include "AsyncActionSaveData.generated.h"

class UAsyncActionSaveData;
class UObject;
class USavedataBinary;

UCLASS(Blueprintable)
class UAsyncActionSaveData : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAsyncHandleSaveData Completed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> SaveDataObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USavedataBinary* BinaryObject;
    
public:
    UAsyncActionSaveData();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAsyncActionSaveData* AsyncSaveDataToSlot(UObject* WorldContextObject, const TArray<uint8>& NewSaveDataObject, const FString& SlotName, const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAsyncActionSaveData* AsyncSaveBinaryToSlot(UObject* WorldContextObject, USavedataBinary* NewBinaryObject, const FString& SlotName, const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAsyncActionSaveData* AsyncLoadDataFromSlot(UObject* WorldContextObject, const FString& SlotName, const int32 UserIndex);
    
};

