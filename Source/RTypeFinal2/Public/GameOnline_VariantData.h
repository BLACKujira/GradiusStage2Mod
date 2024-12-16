#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EGameOnline_OnlineKeyValuePairDataType.h"
#include "GameOnline_VariantData.generated.h"

UCLASS(Blueprintable)
class UGameOnline_VariantData : public UObject {
    GENERATED_BODY()
public:
    UGameOnline_VariantData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ToString() const;
    
    UFUNCTION(BlueprintCallable)
    void SetValueUInt8Array(const TArray<uint8>& _in);
    
    UFUNCTION(BlueprintCallable)
    void SetValueUInt64(int64 _in);
    
    UFUNCTION(BlueprintCallable)
    void SetValueUInt32(int32 _in);
    
    UFUNCTION(BlueprintCallable)
    void SetValueString(const FString& _in);
    
    UFUNCTION(BlueprintCallable)
    void SetValueInt64(int64 _in);
    
    UFUNCTION(BlueprintCallable)
    void SetValueInt32(int32 _in);
    
    UFUNCTION(BlueprintCallable)
    void SetValueFloat(float _in);
    
    UFUNCTION(BlueprintCallable)
    void SetValueBool(bool _in);
    
    UFUNCTION(BlueprintCallable)
    void SetJsonValueFromString(const FString& _in);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNumeric() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetValueUInt8Array(TArray<uint8>& _out) const;
    
    UFUNCTION(BlueprintPure)
    void GetValueUInt64(int64& _out) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetValueUInt32(int32& _out) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetValueString(FString& _out) const;
    
    UFUNCTION(BlueprintPure)
    void GetValueInt64(int64& _out) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetValueInt32(int32& _out) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetValueFloat(float& _out) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetValueBool(bool& _out) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTypeSuffix() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGameOnline_OnlineKeyValuePairDataType GetType() const;
    
    UFUNCTION(BlueprintCallable)
    bool FromString(const FString& _newValue);
    
    UFUNCTION(BlueprintCallable)
    void Empty();
    
};

