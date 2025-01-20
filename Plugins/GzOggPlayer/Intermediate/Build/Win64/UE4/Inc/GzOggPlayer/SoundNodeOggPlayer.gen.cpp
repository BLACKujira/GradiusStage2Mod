// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GzOggPlayer/Public/SoundNodeOggPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeOggPlayer() {}
// Cross Module References
	GZOGGPLAYER_API UClass* Z_Construct_UClass_USoundNodeOggPlayer_NoRegister();
	GZOGGPLAYER_API UClass* Z_Construct_UClass_USoundNodeOggPlayer();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	UPackage* Z_Construct_UPackage__Script_GzOggPlayer();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UFileMediaSource_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundWaveProcedural_NoRegister();
// End Cross Module References
	void USoundNodeOggPlayer::StaticRegisterNativesUSoundNodeOggPlayer()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeOggPlayer_NoRegister()
	{
		return USoundNodeOggPlayer::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeOggPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OggMediaSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OggMediaSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoopStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_LoopStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoopLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_LoopLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoopCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoopCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundWaveProcedural_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundWaveProcedural;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeOggPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNode,
		(UObject* (*)())Z_Construct_UPackage__Script_GzOggPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeOggPlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SoundNodeOggPlayer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SoundNodeOggPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeOggPlayer_Statics::NewProp_OggMediaSource_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundNodeOggPlayer" },
		{ "ModuleRelativePath", "Public/SoundNodeOggPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundNodeOggPlayer_Statics::NewProp_OggMediaSource = { "OggMediaSource", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNodeOggPlayer, OggMediaSource), Z_Construct_UClass_UFileMediaSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundNodeOggPlayer_Statics::NewProp_OggMediaSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeOggPlayer_Statics::NewProp_OggMediaSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeOggPlayer_Statics::NewProp_LoopStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundNodeOggPlayer" },
		{ "ModuleRelativePath", "Public/SoundNodeOggPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UClass_USoundNodeOggPlayer_Statics::NewProp_LoopStart = { "LoopStart", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNodeOggPlayer, LoopStart), METADATA_PARAMS(Z_Construct_UClass_USoundNodeOggPlayer_Statics::NewProp_LoopStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeOggPlayer_Statics::NewProp_LoopStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeOggPlayer_Statics::NewProp_LoopLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundNodeOggPlayer" },
		{ "ModuleRelativePath", "Public/SoundNodeOggPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UClass_USoundNodeOggPlayer_Statics::NewProp_LoopLength = { "LoopLength", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNodeOggPlayer, LoopLength), METADATA_PARAMS(Z_Construct_UClass_USoundNodeOggPlayer_Statics::NewProp_LoopLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeOggPlayer_Statics::NewProp_LoopLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeOggPlayer_Statics::NewProp_LoopCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundNodeOggPlayer" },
		{ "ModuleRelativePath", "Public/SoundNodeOggPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundNodeOggPlayer_Statics::NewProp_LoopCount = { "LoopCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNodeOggPlayer, LoopCount), METADATA_PARAMS(Z_Construct_UClass_USoundNodeOggPlayer_Statics::NewProp_LoopCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeOggPlayer_Statics::NewProp_LoopCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeOggPlayer_Statics::NewProp_SoundWaveProcedural_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundNodeOggPlayer" },
		{ "ModuleRelativePath", "Public/SoundNodeOggPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundNodeOggPlayer_Statics::NewProp_SoundWaveProcedural = { "SoundWaveProcedural", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNodeOggPlayer, SoundWaveProcedural), Z_Construct_UClass_USoundWaveProcedural_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundNodeOggPlayer_Statics::NewProp_SoundWaveProcedural_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeOggPlayer_Statics::NewProp_SoundWaveProcedural_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeOggPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeOggPlayer_Statics::NewProp_OggMediaSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeOggPlayer_Statics::NewProp_LoopStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeOggPlayer_Statics::NewProp_LoopLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeOggPlayer_Statics::NewProp_LoopCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeOggPlayer_Statics::NewProp_SoundWaveProcedural,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeOggPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeOggPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeOggPlayer_Statics::ClassParams = {
		&USoundNodeOggPlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundNodeOggPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeOggPlayer_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeOggPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeOggPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeOggPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundNodeOggPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundNodeOggPlayer, 4134743160);
	template<> GZOGGPLAYER_API UClass* StaticClass<USoundNodeOggPlayer>()
	{
		return USoundNodeOggPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeOggPlayer(Z_Construct_UClass_USoundNodeOggPlayer, &USoundNodeOggPlayer::StaticClass, TEXT("/Script/GzOggPlayer"), TEXT("USoundNodeOggPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeOggPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
