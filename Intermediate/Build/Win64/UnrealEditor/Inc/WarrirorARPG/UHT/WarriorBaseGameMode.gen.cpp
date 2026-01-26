// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameModes/WarriorBaseGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWarriorBaseGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_WarrirorARPG();
WARRIRORARPG_API UClass* Z_Construct_UClass_AWarriorBaseGameMode();
WARRIRORARPG_API UClass* Z_Construct_UClass_AWarriorBaseGameMode_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AWarriorBaseGameMode *****************************************************
void AWarriorBaseGameMode::StaticRegisterNativesAWarriorBaseGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AWarriorBaseGameMode;
UClass* AWarriorBaseGameMode::GetPrivateStaticClass()
{
	using TClass = AWarriorBaseGameMode;
	if (!Z_Registration_Info_UClass_AWarriorBaseGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WarriorBaseGameMode"),
			Z_Registration_Info_UClass_AWarriorBaseGameMode.InnerSingleton,
			StaticRegisterNativesAWarriorBaseGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AWarriorBaseGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AWarriorBaseGameMode_NoRegister()
{
	return AWarriorBaseGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AWarriorBaseGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/WarriorBaseGameMode.h" },
		{ "ModuleRelativePath", "Public/GameModes/WarriorBaseGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWarriorBaseGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AWarriorBaseGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_WarrirorARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorBaseGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWarriorBaseGameMode_Statics::ClassParams = {
	&AWarriorBaseGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorBaseGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AWarriorBaseGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWarriorBaseGameMode()
{
	if (!Z_Registration_Info_UClass_AWarriorBaseGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWarriorBaseGameMode.OuterSingleton, Z_Construct_UClass_AWarriorBaseGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWarriorBaseGameMode.OuterSingleton;
}
AWarriorBaseGameMode::AWarriorBaseGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWarriorBaseGameMode);
AWarriorBaseGameMode::~AWarriorBaseGameMode() {}
// ********** End Class AWarriorBaseGameMode *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_WarrirorARPG_Source_WarrirorARPG_Public_GameModes_WarriorBaseGameMode_h__Script_WarrirorARPG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWarriorBaseGameMode, AWarriorBaseGameMode::StaticClass, TEXT("AWarriorBaseGameMode"), &Z_Registration_Info_UClass_AWarriorBaseGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWarriorBaseGameMode), 3934215186U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WarrirorARPG_Source_WarrirorARPG_Public_GameModes_WarriorBaseGameMode_h__Script_WarrirorARPG_1406904478(TEXT("/Script/WarrirorARPG"),
	Z_CompiledInDeferFile_FID_WarrirorARPG_Source_WarrirorARPG_Public_GameModes_WarriorBaseGameMode_h__Script_WarrirorARPG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WarrirorARPG_Source_WarrirorARPG_Public_GameModes_WarriorBaseGameMode_h__Script_WarrirorARPG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
