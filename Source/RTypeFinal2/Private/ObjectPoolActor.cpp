#include "ObjectPoolActor.h"

UObjectPoolActor::UObjectPoolActor() {
    this->ObjectClass = NULL;
}

int32 UObjectPoolActor::GetUsedNum() const {
    return 0;
}

TArray<APoolActor*> UObjectPoolActor::GetObjectsUsed() const {
    return TArray<APoolActor*>();
}

TArray<APoolActor*> UObjectPoolActor::GetObjectsFree() const {
    return TArray<APoolActor*>();
}

UClass* UObjectPoolActor::GetObjectClass() const {
    return NULL;
}

int32 UObjectPoolActor::GetFreeNum() const {
    return 0;
}

void UObjectPoolActor::Free(APoolActor* _object) {
}

void UObjectPoolActor::DestroyObjects() {
}

void UObjectPoolActor::Create(int32 _num, UClass* _class, UObject* _paramCreated) {
}

APoolActor* UObjectPoolActor::Alloc(UObject* _param, bool _notCallBorned) {
    return NULL;
}

void UObjectPoolActor::AddTickPrerequisiteActor(AActor* _actor) {
}


