// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GzKeyboardModule/Public/EGzKeyboardType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEGzKeyboardType() {}
// Cross Module References
	GZKEYBOARDMODULE_API UEnum* Z_Construct_UEnum_GzKeyboardModule_EGzKeyboardType();
	UPackage* Z_Construct_UPackage__Script_GzKeyboardModule();
// End Cross Module References
	static UEnum* EGzKeyboardType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GzKeyboardModule_EGzKeyboardType, Z_Construct_UPackage__Script_GzKeyboardModule(), TEXT("EGzKeyboardType"));
		}
		return Singleton;
	}
	template<> GZKEYBOARDMODULE_API UEnum* StaticEnum<EGzKeyboardType>()
	{
		return EGzKeyboardType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGzKeyboardType(EGzKeyboardType_StaticEnum, TEXT("/Script/GzKeyboardModule"), TEXT("EGzKeyboardType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GzKeyboardModule_EGzKeyboardType_Hash() { return 335949883U; }
	UEnum* Z_Construct_UEnum_GzKeyboardModule_EGzKeyboardType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GzKeyboardModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGzKeyboardType"), 0, Get_Z_Construct_UEnum_GzKeyboardModule_EGzKeyboardType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGzKeyboardType::Default", (int64)EGzKeyboardType::Default },
				{ "EGzKeyboardType::Number", (int64)EGzKeyboardType::Number },
				{ "EGzKeyboardType::Web", (int64)EGzKeyboardType::Web },
				{ "EGzKeyboardType::Email", (int64)EGzKeyboardType::Email },
				{ "EGzKeyboardType::Password", (int64)EGzKeyboardType::Password },
				{ "EGzKeyboardType::AlphaNumeric", (int64)EGzKeyboardType::AlphaNumeric },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AlphaNumeric.Name", "EGzKeyboardType::AlphaNumeric" },
				{ "BlueprintType", "true" },
				{ "Default.Name", "EGzKeyboardType::Default" },
				{ "Email.Name", "EGzKeyboardType::Email" },
				{ "ModuleRelativePath", "Public/EGzKeyboardType.h" },
				{ "Number.Name", "EGzKeyboardType::Number" },
				{ "Password.Name", "EGzKeyboardType::Password" },
				{ "Web.Name", "EGzKeyboardType::Web" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GzKeyboardModule,
				nullptr,
				"EGzKeyboardType",
				"EGzKeyboardType",
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
