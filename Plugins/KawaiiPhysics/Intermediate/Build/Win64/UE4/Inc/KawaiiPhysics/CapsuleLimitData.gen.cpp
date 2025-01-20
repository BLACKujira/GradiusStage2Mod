// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KawaiiPhysics/Public/CapsuleLimitData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapsuleLimitData() {}
// Cross Module References
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FCapsuleLimitData();
	UPackage* Z_Construct_UPackage__Script_KawaiiPhysics();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionLimitDataBase();
// End Cross Module References

static_assert(std::is_polymorphic<FCapsuleLimitData>() == std::is_polymorphic<FCollisionLimitDataBase>(), "USTRUCT FCapsuleLimitData cannot be polymorphic unless super FCollisionLimitDataBase is polymorphic");

class UScriptStruct* FCapsuleLimitData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KAWAIIPHYSICS_API uint32 Get_Z_Construct_UScriptStruct_FCapsuleLimitData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCapsuleLimitData, Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("CapsuleLimitData"), sizeof(FCapsuleLimitData), Get_Z_Construct_UScriptStruct_FCapsuleLimitData_Hash());
	}
	return Singleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FCapsuleLimitData>()
{
	return FCapsuleLimitData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCapsuleLimitData(FCapsuleLimitData::StaticStruct, TEXT("/Script/KawaiiPhysics"), TEXT("CapsuleLimitData"), false, nullptr, nullptr);
static struct FScriptStruct_KawaiiPhysics_StaticRegisterNativesFCapsuleLimitData
{
	FScriptStruct_KawaiiPhysics_StaticRegisterNativesFCapsuleLimitData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CapsuleLimitData")),new UScriptStruct::TCppStructOps<FCapsuleLimitData>);
	}
} ScriptStruct_KawaiiPhysics_StaticRegisterNativesFCapsuleLimitData;
	struct Z_Construct_UScriptStruct_FCapsuleLimitData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Length;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CapsuleLimitData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCapsuleLimitData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Radius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CapsuleLimitData" },
		{ "ModuleRelativePath", "Public/CapsuleLimitData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCapsuleLimitData, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Length_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CapsuleLimitData" },
		{ "ModuleRelativePath", "Public/CapsuleLimitData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCapsuleLimitData, Length), METADATA_PARAMS(Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Length_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Length,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		Z_Construct_UScriptStruct_FCollisionLimitDataBase,
		&NewStructOps,
		"CapsuleLimitData",
		sizeof(FCapsuleLimitData),
		alignof(FCapsuleLimitData),
		Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCapsuleLimitData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCapsuleLimitData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_KawaiiPhysics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CapsuleLimitData"), sizeof(FCapsuleLimitData), Get_Z_Construct_UScriptStruct_FCapsuleLimitData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCapsuleLimitData_Hash() { return 196670083U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
