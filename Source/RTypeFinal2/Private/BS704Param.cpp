#include "BS704Param.h"

UBS704Param::UBS704Param() {
    this->BodyMeshs.AddDefaulted(2);
    this->AnimBP.AddDefaulted(2);
    this->EyeRotationSpeed = 0.00f;
    this->NearDeath_Material = NULL;
    this->NearDeath_Material_2 = NULL;
    this->NearDeath_Material_Eye = NULL;
    this->NearDeath_Material_Leg = NULL;
    this->MoveStartEffect = NULL;
    this->MoveStartEffectAttachSocketNames.AddDefaulted(2);
    this->DeathEffect = NULL;
    this->DeathEffect_Leg = NULL;
    this->DeathAnimTime = 0.00f;
    this->SoundMove_Horizontal = NULL;
    this->SoundMove_Vertical = NULL;
    this->SoundShot = NULL;
    this->SoundDeath = NULL;
    this->SoundNoDamage = NULL;
    this->WaitNodamageSETime = 0.00f;
    this->CollisionAData.AddDefaulted(3);
    this->CollisionCData.AddDefaulted(3);
    this->AttackEffect = NULL;
    this->AttackParam = NULL;
    this->E7412SpawnSocketNames.AddDefaulted(2);
    this->SearchTime = 0.00f;
    this->E7411Param = NULL;
    this->E7411AttachData.AddDefaulted(6);
    this->Score = 100;
    this->NearDeathRate = 0.00f;
    this->MoveLimitRange = 0.00f;
    this->BattleAltitudeA = 0.00f;
    this->ChangeBattleAltitudeTime = 0.00f;
    this->StartAttackTime = 0.00f;
    this->RetreatTime = 0.00f;
}


