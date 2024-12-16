#include "AircraftBasePawn.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Net/UnrealNetwork.h"

AAircraftBasePawn::AAircraftBasePawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->Collision_B = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision_B"));
    this->ItemCatcher = CreateDefaultSubobject<UCapsuleComponent>(TEXT("ItemCatcher"));
    this->BodyNode = CreateDefaultSubobject<USceneComponent>(TEXT("BodyNode"));
    this->BodyMeshNode = CreateDefaultSubobject<USceneComponent>(TEXT("BodyMeshNode"));
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->DockingFront = CreateDefaultSubobject<USceneComponent>(TEXT("DockingFront"));
    this->DockingRear = CreateDefaultSubobject<USceneComponent>(TEXT("DockingRear"));
    this->DockingFrontForShoot = CreateDefaultSubobject<USceneComponent>(TEXT("DockingFrontForShoot"));
    this->DockingRearForShoot = CreateDefaultSubobject<USceneComponent>(TEXT("DockingRearForShoot"));
    this->ShotNode = CreateDefaultSubobject<USceneComponent>(TEXT("ShotPos"));
    this->ShockWaveNode = CreateDefaultSubobject<USceneComponent>(TEXT("ShockWavePos"));
    this->Collision_Hit = NULL;
    this->Collision_ND = NULL;
    this->ShotNodeEx = NULL;
    this->ForceGotten = NULL;
    this->BodyID = EBODY_NO::BD_R9A;
    this->BodyColorID = EBodyColorID::BC__;
    this->bAsMenuModel = false;
    this->bWireFrame = false;
    this->bMuseum = false;
    this->bDecal = false;
    this->bHangar = false;
    this->WCannonEnv = NULL;
    this->ShotEnv = NULL;
    this->MisEnv = NULL;
    this->ChargeSE = NULL;
    this->ChargeSE_UP = NULL;
    this->NavigateObject = NULL;
    this->NodeathEff = NULL;
    this->BubbleEffBody = NULL;
    this->BubbleEffCharge[0] = NULL;
    this->BubbleEffCharge[1] = NULL;
    this->BubbleEffCharge[2] = NULL;
    this->BubbleEffCharge[3] = NULL;
    this->BubbleEffCharge[4] = NULL;
    this->BubbleEffCharge[5] = NULL;
    this->BubbleEffCharge[6] = NULL;
    this->BubbleEffCharge[7] = NULL;
    this->PlayerLoaderActor = NULL;
    this->ItemCatcher->SetupAttachment(RootComponent);
    this->BodyNode->SetupAttachment(RootComponent);
    this->BodyMeshNode->SetupAttachment(BodyNode);
    this->SkeletalMeshComponent->SetupAttachment(BodyMeshNode);
    this->DockingFront->SetupAttachment(BodyNode);
    this->DockingRear->SetupAttachment(BodyNode);
    this->DockingFrontForShoot->SetupAttachment(BodyNode);
    this->DockingRearForShoot->SetupAttachment(BodyNode);
    this->ShotNode->SetupAttachment(BodyNode);
    this->ShockWaveNode->SetupAttachment(BodyNode);
    this->Collision_B->SetupAttachment(RootComponent);
}

void AAircraftBasePawn::ThrusterOn(EAircraftThruster _ptn) {
}

void AAircraftBasePawn::TermWeaponsGimmick() {
}

void AAircraftBasePawn::TeleportW(FVector _pos, FRotator _rot) {
}

void AAircraftBasePawn::StopSoundPlayerOut() {
}

void AAircraftBasePawn::SetUniqueEffectVisibility(bool _out, bool _in) {
}

void AAircraftBasePawn::SetStopForceGimmickByPlayerMove(bool _stop) {
}

void AAircraftBasePawn::SetStartPosition(const FVector& _position) {
}

void AAircraftBasePawn::SetMuseumAlpha(float _alpha) {
}

void AAircraftBasePawn::SetHidePlayer(bool _sw) {
}

void AAircraftBasePawn::SetHangerOffset2() {
}

void AAircraftBasePawn::SetHangerOffset() {
}

void AAircraftBasePawn::SetForceDockingRequest() {
}

void AAircraftBasePawn::SetForceDockingForce(bool bFront) {
}

void AAircraftBasePawn::SetExTilt(float _roll, float _pitch, float _yaw) {
}

void AAircraftBasePawn::SetExRotate(float _roll, float _pitch, float _yaw, float _rollV, float _pitchV, float _yawV) {
}

void AAircraftBasePawn::SetExRoll(float Ang, float _t, bool _any) {
}

void AAircraftBasePawn::SetDummySetting(AAircraftBasePawn* _dummyPlayer, AForceActor* _f, ABitActor* _b0, ABitActor* _b1) {
}

