#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "EAchievementId.h"
#include "GzAchievementWriteDelegateDelegate.h"
#include "GzAchievementWriteCallbackProxy.generated.h"

class APlayerController;
class UGzAchievementWriteCallbackProxy;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UGzAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGzAchievementWriteDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGzAchievementWriteDelegate OnFailure;
    
    UGzAchievementWriteCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UGzAchievementWriteCallbackProxy* WriteAchievementProgress(UObject* WorldContextObject, APlayerController* PlayerController, EAchievementId AchievementId, float Progress, int32 UserTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UGzAchievementWriteCallbackProxy* UnlockAchievement(UObject* WorldContextObject, APlayerController* PlayerController, EAchievementId AchievementId, int32 UserTag);
    
};

