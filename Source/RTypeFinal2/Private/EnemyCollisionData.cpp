#include "EnemyCollisionData.h"

FEnemyCollisionData::FEnemyCollisionData() {
    this->PrimType = EEnemyPrimType::Sphere;
    this->Radius = 0.00f;
    this->HalfHeight = 0.00f;
    this->AttachMeshIndex = 0;
    this->CollisionIndex = 0;
    this->AttrSearchOff = false;
    this->AttrHard = false;
    this->AttrImmortal = false;
    this->AttrBiteOff = false;
}