void AAircraftBasePawn::SetDisableJet(bool _disable) {
}

void AAircraftBasePawn::SetDisableControl(bool _sw) {
}

void AAircraftBasePawn::SetCockpitVisibility(bool _visible) {
}

void AAircraftBasePawn::SetChangeEffect(AActor* _tgt, float _t, UNiagaraSystem* _eff) {
}

void AAircraftBasePawn::SetChangeDummyEffect(float _lifeTime, AAircraftBasePawn* _dummyPlayer, AForceActor* _f, ABitActor* _b0, ABitActor* _b1) {
}

void AAircraftBasePawn::SetBurnersEmission(float _a) {
}

void AAircraftBasePawn::SetBodyMeshAsVisibilityTarget(bool _isTarget) {
}

void AAircraftBasePawn::SetBodyDecal(UTextureRenderTarget2D* _decalTex) {
}

void AAircraftBasePawn::SetActorHiddenInGameMultiCause(bool bNewHidden, int32 _cause) {
}

void AAircraftBasePawn::Server_ReplicateForceCoordinate_Implementation(const FTimespan& _time, const FVector& _location, const FQuat& _rotation) {
}

void AAircraftBasePawn::Server_ReplicateCoordinateAndScore_Implementation(const FTimespan& _time, const FVector& _location, const FQuat& _rotation, const uint32 _score) {
}

void AAircraftBasePawn::RestartRevBurner() {
}

void AAircraftBasePawn::RestartMainBurner() {
}

void AAircraftBasePawn::ReqUniqueForm(FName _form, bool _sw) {
}

void AAircraftBasePawn::ReqMuseumFormTrg() {
}

void AAircraftBasePawn::ReqHangarForm(bool _sw) {
}

void AAircraftBasePawn::ReqDecalForm(bool _sw) {
}

void AAircraftBasePawn::RenewCanopyColor(FCanopyColor _ccStruct) {
}

void AAircraftBasePawn::RenewCanopyAlphaForDemo(float _alpha) {
}

void AAircraftBasePawn::RenewBurnersHEX(UNiagaraSystem* _nsEff, EAircraftSpeedLevelH _emiLv, bool _xSE) {
}

void AAircraftBasePawn::RenewBurnersH(EAircraftSpeedLevelH spd, bool isBreak, bool _xSE) {
}

void AAircraftBasePawn::RenewBurnersEX(UNiagaraSystem* _nsEff, EAircraftSpeedLevel _emiLv, bool _xSE) {
}

void AAircraftBasePawn::RenewBurners(EAircraftSpeedLevel spd, bool isBreak, bool _xSE) {
}

void AAircraftBasePawn::RenewBodyColor(EBodyColorID _bcID) {
}

void AAircraftBasePawn::PreDestroyWeapon() {
}

void AAircraftBasePawn::PlayerLoader_FinishedLoading() {
}

void AAircraftBasePawn::PauseAnim(bool _pause, bool _reset) {
}

void AAircraftBasePawn::OnRep_ReplicateForceCoordinate() {
}

void AAircraftBasePawn::OnRep_ReplicateCoordinateAndScore() {
}

void AAircraftBasePawn::OnPauseChanged(bool _isPause) {
}

void AAircraftBasePawn::OnOverlapItemBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AAircraftBasePawn::OnOverlapBulletNoDamageBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AAircraftBasePawn::OnOverlapBulletBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AAircraftBasePawn::OnHitLand(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& hit) {
}

void AAircraftBasePawn::NavigateSetObject(UObject* _naviObj) {
}

void AAircraftBasePawn::NavigateClearObject() {
}

bool AAircraftBasePawn::IsOF() {
    return false;
}

bool AAircraftBasePawn::IsInitialized() {
    return false;
}

bool AAircraftBasePawn::IsGetForce() {
    return false;
}

EPlayerLevel AAircraftBasePawn::GetPlayerLevel() {
    return EPlayerLevel::Lv00;
}

bool AAircraftBasePawn::GetIsDead() {
    return false;
}

UPCustomizeDataAsset* AAircraftBasePawn::GetCustomizeDataAsset() {
    return NULL;
}

FLinearColor AAircraftBasePawn::GetCanopyColor() {
    return FLinearColor{};
}

int32 AAircraftBasePawn::GetBurnerType() {
    return 0;
}

void AAircraftBasePawn::Explosion() {
}

void AAircraftBasePawn::DestroyForce(FVector _forceWorldPos) {
}

void AAircraftBasePawn::Client_OnOverlapItemBegin_Implementation(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AAircraftBasePawn::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAircraftBasePawn, PlayerCoordinateAndScore);
    DOREPLIFETIME(AAircraftBasePawn, ForceCoordinate);
}


