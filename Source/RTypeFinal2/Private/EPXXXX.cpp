#include "EPXXXX.h"
#include "SplineCmdPlayer.h"

AEPXXXX::AEPXXXX(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->MeshComponent.AddDefaulted(1);
    this->AudioComponent.AddDefaulted(1);
    this->ExtraNodes.AddDefaulted(5);
    this->SplineCmdPlayer = CreateDefaultSubobject<USplineCmdPlayer>(TEXT("SplineCmdPlayer"));
    this->ForceActor = NULL;
    this->ChargeEff = NULL;
    this->WCannonEnv = NULL;
    this->MissileEnv = NULL;
    this->WShotEnv = NULL;
    this->ForceWShotEnv = NULL;
}

void AEPXXXX::ThrusterOn(EAEPXXXX_Thruster _ptn) {
}

void AEPXXXX::SetBurnersEmission(float _a) {
}

void AEPXXXX::RestartMainBurner() {
}

void AEPXXXX::RenewBurners(EAEPXXXX_SpeedLevel spd, bool isBreak, bool _xSE) {
}

void AEPXXXX::CmdWShotStop() {
}

void AEPXXXX::CmdWShotStart() {
}

void AEPXXXX::CmdSpeedLv(ESplineCmd_SpeedLevel _level) {
}

void AEPXXXX::CmdShootStart(ESplineCmd_ShootType _type) {
}

void AEPXXXX::CmdShootEnd() {
}

void AEPXXXX::CmdScrHit(bool _onoff, ESplineCmd_ScrHit _scrhit) {
}

void AEPXXXX::CmdMissileStop() {
}

void AEPXXXX::CmdMissileStart() {
}

void AEPXXXX::CmdLaserY() {
}

void AEPXXXX::CmdLaserStop() {
}

void AEPXXXX::CmdLaserR() {
}

void AEPXXXX::CmdLaserB() {
}

void AEPXXXX::CmdDead() {
}

void AEPXXXX::CmdChargeStartLv(ESplineCmd_ShootType _type, float _time) {
}

void AEPXXXX::CmdChargeStart() {
}

void AEPXXXX::CmdChargeEnd() {
}

void AEPXXXX::CmdBackfire() {
}


