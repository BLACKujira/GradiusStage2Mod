// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PSInputRemapper/Public/GamePadCursor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGamePadCursor() {}
// Cross Module References
	PSINPUTREMAPPER_API UClass* Z_Construct_UClass_UGamePadCursor_NoRegister();
	PSINPUTREMAPPER_API UClass* Z_Construct_UClass_UGamePadCursor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_PSInputRemapper();
// End Cross Module References
	void UGamePadCursor::StaticRegisterNativesUGamePadCursor()
	{
	}
	UClass* Z_Construct_UClass_UGamePadCursor_NoRegister()
	{
		return UGamePadCursor::StaticClass();
	}
	struct Z_Construct_UClass_UGamePadCursor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGamePadCursor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PSInputRemapper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGamePadCursor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GamePadCursor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GamePadCursor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGamePadCursor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGamePadCursor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGamePadCursor_Statics::ClassParams = {
		&UGamePadCursor::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGamePadCursor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGamePadCursor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGamePadCursor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGamePadCursor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGamePadCursor, 3560959836);
	template<> PSINPUTREMAPPER_API UClass* StaticClass<UGamePadCursor>()
	{
		return UGamePadCursor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGamePadCursor(Z_Construct_UClass_UGamePadCursor, &UGamePadCursor::StaticClass, TEXT("/Script/PSInputRemapper"), TEXT("UGamePadCursor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGamePadCursor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
