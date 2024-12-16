// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SCUE4/Public/SafeVector4D.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSafeVector4D() {}
// Cross Module References
	SCUE4_API UScriptStruct* Z_Construct_UScriptStruct_FSafeVector4D();
	UPackage* Z_Construct_UPackage__Script_SCUE4();
// End Cross Module References
class UScriptStruct* FSafeVector4D::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SCUE4_API uint32 Get_Z_Construct_UScriptStruct_FSafeVector4D_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSafeVector4D, Z_Construct_UPackage__Script_SCUE4(), TEXT("SafeVector4D"), sizeof(FSafeVector4D), Get_Z_Construct_UScriptStruct_FSafeVector4D_Hash());
	}
	return Singleton;
}
template<> SCUE4_API UScriptStruct* StaticStruct<FSafeVector4D>()
{
	return FSafeVector4D::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSafeVector4D(FSafeVector4D::StaticStruct, TEXT("/Script/SCUE4"), TEXT("SafeVector4D"), false, nullptr, nullptr);
static struct FScriptStruct_SCUE4_StaticRegisterNativesFSafeVector4D
{
	FScriptStruct_SCUE4_StaticRegisterNativesFSafeVector4D()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SafeVector4D")),new UScriptStruct::TCppStructOps<FSafeVector4D>);
	}
} ScriptStruct_SCUE4_StaticRegisterNativesFSafeVector4D;
	struct Z_Construct_UScriptStruct_FSafeVector4D_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Internal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Internal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrueX_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrueX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrueY_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrueY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrueZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrueZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrueW_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrueW;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShiftX_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShiftX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShiftY_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShiftY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShiftZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShiftZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShiftW_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShiftW;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flag_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeVector4D_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SafeVector4D.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSafeVector4D>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_Internal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SafeVector4D" },
		{ "ModuleRelativePath", "Public/SafeVector4D.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_Internal = { "Internal", nullptr, (EPropertyFlags)0x0040000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeVector4D, Internal), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_Internal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_Internal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_TrueX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SafeVector4D" },
		{ "ModuleRelativePath", "Public/SafeVector4D.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_TrueX = { "TrueX", nullptr, (EPropertyFlags)0x0040000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeVector4D, TrueX), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_TrueX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_TrueX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_TrueY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SafeVector4D" },
		{ "ModuleRelativePath", "Public/SafeVector4D.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_TrueY = { "TrueY", nullptr, (EPropertyFlags)0x0040000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeVector4D, TrueY), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_TrueY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_TrueY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_TrueZ_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SafeVector4D" },
		{ "ModuleRelativePath", "Public/SafeVector4D.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_TrueZ = { "TrueZ", nullptr, (EPropertyFlags)0x0040000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeVector4D, TrueZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_TrueZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_TrueZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_TrueW_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SafeVector4D" },
		{ "ModuleRelativePath", "Public/SafeVector4D.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_TrueW = { "TrueW", nullptr, (EPropertyFlags)0x0040000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeVector4D, TrueW), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_TrueW_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_TrueW_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_ShiftX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SafeVector4D" },
		{ "ModuleRelativePath", "Public/SafeVector4D.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_ShiftX = { "ShiftX", nullptr, (EPropertyFlags)0x0040000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeVector4D, ShiftX), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_ShiftX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_ShiftX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_ShiftY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SafeVector4D" },
		{ "ModuleRelativePath", "Public/SafeVector4D.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_ShiftY = { "ShiftY", nullptr, (EPropertyFlags)0x0040000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeVector4D, ShiftY), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_ShiftY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_ShiftY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_ShiftZ_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SafeVector4D" },
		{ "ModuleRelativePath", "Public/SafeVector4D.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_ShiftZ = { "ShiftZ", nullptr, (EPropertyFlags)0x0040000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeVector4D, ShiftZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_ShiftZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_ShiftZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_ShiftW_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SafeVector4D" },
		{ "ModuleRelativePath", "Public/SafeVector4D.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_ShiftW = { "ShiftW", nullptr, (EPropertyFlags)0x0040000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeVector4D, ShiftW), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_ShiftW_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_ShiftW_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_Flag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SafeVector4D" },
		{ "ModuleRelativePath", "Public/SafeVector4D.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0040000001000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeVector4D, Flag), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_Flag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_Flag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSafeVector4D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_Internal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_TrueX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_TrueY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_TrueZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_TrueW,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_ShiftX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_ShiftY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_ShiftZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_ShiftW,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_Flag,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSafeVector4D_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SCUE4,
		nullptr,
		&NewStructOps,
		"SafeVector4D",
		sizeof(FSafeVector4D),
		alignof(FSafeVector4D),
		Z_Construct_UScriptStruct_FSafeVector4D_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeVector4D_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeVector4D_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeVector4D_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSafeVector4D()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSafeVector4D_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SCUE4();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SafeVector4D"), sizeof(FSafeVector4D), Get_Z_Construct_UScriptStruct_FSafeVector4D_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSafeVector4D_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSafeVector4D_Hash() { return 3568527638U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
