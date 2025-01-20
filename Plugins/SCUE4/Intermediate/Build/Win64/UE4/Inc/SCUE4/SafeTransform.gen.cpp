// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SCUE4/Public/SafeTransform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSafeTransform() {}
// Cross Module References
	SCUE4_API UScriptStruct* Z_Construct_UScriptStruct_FSafeTransform();
	UPackage* Z_Construct_UPackage__Script_SCUE4();
	SCUE4_API UScriptStruct* Z_Construct_UScriptStruct_FSafeVector3D();
	SCUE4_API UScriptStruct* Z_Construct_UScriptStruct_FSafeRotator();
// End Cross Module References
class UScriptStruct* FSafeTransform::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SCUE4_API uint32 Get_Z_Construct_UScriptStruct_FSafeTransform_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSafeTransform, Z_Construct_UPackage__Script_SCUE4(), TEXT("SafeTransform"), sizeof(FSafeTransform), Get_Z_Construct_UScriptStruct_FSafeTransform_Hash());
	}
	return Singleton;
}
template<> SCUE4_API UScriptStruct* StaticStruct<FSafeTransform>()
{
	return FSafeTransform::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSafeTransform(FSafeTransform::StaticStruct, TEXT("/Script/SCUE4"), TEXT("SafeTransform"), false, nullptr, nullptr);
static struct FScriptStruct_SCUE4_StaticRegisterNativesFSafeTransform
{
	FScriptStruct_SCUE4_StaticRegisterNativesFSafeTransform()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SafeTransform")),new UScriptStruct::TCppStructOps<FSafeTransform>);
	}
} ScriptStruct_SCUE4_StaticRegisterNativesFSafeTransform;
	struct Z_Construct_UScriptStruct_FSafeTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SafeTransform.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSafeTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSafeTransform>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeTransform_Statics::NewProp_Scale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SafeTransform" },
		{ "ModuleRelativePath", "Public/SafeTransform.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSafeTransform_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0040000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeTransform, Scale), Z_Construct_UScriptStruct_FSafeVector3D, METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeTransform_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeTransform_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeTransform_Statics::NewProp_position_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SafeTransform" },
		{ "ModuleRelativePath", "Public/SafeTransform.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSafeTransform_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0040000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeTransform, position), Z_Construct_UScriptStruct_FSafeVector3D, METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeTransform_Statics::NewProp_position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeTransform_Statics::NewProp_position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeTransform_Statics::NewProp_Rotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SafeTransform" },
		{ "ModuleRelativePath", "Public/SafeTransform.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSafeTransform_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0040000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeTransform, Rotation), Z_Construct_UScriptStruct_FSafeRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeTransform_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeTransform_Statics::NewProp_Rotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSafeTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeTransform_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeTransform_Statics::NewProp_position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeTransform_Statics::NewProp_Rotation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSafeTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SCUE4,
		nullptr,
		&NewStructOps,
		"SafeTransform",
		sizeof(FSafeTransform),
		alignof(FSafeTransform),
		Z_Construct_UScriptStruct_FSafeTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSafeTransform()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSafeTransform_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SCUE4();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SafeTransform"), sizeof(FSafeTransform), Get_Z_Construct_UScriptStruct_FSafeTransform_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSafeTransform_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSafeTransform_Hash() { return 2704034060U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
