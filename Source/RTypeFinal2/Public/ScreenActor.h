#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ScreenAnimParamRoll.h"
#include "ScreenActor.generated.h"

class AScreenCameraActor;
class USceneComponent;

UCLASS(Blueprintable)
class AScreenActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TransformComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AScreenCameraActor* ScreenCameraActor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator AnimRotation;
    
public:
    AScreenActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateAnim(float _deltaTime);
    
    UFUNCTION(BlueprintCallable)
    void StopAnim();
    
    UFUNCTION(BlueprintCallable)
    void StartAnimRoll(const FScreenAnimParamRoll& _param);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleScreenFrame(bool _display);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisibleScreenFrame() const;
    
    UFUNCTION(BlueprintCallable)
    void InitAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetAnimRotation() const;
    
};

