// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GzKeyboardModule/Public/GzKeyboardInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGzKeyboardInterface() {}
// Cross Module References
	GZKEYBOARDMODULE_API UClass* Z_Construct_UClass_UGzKeyboardInterface_NoRegister();
	GZKEYBOARDMODULE_API UClass* Z_Construct_UClass_UGzKeyboardInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GzKeyboardModule();
// End Cross Module References
	void UGzKeyboardInterface::StaticRegisterNativesUGzKeyboardInterface()
	{
	}
	UClass* Z_Construct_UClass_UGzKeyboardInterface_NoRegister()
	{
		return UGzKeyboardInterface::StaticClass();
	}
	struct Z_Construct_UClass_UGzKeyboardInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGzKeyboardInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GzKeyboardModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGzKeyboardInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GzKeyboardInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGzKeyboardInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGzKeyboardInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGzKeyboardInterface_Statics::ClassParams = {
		&UGzKeyboardInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGzKeyboardInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGzKeyboardInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGzKeyboardInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGzKeyboardInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGzKeyboardInterface, 2282804560);
	template<> GZKEYBOARDMODULE_API UClass* StaticClass<UGzKeyboardInterface>()
	{
		return UGzKeyboardInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGzKeyboardInterface(Z_Construct_UClass_UGzKeyboardInterface, &UGzKeyboardInterface::StaticClass, TEXT("/Script/GzKeyboardModule"), TEXT("UGzKeyboardInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGzKeyboardInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
