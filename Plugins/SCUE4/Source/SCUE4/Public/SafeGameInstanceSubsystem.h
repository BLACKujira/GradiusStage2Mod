#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SafeGameInstanceSubsystem.generated.h"

UCLASS(Blueprintable)
class SCUE4_API USafeGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HideGameGuard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowDebugging;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ScannerInterval;
    
    USafeGameInstanceSubsystem();

    UFUNCTION(BlueprintCallable)
    void HideGameGuardConsole(bool Set);
    
};

