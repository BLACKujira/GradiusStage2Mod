#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "FindSessionsCallbackProxy.h"
#include "MultiplayStageSetting.h"
#include "Templates/SubclassOf.h"
#include "GameMatching.generated.h"

class UGameMatchingHelperBase;

UCLASS(Blueprintable, Config=Game)
class UGameMatching : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGameMatchingHelperBase* SubsystemHelper;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameMatchingHelperBase> SubsystemHelperClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SessionIconPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PendingInviteDisableFactor;
    
public:
    UGameMatching();

    UFUNCTION(BlueprintCallable)
    void UpdateSessionJoinability(bool _bPublicSearchable, bool _bAllowJoinInProgress, bool _bAllowInvites, bool _bJoinViaPresence, bool _bJoinViaPresenceFriendsOnly);
    
    UFUNCTION(BlueprintCallable)
    void SetUsingMultiplayerFeatures(bool _using);
    
    UFUNCTION(BlueprintCallable)
    void SetPendingInvite_PrivilegesCheckedAndAllowed(bool _result);
    
    UFUNCTION(BlueprintCallable)
    void SetPendingInvite_Disable(int32 _factor);
    
    UFUNCTION(BlueprintCallable)
    void SetNumStartPlayer(int32 _num);
    
    UFUNCTION(BlueprintCallable)
    void SetMultiplayStageSetting(const FMultiplayStageSetting& _setting);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableLan(bool _flag);
    
    UFUNCTION(BlueprintCallable)
    void SetConnectionNum(int32 _num);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPendingInvite_Disable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableLan() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPendingInvite() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetSessionJoinability(bool& _bPublicSearchable, bool& _bAllowJoinInProgress, bool& _bAllowInvites, bool& _bJoinViaPresence, bool& _bJoinViaPresenceFriendsOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPendingInvite_PrivilegesCheckedAndAllowed() const;
    
    //UFUNCTION(BlueprintCallable, BlueprintPure)
    //void GetPendingInvite_OnlineSessionSearchResult(FBlueprintSessionResult& _sessionResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPendingInvite_ControllerId(int32& _controllerId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumStartPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMultiplayStageSetting GetMultiplayStageSetting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetConnectionNum() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearPendingInvite_Disable(int32 _factor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CleanupSessionIsRunning() const;
    
    UFUNCTION(BlueprintCallable)
    void CleanupSession();
    
    UFUNCTION(BlueprintCallable)
    bool CheckUsingMultiplayerFeaturesByJoinedPlayerNum(int32 _playerNum);
    
};

