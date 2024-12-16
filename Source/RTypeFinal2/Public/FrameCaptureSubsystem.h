#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Templates/SubclassOf.h"
#include "FrameCaptureSubsystem.generated.h"

class AActor;

UCLASS(Blueprintable, NotPlaceable, Transient)
class UFrameCaptureSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ClassAFrameCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AFrameCapture;
    
public:
    UFrameCaptureSubsystem();

    UFUNCTION(BlueprintCallable)
    void StartDisplay();
    
    UFUNCTION(BlueprintCallable)
    void EndDisplay(float _fadeoutTime);
    
};

