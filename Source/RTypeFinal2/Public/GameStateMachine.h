#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameStateMachine.generated.h"

class UDataTable;
class UObject;

UCLASS(Blueprintable)
class UGameStateMachine : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UObject*> MapState;
    
public:
    UGameStateMachine();

    UFUNCTION(BlueprintCallable)
    void RunState(float _DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetPrevState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetNextState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetCurrentStateObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeState(const FName _StateName);
    
    UFUNCTION(BlueprintCallable)
    void AddStatesFromDataTable(UDataTable* _dataTable);
    
    UFUNCTION(BlueprintCallable)
    void AddState(const FName _StateName, UObject* _StateObject);
    
};

