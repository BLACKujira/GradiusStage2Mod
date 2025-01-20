// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KawaiiPhysics/Public/SphericalLimitData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSphericalLimitData() {}
// Cross Module References
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FSphericalLimitData();
	UPackage* Z_Construct_UPackage__Script_KawaiiPhysics();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionLimitDataBase();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType();
// End Cross Module References

static_assert(std::is_polymorphic<FSphericalLimitData>() == std::is_polymorphic<FCollisionLimitDataBase>(), "USTRUCT FSphericalLimitData cannot be polymorphic unless super FCollisionLimitDataBase is polymorphic");

class UScriptStruct* FSphericalLimitData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KAWAIIPHYSICS_API uint32 Get_Z_Construct_UScriptStruct_FSphericalLimitData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSphericalLimitData, Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("SphericalLimitData"), sizeof(FSphericalLimitData), Get_Z_Construct_UScriptStruct_FSphericalLimitData_Hash());
	}
	return Singleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FSphericalLimitData>()
{
	return FSphericalLimitData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSphericalLimitData(FSphericalLimitData::StaticStruct, TEXT("/Script/KawaiiPhysics"), TEXT("SphericalLimitData"), false, nullptr, nullptr);
static struct FScriptStruct_KawaiiPhysics_StaticRegisterNativesFSphericalLimitData
{
	FScriptStruct_KawaiiPhysics_StaticRegisterNativesFSphericalLimitData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SphericalLimitData")),new UScriptStruct::TCppStructOps<FSphericalLimitData>);
	}
} ScriptStruct_KawaiiPhysics_StaticRegisterNativesFSphericalLimitData;
	struct Z_Construct_UScriptStruct_FSphericalLimitData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LimitType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimitType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LimitType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalLimitData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SphericalLimitData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSphericalLimitData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_Radius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SphericalLimitData" },
		{ "ModuleRelativePath", "Public/SphericalLimitData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSphericalLimitData, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_Radius_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_LimitType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_LimitType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SphericalLimitData" },
		{ "ModuleRelativePath", "Public/SphericalLimitData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_LimitType = { "LimitType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSphericalLimitData, LimitType), Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_LimitType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_LimitType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSphericalLimitData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_LimitType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_LimitType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSphericalLimitData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		Z_Construct_UScriptStruct_FCollisionLimitDataBase,
		&NewStructOps,
		"SphericalLimitData",
		sizeof(FSphericalLimitData),
		alignof(FSphericalLimitData),
		Z_Construct_UScriptStruct_FSphericalLimitData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalLimitData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalLimitData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalLimitData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSphericalLimitData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSphericalLimitData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_KawaiiPhysics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SphericalLimitData"), sizeof(FSphericalLimitData), Get_Z_Construct_UScriptStruct_FSphericalLimitData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSphericalLimitData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSphericalLimitData_Hash() { return 3110660749U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
