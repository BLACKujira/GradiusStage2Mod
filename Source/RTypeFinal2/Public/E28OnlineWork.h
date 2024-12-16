#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "CustomizeSettingOnline.h"
#include "E28OnlineWork.generated.h"

UCLASS(Blueprintable, NotPlaceable, Transient)
class UE28OnlineWork : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LoginIndexLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoginIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PilotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomizeSettingOnline CustomizeSettingOnline;
    
public:
    UE28OnlineWork();

    UFUNCTION(BlueprintCallable)
    void SetPilotName(const FString& _value);
    
    UFUNCTION(BlueprintCallable)
    void SetLoginIndexLock(bool _value);
    
    UFUNCTION(BlueprintCallable)
    void SetLoginIndex(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomizeSettingOnline(const FCustomizeSettingOnline& _value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPilotName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLoginIndexLock() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLoginIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCustomizeSettingOnline GetCustomizeSettingOnline() const;
    
    UFUNCTION(BlueprintCallable)
    void BackupData();
    
};

