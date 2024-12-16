#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PauseUserWidget.h"
#include "TMarkWidget.generated.h"

class AH012_3;

UCLASS(Blueprintable, EditInlineNew)
class UTMarkWidget : public UPauseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AH012_3* ownerBullet;
    
    UTMarkWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTransform(FVector WPos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLockOn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLevel(int32 _lvl);
    
};

