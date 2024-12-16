#include "GameStateMachine.h"

UGameStateMachine::UGameStateMachine() {
}

void UGameStateMachine::RunState(float _DeltaSeconds) {
}

FName UGameStateMachine::GetPrevState() const {
    return NAME_None;
}

FName UGameStateMachine::GetNextState() const {
    return NAME_None;
}

UObject* UGameStateMachine::GetCurrentStateObject() const {
    return NULL;
}

FName UGameStateMachine::GetCurrentState() const {
    return NAME_None;
}

void UGameStateMachine::ChangeState(const FName _StateName) {
}

void UGameStateMachine::AddStatesFromDataTable(UDataTable* _dataTable) {
}

void UGameStateMachine::AddState(const FName _StateName, UObject* _StateObject) {
}


