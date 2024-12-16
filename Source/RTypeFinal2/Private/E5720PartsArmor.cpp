#include "E5720PartsArmor.h"

UE5720PartsArmor::UE5720PartsArmor() {
    this->Mesh = NULL;
    this->ANIM = NULL;
    this->BonePartsAttachSocketName = TEXT("Out");
    this->BreakEffect = NULL;
    this->BreakEffectScale = 300.00f;
    this->AttackAnim = NULL;
    this->DamageAnim = NULL;
    this->DeathAnim = NULL;
}


