#include "BS705Param.h"

UBS705Param::UBS705Param() {
    this->Defence = 0;
    this->RstScore = 10000;
    this->StmScore = 10000;
    this->Collision_Head.AddDefaulted(3);
    this->Collision_Neck.AddDefaulted(1);
    this->Collision_Body.AddDefaulted(2);
    this->Collision_Tail.AddDefaulted(12);
    this->Mesh_Body = NULL;
    this->AnimBP_Body = NULL;
    this->Mesh_Stom = NULL;
    this->AnimBP_Stom = NULL;
    this->EffectShinenha = NULL;
    this->SoundStomStartVoice = NULL;
    this->SoundStomStartVoice_Timing = 0.50f;
    this->SoundStomShinenhaVoice = NULL;
    this->SoundStomShinenha = NULL;
    this->SoundRestraintDamage = NULL;
    this->WaitSETime_RestraintDamage = 0.07f;
    this->SoundStomachDamageUpper = NULL;
    this->SoundStomachDamageLower = NULL;
    this->WaitSETime_StomachDamage = 0.07f;
    this->SoundRestraintDeath = NULL;
    this->SoundStomachDeath = NULL;
    this->SoundStomachDeathVoice = NULL;
    this->SoundBodyDeath_Loop1 = NULL;
    this->SoundBodyDeath_Loop1_FadeDuration = 0.00f;
    this->Phase1KeepTime = 90.00f;
    this->TailAttackStartTime = 10.00f;
    this->StomCoreNoDamageTime = 1.00f;
    this->Phase2KeepTime = 90.00f;
    this->BS705_ShinehaParam = NULL;
    this->ShinenhaStartTime = 5.00f;
    this->P2Death_ColOffDelay_Stom = 0.00f;
    this->P2Death_ColOffDelay_Full = 5.00f;
    this->P2Death_CameraRot_Time = 1.00f;
    this->BS705_CapsuleParam = NULL;
    this->DeathTime = 5.00f;
}


