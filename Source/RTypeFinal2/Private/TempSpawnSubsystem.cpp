#include "TempSpawnSubsystem.h"

UTempSpawnSubsystem::UTempSpawnSubsystem() {
    this->TempMeshSpawner = NULL;
    this->TempMeshSpawnerSphere = NULL;
}

int32 UTempSpawnSubsystem::SpawnTempMeshSphere(const FVector& _pos, float _radius, float _lifeTime) {
    return 0;
}

int32 UTempSpawnSubsystem::SpawnTempMesh(const FTransform& _trans, float _lifeTime) {
    return 0;
}

void UTempSpawnSubsystem::SetTempMeshVisibilityDefault() {
}

void UTempSpawnSubsystem::SetTempMeshVisibility(bool _visible) {
}

ATempMeshSpawnerSphere* UTempSpawnSubsystem::GetTempMeshSpawnerSphere() {
    return NULL;
}

ATempMeshSpawner* UTempSpawnSubsystem::GetTempMeshSpawner() {
    return NULL;
}

void UTempSpawnSubsystem::DeleteTempMeshSphere(int32 _index) {
}

void UTempSpawnSubsystem::DeleteTempMesh(int32 _index) {
}


