// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SCUE4/Public/SCUE4Settings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSCUE4Settings() {}
// Cross Module References
	SCUE4_API UClass* Z_Construct_UClass_USCUE4Settings_NoRegister();
	SCUE4_API UClass* Z_Construct_UClass_USCUE4Settings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SCUE4();
// End Cross Module References
	void USCUE4Settings::StaticRegisterNativesUSCUE4Settings()
	{
	}
	UClass* Z_Construct_UClass_USCUE4Settings_NoRegister()
	{
		return USCUE4Settings::StaticClass();
	}
	struct Z_Construct_UClass_USCUE4Settings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyGeneratorPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_KeyGeneratorPath;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IllegalKeywords_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IllegalKeywords_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IllegalKeywords;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USCUE4Settings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SCUE4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USCUE4Settings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SCUE4Settings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SCUE4Settings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USCUE4Settings_Statics::NewProp_KeyGeneratorPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SCUE4Settings" },
		{ "ModuleRelativePath", "Public/SCUE4Settings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USCUE4Settings_Statics::NewProp_KeyGeneratorPath = { "KeyGeneratorPath", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USCUE4Settings, KeyGeneratorPath), METADATA_PARAMS(Z_Construct_UClass_USCUE4Settings_Statics::NewProp_KeyGeneratorPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USCUE4Settings_Statics::NewProp_KeyGeneratorPath_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USCUE4Settings_Statics::NewProp_IllegalKeywords_Inner = { "IllegalKeywords", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USCUE4Settings_Statics::NewProp_IllegalKeywords_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SCUE4Settings" },
		{ "ModuleRelativePath", "Public/SCUE4Settings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USCUE4Settings_Statics::NewProp_IllegalKeywords = { "IllegalKeywords", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USCUE4Settings, IllegalKeywords), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USCUE4Settings_Statics::NewProp_IllegalKeywords_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USCUE4Settings_Statics::NewProp_IllegalKeywords_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USCUE4Settings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCUE4Settings_Statics::NewProp_KeyGeneratorPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCUE4Settings_Statics::NewProp_IllegalKeywords_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCUE4Settings_Statics::NewProp_IllegalKeywords,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USCUE4Settings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USCUE4Settings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USCUE4Settings_Statics::ClassParams = {
		&USCUE4Settings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USCUE4Settings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USCUE4Settings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USCUE4Settings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USCUE4Settings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USCUE4Settings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USCUE4Settings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USCUE4Settings, 3025871663);
	template<> SCUE4_API UClass* StaticClass<USCUE4Settings>()
	{
		return USCUE4Settings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USCUE4Settings(Z_Construct_UClass_USCUE4Settings, &USCUE4Settings::StaticClass, TEXT("/Script/SCUE4"), TEXT("USCUE4Settings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USCUE4Settings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
