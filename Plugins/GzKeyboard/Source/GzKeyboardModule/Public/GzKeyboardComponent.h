#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EGzKeyboardResult.h"
#include "EGzKeyboardType.h"
#include "GzKeyboardFinishedDelegate.h"
#include "GzKeyboardComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGzKeyboardComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGzKeyboardFinished OnFinished;
    
    UGzKeyboardComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool start(int32 _inUserIndex, EGzKeyboardType _inInputType, int32 _inInputOptions, int32 _inInputLength, const FString& _inTitle, const FString& _inSubTitle, const FString& _inPlaceHolder, const FString& _inInputText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunning();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetResult(EGzKeyboardResult& _outResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetInputString(FString& _outString);
    
};

