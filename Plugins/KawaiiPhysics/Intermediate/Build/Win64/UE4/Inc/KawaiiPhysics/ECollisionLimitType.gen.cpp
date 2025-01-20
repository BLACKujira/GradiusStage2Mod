// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KawaiiPhysics/Public/ECollisionLimitType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECollisionLimitType() {}
// Cross Module References
	KAWAIIPHYSICS_API UEnum* Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType();
	UPackage* Z_Construct_UPackage__Script_KawaiiPhysics();
// End Cross Module References
	static UEnum* ECollisionLimitType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType, Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("ECollisionLimitType"));
		}
		return Singleton;
	}
	template<> KAWAIIPHYSICS_API UEnum* StaticEnum<ECollisionLimitType>()
	{
		return ECollisionLimitType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECollisionLimitType(ECollisionLimitType_StaticEnum, TEXT("/Script/KawaiiPhysics"), TEXT("ECollisionLimitType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType_Hash() { return 945571041U; }
	UEnum* Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_KawaiiPhysics();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECollisionLimitType"), 0, Get_Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECollisionLimitType::None", (int64)ECollisionLimitType::None },
				{ "ECollisionLimitType::Spherical", (int64)ECollisionLimitType::Spherical },
				{ "ECollisionLimitType::Capsule", (int64)ECollisionLimitType::Capsule },
				{ "ECollisionLimitType::Planar", (int64)ECollisionLimitType::Planar },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Capsule.Name", "ECollisionLimitType::Capsule" },
				{ "ModuleRelativePath", "Public/ECollisionLimitType.h" },
				{ "None.Name", "ECollisionLimitType::None" },
				{ "Planar.Name", "ECollisionLimitType::Planar" },
				{ "Spherical.Name", "ECollisionLimitType::Spherical" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_KawaiiPhysics,
				nullptr,
				"ECollisionLimitType",
				"ECollisionLimitType",
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
