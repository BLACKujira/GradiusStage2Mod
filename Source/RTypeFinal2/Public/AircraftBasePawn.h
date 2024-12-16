#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "CanopyColor.h"
#include "EAircraftSpeedLevel.h"
#include "EAircraftSpeedLevelH.h"
#include "EAircraftThruster.h"
#include "EBODY_NO.h"
#include "EBodyColorID.h"
#include "EPlayerLevel.h"
#include "OnDeadDelegateDelegate.h"
#include "PawnBase.h"
#include "ReplicateCoordinate.h"
#include "ReplicateCoordinateAndScore.h"
#include "WaterlineInterface.h"
#include "AircraftBasePawn.generated.h"

class AActor;
class AAircraftBasePawn;
class ABitActor;
class AForceActor;
class APlayerLoaderBase;
class UAudioComponent;
class UCapsuleComponent;
class UHActorEnv;
class UMBaseEnv;
class UNiagaraComponent;
class UNiagaraSystem;
class UObject;
class UPCustomizeDataAsset;
class UPrimitiveComponent;
class USceneComponent;
class USkeletalMeshComponent;
class UTextureRenderTarget2D;
class UWActorEnv;

UCLASS(Blueprintable)
class AAircraftBasePawn : public APawnBase, public IWaterlineInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* Collision_B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* ItemCatcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* BodyNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* BodyMeshNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DockingFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DockingRear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DockingFrontForShoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DockingRearForShoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ShotNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ShockWaveNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* Collision_Hit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, UNiagaraComponent*> UniqueEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* Collision_ND;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeadDelegate OnDeadDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ShotNodeEx;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AForceActor* ForceGotten;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBODY_NO BodyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBodyColorID BodyColorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCanopyColor CanopyColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAsMenuModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWireFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMuseum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDecal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHangar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor OriginalCanopyColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHActorEnv* WCannonEnv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWActorEnv* ShotEnv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMBaseEnv* MisEnv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* ChargeSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* ChargeSE_UP;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* NavigateObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NodeathEff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* BubbleEffBody;
    
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* BubbleEffCharge[8];
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerLoaderBase* PlayerLoaderActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicateCoordinateAndScore, meta=(AllowPrivateAccess=true))
    FReplicateCoordinateAndScore PlayerCoordinateAndScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicateForceCoordinate, meta=(AllowPrivateAccess=true))
    FReplicateCoordinate ForceCoordinate;
    
