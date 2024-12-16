// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GzKeyboardModule/Public/EGzKeyboardResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEGzKeyboardResult() {}
// Cross Module References
	GZKEYBOARDMODULE_API UEnum* Z_Construct_UEnum_GzKeyboardModule_EGzKeyboardResult();
	UPackage* Z_Construct_UPackage__Script_GzKeyboardModule();
// End Cross Module References
	static UEnum* EGzKeyboardResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GzKeyboardModule_EGzKeyboardResult, Z_Construct_UPackage__Script_GzKeyboardModule(), TEXT("EGzKeyboardResult"));
		}
		return Singleton;
	}
	template<> GZKEYBOARDMODULE_API UEnum* StaticEnum<EGzKeyboardResult>()
	{
		return EGzKeyboardResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGzKeyboardResult(EGzKeyboardResult_StaticEnum, TEXT("/Script/GzKeyboardModule"), TEXT("EGzKeyboardResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GzKeyboardModule_EGzKeyboardResult_Hash() { return 3353576269U; }
	UEnum* Z_Construct_UEnum_GzKeyboardModule_EGzKeyboardResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GzKeyboardModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGzKeyboardResult"), 0, Get_Z_Construct_UEnum_GzKeyboardModule_EGzKeyboardResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGzKeyboardResult::OK", (int64)EGzKeyboardResult::OK },
				{ "EGzKeyboardResult::Cancel", (int64)EGzKeyboardResult::Cancel },
				{ "EGzKeyboardResult::Abort", (int64)EGzKeyboardResult::Abort },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Abort.Name", "EGzKeyboardResult::Abort" },
				{ "BlueprintType", "true" },
				{ "Cancel.Name", "EGzKeyboardResult::Cancel" },
				{ "ModuleRelativePath", "Public/EGzKeyboardResult.h" },
				{ "OK.Name", "EGzKeyboardResult::OK" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GzKeyboardModule,
				nullptr,
				"EGzKeyboardResult",
				"EGzKeyboardResult",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
