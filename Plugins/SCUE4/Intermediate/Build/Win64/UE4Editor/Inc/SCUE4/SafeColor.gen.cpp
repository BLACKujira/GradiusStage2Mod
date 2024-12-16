// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SCUE4/Public/SafeColor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSafeColor() {}
// Cross Module References
	SCUE4_API UScriptStruct* Z_Construct_UScriptStruct_FSafeColor();
	UPackage* Z_Construct_UPackage__Script_SCUE4();
// End Cross Module References
class UScriptStruct* FSafeColor::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SCUE4_API uint32 Get_Z_Construct_UScriptStruct_FSafeColor_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSafeColor, Z_Construct_UPackage__Script_SCUE4(), TEXT("SafeColor"), sizeof(FSafeColor), Get_Z_Construct_UScriptStruct_FSafeColor_Hash());
	}
	return Singleton;
}
template<> SCUE4_API UScriptStruct* StaticStruct<FSafeColor>()
{
	return FSafeColor::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSafeColor(FSafeColor::StaticStruct, TEXT("/Script/SCUE4"), TEXT("SafeColor"), false, nullptr, nullptr);
static struct FScriptStruct_SCUE4_StaticRegisterNativesFSafeColor
{
	FScriptStruct_SCUE4_StaticRegisterNativesFSafeColor()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SafeColor")),new UScriptStruct::TCppStructOps<FSafeColor>);
	}
} ScriptStruct_SCUE4_StaticRegisterNativesFSafeColor;
	struct Z_Construct_UScriptStruct_FSafeColor_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrueR_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrueR;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrueG_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrueG;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrueB_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrueB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrueA_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrueA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShiftR_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShiftR;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShiftG_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShiftG;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShiftB_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShiftB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShiftA_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShiftA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flag_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeColor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SafeColor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSafeColor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSafeColor>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_Internal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SafeColor" },
		{ "ModuleRelativePath", "Public/SafeColor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_Internal = { "Internal", nullptr, (EPropertyFlags)0x0040000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeColor, Internal), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_Internal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_Internal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_TrueR_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SafeColor" },
		{ "ModuleRelativePath", "Public/SafeColor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_TrueR = { "TrueR", nullptr, (EPropertyFlags)0x0040000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeColor, TrueR), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_TrueR_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_TrueR_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_TrueG_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SafeColor" },
		{ "ModuleRelativePath", "Public/SafeColor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_TrueG = { "TrueG", nullptr, (EPropertyFlags)0x0040000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeColor, TrueG), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_TrueG_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_TrueG_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_TrueB_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SafeColor" },
		{ "ModuleRelativePath", "Public/SafeColor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_TrueB = { "TrueB", nullptr, (EPropertyFlags)0x0040000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeColor, TrueB), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_TrueB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_TrueB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_TrueA_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SafeColor" },
		{ "ModuleRelativePath", "Public/SafeColor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_TrueA = { "TrueA", nullptr, (EPropertyFlags)0x0040000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeColor, TrueA), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_TrueA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_TrueA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_ShiftR_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SafeColor" },
		{ "ModuleRelativePath", "Public/SafeColor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_ShiftR = { "ShiftR", nullptr, (EPropertyFlags)0x0040000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeColor, ShiftR), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_ShiftR_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_ShiftR_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_ShiftG_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SafeColor" },
		{ "ModuleRelativePath", "Public/SafeColor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_ShiftG = { "ShiftG", nullptr, (EPropertyFlags)0x0040000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeColor, ShiftG), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_ShiftG_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_ShiftG_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_ShiftB_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SafeColor" },
		{ "ModuleRelativePath", "Public/SafeColor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_ShiftB = { "ShiftB", nullptr, (EPropertyFlags)0x0040000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeColor, ShiftB), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_ShiftB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_ShiftB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_ShiftA_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SafeColor" },
		{ "ModuleRelativePath", "Public/SafeColor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_ShiftA = { "ShiftA", nullptr, (EPropertyFlags)0x0040000001000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeColor, ShiftA), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_ShiftA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_ShiftA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_Flag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SafeColor" },
		{ "ModuleRelativePath", "Public/SafeColor.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0040000001000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeColor, Flag), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_Flag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_Flag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSafeColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_Internal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_TrueR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_TrueG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_TrueB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_TrueA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_ShiftR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_ShiftG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_ShiftB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_ShiftA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_Flag,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSafeColor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SCUE4,
		nullptr,
		&NewStructOps,
		"SafeColor",
		sizeof(FSafeColor),
		alignof(FSafeColor),
		Z_Construct_UScriptStruct_FSafeColor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeColor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeColor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeColor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSafeColor()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSafeColor_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SCUE4();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SafeColor"), sizeof(FSafeColor), Get_Z_Construct_UScriptStruct_FSafeColor_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSafeColor_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSafeColor_Hash() { return 3941070351U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