public:
    AAircraftBasePawn(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void ThrusterOn(EAircraftThruster _ptn);
    
public:
    UFUNCTION(BlueprintCallable)
    void TermWeaponsGimmick();
    
    UFUNCTION(BlueprintCallable)
    void TeleportW(FVector _pos, FRotator _rot);
    
    UFUNCTION(BlueprintCallable)
    void StopSoundPlayerOut();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetUniqueEffectVisibility(bool _out, bool _in);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetStopForceGimmickByPlayerMove(bool _stop);
    
    UFUNCTION(BlueprintCallable)
    void SetStartPosition(const FVector& _position);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetMuseumAlpha(float _alpha);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetHidePlayer(bool _sw);
    
    UFUNCTION(BlueprintCallable)
    void SetHangerOffset2();
    
    UFUNCTION(BlueprintCallable)
    void SetHangerOffset();
    
    UFUNCTION(BlueprintCallable)
    void SetForceDockingRequest();
    
    UFUNCTION(BlueprintCallable)
    void SetForceDockingForce(bool bFront);
    
    UFUNCTION(BlueprintCallable)
    void SetExTilt(float _roll, float _pitch, float _yaw);
    
    UFUNCTION(BlueprintCallable)
    void SetExRotate(float _roll, float _pitch, float _yaw, float _rollV, float _pitchV, float _yawV);
    
    UFUNCTION(BlueprintCallable)
    void SetExRoll(float Ang, float _t, bool _any);
    
    UFUNCTION(BlueprintCallable)
    void SetDummySetting(AAircraftBasePawn* _dummyPlayer, AForceActor* _f, ABitActor* _b0, ABitActor* _b1);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableJet(bool _disable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableControl(bool _sw);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetCockpitVisibility(bool _visible);
    
    UFUNCTION(BlueprintCallable)
    void SetChangeEffect(AActor* _tgt, float _t, UNiagaraSystem* _eff);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetChangeDummyEffect(float _lifeTime, AAircraftBasePawn* _dummyPlayer, AForceActor* _f, ABitActor* _b0, ABitActor* _b1);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetBurnersEmission(float _a);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyMeshAsVisibilityTarget(bool _isTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyDecal(UTextureRenderTarget2D* _decalTex);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetActorHiddenInGameMultiCause(bool bNewHidden, int32 _cause);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ReplicateForceCoordinate(const FTimespan& _time, const FVector& _location, const FQuat& _rotation);
    
    UFUNCTION(Reliable, Server)
    void Server_ReplicateCoordinateAndScore(const FTimespan& _time, const FVector& _location, const FQuat& _rotation, const uint32 _score);
    
public:
    UFUNCTION(BlueprintCallable)
    void RestartRevBurner();
    
    UFUNCTION(BlueprintCallable)
    void RestartMainBurner();
    
    UFUNCTION(BlueprintCallable)
    void ReqUniqueForm(FName _form, bool _sw);
    
    UFUNCTION(BlueprintCallable)
    void ReqMuseumFormTrg();
    
    UFUNCTION(BlueprintCallable)
    void ReqHangarForm(bool _sw);
    
    UFUNCTION(BlueprintCallable)
    void ReqDecalForm(bool _sw);
    
    UFUNCTION(BlueprintCallable)
    void RenewCanopyColor(FCanopyColor _ccStruct);
    
    UFUNCTION(BlueprintCallable)
    void RenewCanopyAlphaForDemo(float _alpha);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RenewBurnersHEX(UNiagaraSystem* _nsEff, EAircraftSpeedLevelH _emiLv, bool _xSE);
    
    UFUNCTION(BlueprintCallable)
    void RenewBurnersH(EAircraftSpeedLevelH spd, bool isBreak, bool _xSE);
    
    UFUNCTION(BlueprintCallable)
    void RenewBurnersEX(UNiagaraSystem* _nsEff, EAircraftSpeedLevel _emiLv, bool _xSE);
    
    UFUNCTION(BlueprintCallable)
    void RenewBurners(EAircraftSpeedLevel spd, bool isBreak, bool _xSE);
    
public:
    UFUNCTION(BlueprintCallable)
    void RenewBodyColor(EBodyColorID _bcID);
    
    UFUNCTION(BlueprintCallable)
    void PreDestroyWeapon();
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayerLoader_FinishedLoading();
    
    UFUNCTION(BlueprintCallable)
    void PauseAnim(bool _pause, bool _reset);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicateForceCoordinate();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicateCoordinateAndScore();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPauseChanged(bool _isPause);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapItemBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapBulletNoDamageBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapBulletBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnHitLand(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& hit);
    
    UFUNCTION(BlueprintCallable)
    void NavigateSetObject(UObject* _naviObj);
    
    UFUNCTION(BlueprintCallable)
    void NavigateClearObject();
    
    UFUNCTION(BlueprintCallable)
    bool IsOF();
    
    UFUNCTION(BlueprintCallable)
    bool IsInitialized();
    
    UFUNCTION(BlueprintCallable)
    bool IsGetForce();
    
    UFUNCTION(BlueprintCallable)
    EPlayerLevel GetPlayerLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDead();
    
protected:
    UFUNCTION(BlueprintCallable)
    UPCustomizeDataAsset* GetCustomizeDataAsset();
    
public:
    UFUNCTION(BlueprintCallable)
    FLinearColor GetCanopyColor();
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 GetBurnerType();
    
public:
    UFUNCTION(BlueprintCallable)
    void Explosion();
    
    UFUNCTION(BlueprintCallable)
    void DestroyForce(FVector _forceWorldPos);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_OnOverlapItemBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    

    // Fix for true pure virtual functions not being implemented
};

