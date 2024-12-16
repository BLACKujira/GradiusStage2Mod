#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ObjectPoolActor.generated.h"

class AActor;
class APoolActor;

UCLASS(Blueprintable)
class UObjectPoolActor : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APoolActor*> ObjectsFree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APoolActor*> ObjectsUsed;
    
public:
    UObjectPoolActor();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUsedNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APoolActor*> GetObjectsUsed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APoolActor*> GetObjectsFree() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UClass* GetObjectClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFreeNum() const;
    
    UFUNCTION(BlueprintCallable)
    void Free(APoolActor* _object);
    
    UFUNCTION(BlueprintCallable)
    void DestroyObjects();
    
    UFUNCTION(BlueprintCallable)
    void Create(int32 _num, UClass* _class, UObject* _paramCreated);
    
    UFUNCTION(BlueprintCallable)
    APoolActor* Alloc(UObject* _param, bool _notCallBorned);
    
    UFUNCTION(BlueprintCallable)
    void AddTickPrerequisiteActor(AActor* _actor);
    
};

