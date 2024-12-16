#include "UtilWorld.h"

UUtilWorld::UUtilWorld() {
}

void UUtilWorld::SetShouldSimulatePhysics(UObject* WorldContextObject, bool _enable) {
}

void UUtilWorld::SetPlayersOnly(UObject* WorldContextObject, bool _enable) {
}

bool UUtilWorld::IsWorldTypePIE(UObject* WorldContextObject) {
    return false;
}

bool UUtilWorld::GetShouldSimulatePhysics(UObject* WorldContextObject) {
    return false;
}

bool UUtilWorld::GetPlayersOnly(UObject* WorldContextObject) {
    return false;
}


