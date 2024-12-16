#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ConfirmDialog.generated.h"

class UObjDialogConfirm;
class UWidgetConfirmDialogBase;

UCLASS(Blueprintable)
class AConfirmDialog : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetConfirmDialogBase* WidgetConfirm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjDialogConfirm* ConfirmDialogUI;
    
    AConfirmDialog(const FObjectInitializer& ObjectInitializer);

};

