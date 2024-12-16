#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "TempSpawnSubsystem.generated.h"

class ATempMeshSpawner;
class ATempMeshSpawnerSphere;

UCLASS(Blueprintable, NotPlaceable, Transient)
class UTempSpawnSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATempMeshSpawner* TempMeshSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATempMeshSpawnerSphere* TempMeshSpawnerSphere;
    
public:
    UTempSpawnSubsystem();

    UFUNCTION(BlueprintCallable)
    int32 SpawnTempMeshSphere(const FVector& _pos, float _radius, float _lifeTime);
    
    UFUNCTION(BlueprintCallable)
    int32 SpawnTempMesh(const FTransform& _trans, float _lifeTime);
    
    UFUNCTION(BlueprintCallable)
    void SetTempMeshVisibilityDefault();
    
    UFUNCTION(BlueprintCallable)
    void SetTempMeshVisibility(bool _visible);
    
    UFUNCTION(BlueprintCallable)
    ATempMeshSpawnerSphere* GetTempMeshSpawnerSphere();
    
    UFUNCTION(BlueprintCallable)
    ATempMeshSpawner* GetTempMeshSpawner();
    
    UFUNCTION(BlueprintCallable)
    void DeleteTempMeshSphere(int32 _index);
    
    UFUNCTION(BlueprintCallable)
    void DeleteTempMesh(int32 _index);
    
};

