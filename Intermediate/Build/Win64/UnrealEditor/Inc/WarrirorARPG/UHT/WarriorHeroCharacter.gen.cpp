// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Characters/WarriorHeroCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWarriorHeroCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_WarrirorARPG();
WARRIRORARPG_API UClass* Z_Construct_UClass_AWarriorBaseCharacter();
WARRIRORARPG_API UClass* Z_Construct_UClass_AWarriorHeroCharacter();
WARRIRORARPG_API UClass* Z_Construct_UClass_AWarriorHeroCharacter_NoRegister();
WARRIRORARPG_API UClass* Z_Construct_UClass_UDataAsset_InputConfig_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AWarriorHeroCharacter ****************************************************
void AWarriorHeroCharacter::StaticRegisterNativesAWarriorHeroCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AWarriorHeroCharacter;
UClass* AWarriorHeroCharacter::GetPrivateStaticClass()
{
	using TClass = AWarriorHeroCharacter;
	if (!Z_Registration_Info_UClass_AWarriorHeroCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WarriorHeroCharacter"),
			Z_Registration_Info_UClass_AWarriorHeroCharacter.InnerSingleton,
			StaticRegisterNativesAWarriorHeroCharacter,
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
	return Z_Registration_Info_UClass_AWarriorHeroCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AWarriorHeroCharacter_NoRegister()
{
	return AWarriorHeroCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AWarriorHeroCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/WarriorHeroCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/WarriorHeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/WarriorHeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/WarriorHeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputconfigDataAsset_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Characters/WarriorHeroCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputconfigDataAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWarriorHeroCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWarriorHeroCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorHeroCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWarriorHeroCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorHeroCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWarriorHeroCharacter_Statics::NewProp_InputconfigDataAsset = { "InputconfigDataAsset", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorHeroCharacter, InputconfigDataAsset), Z_Construct_UClass_UDataAsset_InputConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputconfigDataAsset_MetaData), NewProp_InputconfigDataAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWarriorHeroCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorHeroCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorHeroCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorHeroCharacter_Statics::NewProp_InputconfigDataAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorHeroCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWarriorHeroCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWarriorBaseCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_WarrirorARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorHeroCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWarriorHeroCharacter_Statics::ClassParams = {
	&AWarriorHeroCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AWarriorHeroCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorHeroCharacter_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorHeroCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AWarriorHeroCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWarriorHeroCharacter()
{
	if (!Z_Registration_Info_UClass_AWarriorHeroCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWarriorHeroCharacter.OuterSingleton, Z_Construct_UClass_AWarriorHeroCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWarriorHeroCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWarriorHeroCharacter);
AWarriorHeroCharacter::~AWarriorHeroCharacter() {}
// ********** End Class AWarriorHeroCharacter ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_WarrirorARPG_Source_WarrirorARPG_Public_Characters_WarriorHeroCharacter_h__Script_WarrirorARPG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWarriorHeroCharacter, AWarriorHeroCharacter::StaticClass, TEXT("AWarriorHeroCharacter"), &Z_Registration_Info_UClass_AWarriorHeroCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWarriorHeroCharacter), 1567762775U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WarrirorARPG_Source_WarrirorARPG_Public_Characters_WarriorHeroCharacter_h__Script_WarrirorARPG_21535142(TEXT("/Script/WarrirorARPG"),
	Z_CompiledInDeferFile_FID_WarrirorARPG_Source_WarrirorARPG_Public_Characters_WarriorHeroCharacter_h__Script_WarrirorARPG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WarrirorARPG_Source_WarrirorARPG_Public_Characters_WarriorHeroCharacter_h__Script_WarrirorARPG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
