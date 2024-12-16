#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ECountData_ItemScrollDir.h"
#include "EScrollManager_ScreenRotAxis.h"
#include "ScrollManagerEventObject.h"
#include "ScrollManagerScrollMeshActorData.h"
#include "ScrollManager_ScreenCoord.h"
#include "ScrollManager_ScrollCountData.h"
#include "ScrollManager_ScrollData.h"
#include "ScrollManager.generated.h"

class UCountDataAsset;
class USceneComponent;

UCLASS(Blueprintable, NotPlaceable, Transient)
class UScrollManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TransformComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsScrollEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ScrollValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ScrollLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ScrollDataIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ScrollLengthTotal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CounterExecuted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FScrollManager_ScrollData> ScrollDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CountDataScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCommandSkip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FScrollManager_ScreenCoord ScreenCoordCurrent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FScrollManager_ScreenCoord ScreenCoordTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ScreenCoordInterRotMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EScrollManager_ScreenRotAxis ScreenRotAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScrollManagerEventObject> EventObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScrollManagerEventObject> EventObjectsDelete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ECountData_ItemScrollDir ItemScrollDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ItemScrollSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScrollManagerScrollMeshActorData> ScrollMeshActorDatas;
    
public:
    UScrollManager();

    UFUNCTION(BlueprintCallable)
    void BpSetScrollValueScaled(float _value);
    
    UFUNCTION(BlueprintCallable)
    void BpSetScrollValue(float _value);
    
    UFUNCTION(BlueprintCallable)
    void BpSetScrollSpeed(float _speed);
    
    UFUNCTION(BlueprintCallable)
    void BpSetScrollEnable(bool _flag);
    
    UFUNCTION(BlueprintCallable)
    void BpSetScrollCount(float _value);
    
    UFUNCTION(BlueprintCallable)
    void BpSetCountDataScale(float _value);
    
    UFUNCTION(BlueprintCallable)
    void BpResetScroll();
    
    UFUNCTION(BlueprintCallable)
    void BpRegisterScrollCountDatas(const TArray<FScrollManager_ScrollCountData>& _datas);
    
    UFUNCTION(BlueprintCallable)
    void BpRegisterCountData(const UCountDataAsset* _data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BpGetScrollValueScaled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BpGetScrollValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BpGetScrollSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BpGetScrollEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BpGetScrollCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString BpGetCurrentScrollActorName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BpGetCountDataScale() const;
    
};

