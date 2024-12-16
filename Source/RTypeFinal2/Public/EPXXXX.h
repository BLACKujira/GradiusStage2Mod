#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EAEPXXXX_SpeedLevel.h"
#include "EAEPXXXX_Thruster.h"
#include "ESplineCmd_ScrHit.h"
#include "ESplineCmd_ShootType.h"
#include "ESplineCmd_SpeedLevel.h"
#include "EnemyActor.h"
#include "EPXXXX.generated.h"

class AEChargeEff;
class AEFXXXX;
class UEHXXXXEnv;
class UEMXXXXEnv;
class UEWActorEnv;
class USceneComponent;
class USplineCmdPlayer;

UCLASS(Blueprintable)
class AEPXXXX : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> ExtraNodes;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineCmdPlayer* SplineCmdPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEFXXXX* ForceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEChargeEff* ChargeEff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHXXXXEnv* WCannonEnv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEMXXXXEnv* MissileEnv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEWActorEnv* WShotEnv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEWActorEnv* ForceWShotEnv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor OriginalCanopyColor;
    
public:
    AEPXXXX(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ThrusterOn(EAEPXXXX_Thruster _ptn);
    
    UFUNCTION(BlueprintCallable)
    void SetBurnersEmission(float _a);
    
    UFUNCTION(BlueprintCallable)
    void RestartMainBurner();
    
    UFUNCTION(BlueprintCallable)
    void RenewBurners(EAEPXXXX_SpeedLevel spd, bool isBreak, bool _xSE);
    
    UFUNCTION(BlueprintCallable)
    void CmdWShotStop();
    
    UFUNCTION(BlueprintCallable)
    void CmdWShotStart();
    
    UFUNCTION(BlueprintCallable)
    void CmdSpeedLv(ESplineCmd_SpeedLevel _level);
    
    UFUNCTION(BlueprintCallable)
    void CmdShootStart(ESplineCmd_ShootType _type);
    
    UFUNCTION(BlueprintCallable)
    void CmdShootEnd();
    
    UFUNCTION(BlueprintCallable)
    void CmdScrHit(bool _onoff, ESplineCmd_ScrHit _scrhit);
    
    UFUNCTION(BlueprintCallable)
    void CmdMissileStop();
    
    UFUNCTION(BlueprintCallable)
    void CmdMissileStart();
    
    UFUNCTION(BlueprintCallable)
    void CmdLaserY();
    
    UFUNCTION(BlueprintCallable)
    void CmdLaserStop();
    
    UFUNCTION(BlueprintCallable)
    void CmdLaserR();
    
    UFUNCTION(BlueprintCallable)
    void CmdLaserB();
    
    UFUNCTION(BlueprintCallable)
    void CmdDead();
    
    UFUNCTION(BlueprintCallable)
    void CmdChargeStartLv(ESplineCmd_ShootType _type, float _time);
    
    UFUNCTION(BlueprintCallable)
    void CmdChargeStart();
    
    UFUNCTION(BlueprintCallable)
    void CmdChargeEnd();
    
    UFUNCTION(BlueprintCallable)
    void CmdBackfire();
    
};

