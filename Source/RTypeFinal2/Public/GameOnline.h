#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EGameOnline_PlatformMessageType.h"
#include "EGameOnline_PrivilegeResults.h"
#include "EGameOnline_UserPrivileges.h"
#include "GameOnline_GetUserPrivilegesCompleteDelegateDelegate.h"
#include "GameOnline_LoginCompleteDelegateDelegate.h"
#include "GameOnline.generated.h"

class UGameOnline_VariantData;

UCLASS(Blueprintable, Config=Game)
class UGameOnline : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isLogin;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRestrictCommunication;
    
public:
    UGameOnline();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool TestPrivilegeResults(int32 _result, EGameOnline_PrivilegeResults _cause);
    
    UFUNCTION(BlueprintCallable)
    bool ShowPlatformMessageBox(int32 _localUserIndex, EGameOnline_PlatformMessageType _platformMessageType);
    
    UFUNCTION(BlueprintCallable)
    void SetRestrictCommunication(bool _disable);
    
    UFUNCTION(BlueprintCallable)
    void SetPresence(int32 _localUserIndex, const FString& _statusStr, UGameOnline_VariantData* _presenceData);
    
    UFUNCTION(BlueprintCallable)
    void SetIsLogin(bool _isLogin);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString PrivilegeResultsToDebugString(int32 _result);
    
    UFUNCTION(BlueprintCallable)
    UGameOnline_VariantData* NewVariantData();
    
    UFUNCTION(BlueprintCallable)
    void LoginRequest(int32 _localUserIndex, FGameOnline_LoginCompleteDelegate _delegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOnlineEnvironmentProduction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOnlineEnvironmentDevelopment();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOnlineEnvironmentCertification();
    
    UFUNCTION(BlueprintCallable)
    void GetUserPrivilegesRequest(int32 _localUserIndex, EGameOnline_UserPrivileges _privilege, FGameOnline_GetUserPrivilegesCompleteDelegate _delegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRestrictCommunication() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsLogin();
    
};

