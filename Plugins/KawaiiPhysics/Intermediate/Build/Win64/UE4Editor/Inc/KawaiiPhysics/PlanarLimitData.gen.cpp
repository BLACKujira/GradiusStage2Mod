// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KawaiiPhysics/Public/PlanarLimitData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlanarLimitData() {}
// Cross Module References
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FPlanarLimitData();
	UPackage* Z_Construct_UPackage__Script_KawaiiPhysics();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionLimitDataBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlane();
// End Cross Module References

static_assert(std::is_polymorphic<FPlanarLimitData>() == std::is_polymorphic<FCollisionLimitDataBase>(), "USTRUCT FPlanarLimitData cannot be polymorphic unless super FCollisionLimitDataBase is polymorphic");

class UScriptStruct* FPlanarLimitData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KAWAIIPHYSICS_API uint32 Get_Z_Construct_UScriptStruct_FPlanarLimitData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlanarLimitData, Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("PlanarLimitData"), sizeof(FPlanarLimitData), Get_Z_Construct_UScriptStruct_FPlanarLimitData_Hash());
	}
	return Singleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FPlanarLimitData>()
{
	return FPlanarLimitData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlanarLimitData(FPlanarLimitData::StaticStruct, TEXT("/Script/KawaiiPhysics"), TEXT("PlanarLimitData"), false, nullptr, nullptr);
static struct FScriptStruct_KawaiiPhysics_StaticRegisterNativesFPlanarLimitData
{
	FScriptStruct_KawaiiPhysics_StaticRegisterNativesFPlanarLimitData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlanarLimitData")),new UScriptStruct::TCppStructOps<FPlanarLimitData>);
	}
} ScriptStruct_KawaiiPhysics_StaticRegisterNativesFPlanarLimitData;
	struct Z_Construct_UScriptStruct_FPlanarLimitData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Plane_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Plane;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlanarLimitData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlanarLimitData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlanarLimitData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlanarLimitData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlanarLimitData_Statics::NewProp_Plane_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlanarLimitData" },
		{ "ModuleRelativePath", "Public/PlanarLimitData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlanarLimitData_Statics::NewProp_Plane = { "Plane", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlanarLimitData, Plane), Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlanarLimitData_Statics::NewProp_Plane_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlanarLimitData_Statics::NewProp_Plane_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlanarLimitData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlanarLimitData_Statics::NewProp_Plane,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlanarLimitData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		Z_Construct_UScriptStruct_FCollisionLimitDataBase,
		&NewStructOps,
		"PlanarLimitData",
		sizeof(FPlanarLimitData),
		alignof(FPlanarLimitData),
		Z_Construct_UScriptStruct_FPlanarLimitData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlanarLimitData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlanarLimitData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlanarLimitData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlanarLimitData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlanarLimitData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_KawaiiPhysics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlanarLimitData"), sizeof(FPlanarLimitData), Get_Z_Construct_UScriptStruct_FPlanarLimitData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlanarLimitData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlanarLimitData_Hash() { return 3024248767U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
