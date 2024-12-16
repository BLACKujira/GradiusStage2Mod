#include "E252Param.h"

UE252Param::UE252Param() {
    this->Life = 100;
    this->Defence = 0;
    this->Power = 100;
    this->Score = 0;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->InitialMoveSpeed = 0.00f;
    this->InitialMoveTime = 0.00f;
    this->SearchRadiusA = 0.00f;
    this->SearchLimitTime = 0.00f;
    this->MoveAccel = 30.00f;
    this->DeflectionAngle = 30.00f;
    this->SoundDeath = NULL;
    this->SoundAppear = NULL;
    this->SoundAppearInterval = 0.00f;
    this->SBodyMesh = NULL;
    this->LineMesh = NULL;
    this->BodyEff = NULL;
    this->deathEff = NULL;
}


