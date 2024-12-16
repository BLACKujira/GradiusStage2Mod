#include "E1020PartsArmor.h"

UE1020PartsArmor::UE1020PartsArmor() {
    this->Mesh = NULL;
    this->ANIM = NULL;
    this->AnimBP = NULL;
    this->BonePartsAttachSocketName = TEXT("Out");
    this->BreakEffect = NULL;
    this->BreakEffectScale = 300.00f;
    this->AttackAnim = NULL;
}


