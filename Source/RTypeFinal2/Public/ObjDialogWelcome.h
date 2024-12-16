#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WidgetFocusInterface.h"
#include "ObjDialogWelcome.generated.h"

UCLASS(Blueprintable)
class UObjDialogWelcome : public UObject, public IWidgetFocusInterface {
    GENERATED_BODY()
public:
    UObjDialogWelcome();


    // Fix for true pure virtual functions not being implemented
};

