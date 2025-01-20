// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KawaiiPhysics/Public/KawaiiPhysicsSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKawaiiPhysicsSettings() {}
// Cross Module References
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysicsSettings();
	UPackage* Z_Construct_UPackage__Script_KawaiiPhysics();
// End Cross Module References
class UScriptStruct* FKawaiiPhysicsSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KAWAIIPHYSICS_API uint32 Get_Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings, Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("KawaiiPhysicsSettings"), sizeof(FKawaiiPhysicsSettings), Get_Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Hash());
	}
	return Singleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FKawaiiPhysicsSettings>()
{
	return FKawaiiPhysicsSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKawaiiPhysicsSettings(FKawaiiPhysicsSettings::StaticStruct, TEXT("/Script/KawaiiPhysics"), TEXT("KawaiiPhysicsSettings"), false, nullptr, nullptr);
static struct FScriptStruct_KawaiiPhysics_StaticRegisterNativesFKawaiiPhysicsSettings
{
	FScriptStruct_KawaiiPhysics_StaticRegisterNativesFKawaiiPhysicsSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KawaiiPhysicsSettings")),new UScriptStruct::TCppStructOps<FKawaiiPhysicsSettings>);
	}
} ScriptStruct_KawaiiPhysics_StaticRegisterNativesFKawaiiPhysicsSettings;
	struct Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldDampingLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorldDampingLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldDampingRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorldDampingRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Stiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimitAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LimitAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKawaiiPhysicsSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Damping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KawaiiPhysicsSettings" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Damping = { "Damping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKawaiiPhysicsSettings, Damping), METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Damping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Damping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_WorldDampingLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KawaiiPhysicsSettings" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_WorldDampingLocation = { "WorldDampingLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKawaiiPhysicsSettings, WorldDampingLocation), METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_WorldDampingLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_WorldDampingLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_WorldDampingRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KawaiiPhysicsSettings" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_WorldDampingRotation = { "WorldDampingRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKawaiiPhysicsSettings, WorldDampingRotation), METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_WorldDampingRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_WorldDampingRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Stiffness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KawaiiPhysicsSettings" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKawaiiPhysicsSettings, Stiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Stiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Stiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Radius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KawaiiPhysicsSettings" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKawaiiPhysicsSettings, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_LimitAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KawaiiPhysicsSettings" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_LimitAngle = { "LimitAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKawaiiPhysicsSettings, LimitAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_LimitAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_LimitAngle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Damping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_WorldDampingLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_WorldDampingRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Stiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_LimitAngle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		nullptr,
		&NewStructOps,
		"KawaiiPhysicsSettings",
		sizeof(FKawaiiPhysicsSettings),
		alignof(FKawaiiPhysicsSettings),
		Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysicsSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_KawaiiPhysics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KawaiiPhysicsSettings"), sizeof(FKawaiiPhysicsSettings), Get_Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Hash() { return 4156492345U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
