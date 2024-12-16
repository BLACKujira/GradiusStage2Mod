#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EAchievementId.h"
#include "AchievementCond.generated.h"

class UObject;

UCLASS(Blueprintable)
class UAchievementCond : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAchievementCond();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="_worldContextObject"))
    static void SetClearRoot(UObject* _worldContextObject, int32 _rootNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContext"))
    static EAchievementId CheckTotalScore1Play(UObject* _worldContext);
    
};

