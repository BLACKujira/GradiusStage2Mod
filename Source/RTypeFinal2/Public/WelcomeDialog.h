#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WelcomeDialog.generated.h"

class UObjDialogWelcome;
class UWidgetWelcomeDialogBase;

UCLASS(Blueprintable)
class AWelcomeDialog : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFinished, bool, _isNotSave);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetWelcomeDialogBase* WidgetWelcome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjDialogWelcome* WelcomeDialogUI;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinished OnFinished;
    
public:
    AWelcomeDialog(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void BpStartDialog(const FText& _message, bool _skipButtonFlag);
    
    UFUNCTION(BlueprintCallable)
    void BpEndDialog();
    
};

