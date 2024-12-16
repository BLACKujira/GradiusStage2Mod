#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EAchievementId.h"
#include "Achievement.generated.h"

class APlayerController;
class UAchievementObject;
class UObject;

UCLASS(Blueprintable, NotPlaceable, Transient)
class UAchievement : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAchievementObject*> AchievementObjects;
    
public:
    UAchievement();

    UFUNCTION(BlueprintCallable)
    void SetCacheProgress(EAchievementId _id, float _percent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_worldContextObject"))
    void CopyCacheProgressAll(UObject* _worldContextObject, APlayerController* _playerController);
    
    UFUNCTION(BlueprintCallable)
    bool CheckCondPlatinumAchievement(APlayerController* _playerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString AchievementIdToFString(EAchievementId _id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName AchievementIdToFName(EAchievementId _id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EAchievementId AchievementIdFromFString(const FString& _idStr);
    
};

