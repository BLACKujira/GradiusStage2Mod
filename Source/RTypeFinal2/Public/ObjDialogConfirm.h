#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WidgetFocusInterface.h"
#include "ObjDialogConfirm.generated.h"

UCLASS(Blueprintable)
class UObjDialogConfirm : public UObject, public IWidgetFocusInterface {
    GENERATED_BODY()
public:
    UObjDialogConfirm();


    // Fix for true pure virtual functions not being implemented
};

