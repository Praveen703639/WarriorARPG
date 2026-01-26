// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataAsset/Inputs/DataAsset_Inputconfig.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDataAsset_Inputconfig() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_WarrirorARPG();
WARRIRORARPG_API UClass* Z_Construct_UClass_UDataAsset_InputConfig();
WARRIRORARPG_API UClass* Z_Construct_UClass_UDataAsset_InputConfig_NoRegister();
WARRIRORARPG_API UScriptStruct* Z_Construct_UScriptStruct_FWarriorInputActionConfig();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FWarriorInputActionConfig *****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWarriorInputActionConfig;
class UScriptStruct* FWarriorInputActionConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWarriorInputActionConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWarriorInputActionConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWarriorInputActionConfig, (UObject*)Z_Construct_UPackage__Script_WarrirorARPG(), TEXT("WarriorInputActionConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FWarriorInputActionConfig.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FWarriorInputActionConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataAsset/Inputs/DataAsset_Inputconfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[] = {
		{ "Categories", "InputTag" },
		{ "Category", "WarriorInputActionConfig" },
		{ "ModuleRelativePath", "Public/DataAsset/Inputs/DataAsset_Inputconfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "Category", "WarriorInputActionConfig" },
		{ "ModuleRelativePath", "Public/DataAsset/Inputs/DataAsset_Inputconfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWarriorInputActionConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWarriorInputActionConfig_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWarriorInputActionConfig, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTag_MetaData), NewProp_InputTag_MetaData) }; // 133831994
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWarriorInputActionConfig_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWarriorInputActionConfig, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWarriorInputActionConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWarriorInputActionConfig_Statics::NewProp_InputTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWarriorInputActionConfig_Statics::NewProp_InputAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWarriorInputActionConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWarriorInputActionConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WarrirorARPG,
	nullptr,
	&NewStructOps,
	"WarriorInputActionConfig",
	Z_Construct_UScriptStruct_FWarriorInputActionConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWarriorInputActionConfig_Statics::PropPointers),
	sizeof(FWarriorInputActionConfig),
	alignof(FWarriorInputActionConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWarriorInputActionConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWarriorInputActionConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWarriorInputActionConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FWarriorInputActionConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWarriorInputActionConfig.InnerSingleton, Z_Construct_UScriptStruct_FWarriorInputActionConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FWarriorInputActionConfig.InnerSingleton;
}
// ********** End ScriptStruct FWarriorInputActionConfig *******************************************

// ********** Begin Class UDataAsset_InputConfig Function GiveNativeInputActionByTag ***************
struct Z_Construct_UFunction_UDataAsset_InputConfig_GiveNativeInputActionByTag_Statics
{
	struct DataAsset_InputConfig_eventGiveNativeInputActionByTag_Parms
	{
		FGameplayTag InInputTag;
		UInputAction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataAsset/Inputs/DataAsset_Inputconfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InInputTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InInputTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataAsset_InputConfig_GiveNativeInputActionByTag_Statics::NewProp_InInputTag = { "InInputTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataAsset_InputConfig_eventGiveNativeInputActionByTag_Parms, InInputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InInputTag_MetaData), NewProp_InInputTag_MetaData) }; // 133831994
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataAsset_InputConfig_GiveNativeInputActionByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataAsset_InputConfig_eventGiveNativeInputActionByTag_Parms, ReturnValue), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataAsset_InputConfig_GiveNativeInputActionByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataAsset_InputConfig_GiveNativeInputActionByTag_Statics::NewProp_InInputTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataAsset_InputConfig_GiveNativeInputActionByTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataAsset_InputConfig_GiveNativeInputActionByTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataAsset_InputConfig_GiveNativeInputActionByTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDataAsset_InputConfig, nullptr, "GiveNativeInputActionByTag", Z_Construct_UFunction_UDataAsset_InputConfig_GiveNativeInputActionByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataAsset_InputConfig_GiveNativeInputActionByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataAsset_InputConfig_GiveNativeInputActionByTag_Statics::DataAsset_InputConfig_eventGiveNativeInputActionByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataAsset_InputConfig_GiveNativeInputActionByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataAsset_InputConfig_GiveNativeInputActionByTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDataAsset_InputConfig_GiveNativeInputActionByTag_Statics::DataAsset_InputConfig_eventGiveNativeInputActionByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataAsset_InputConfig_GiveNativeInputActionByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataAsset_InputConfig_GiveNativeInputActionByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataAsset_InputConfig::execGiveNativeInputActionByTag)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_InInputTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInputAction**)Z_Param__Result=P_THIS->GiveNativeInputActionByTag(Z_Param_Out_InInputTag);
	P_NATIVE_END;
}
// ********** End Class UDataAsset_InputConfig Function GiveNativeInputActionByTag *****************

// ********** Begin Class UDataAsset_InputConfig ***************************************************
void UDataAsset_InputConfig::StaticRegisterNativesUDataAsset_InputConfig()
{
	UClass* Class = UDataAsset_InputConfig::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GiveNativeInputActionByTag", &UDataAsset_InputConfig::execGiveNativeInputActionByTag },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDataAsset_InputConfig;
UClass* UDataAsset_InputConfig::GetPrivateStaticClass()
{
	using TClass = UDataAsset_InputConfig;
	if (!Z_Registration_Info_UClass_UDataAsset_InputConfig.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DataAsset_InputConfig"),
			Z_Registration_Info_UClass_UDataAsset_InputConfig.InnerSingleton,
			StaticRegisterNativesUDataAsset_InputConfig,
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
	return Z_Registration_Info_UClass_UDataAsset_InputConfig.InnerSingleton;
}
UClass* Z_Construct_UClass_UDataAsset_InputConfig_NoRegister()
{
	return UDataAsset_InputConfig::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDataAsset_InputConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DataAsset/Inputs/DataAsset_Inputconfig.h" },
		{ "ModuleRelativePath", "Public/DataAsset/Inputs/DataAsset_Inputconfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NativeInputActions_MetaData[] = {
		{ "Category", "Input Config" },
		{ "ModuleRelativePath", "Public/DataAsset/Inputs/DataAsset_Inputconfig.h" },
		{ "TitleProperty", "InputTag" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "Category", "Input Config" },
		{ "ModuleRelativePath", "Public/DataAsset/Inputs/DataAsset_Inputconfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NativeInputActions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NativeInputActions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDataAsset_InputConfig_GiveNativeInputActionByTag, "GiveNativeInputActionByTag" }, // 3492299970
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataAsset_InputConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataAsset_InputConfig_Statics::NewProp_NativeInputActions_Inner = { "NativeInputActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWarriorInputActionConfig, METADATA_PARAMS(0, nullptr) }; // 3228976931
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataAsset_InputConfig_Statics::NewProp_NativeInputActions = { "NativeInputActions", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataAsset_InputConfig, NativeInputActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NativeInputActions_MetaData), NewProp_NativeInputActions_MetaData) }; // 3228976931
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDataAsset_InputConfig_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataAsset_InputConfig, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataAsset_InputConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_InputConfig_Statics::NewProp_NativeInputActions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_InputConfig_Statics::NewProp_NativeInputActions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_InputConfig_Statics::NewProp_DefaultMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_InputConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDataAsset_InputConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_WarrirorARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_InputConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataAsset_InputConfig_Statics::ClassParams = {
	&UDataAsset_InputConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDataAsset_InputConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_InputConfig_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_InputConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataAsset_InputConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataAsset_InputConfig()
{
	if (!Z_Registration_Info_UClass_UDataAsset_InputConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataAsset_InputConfig.OuterSingleton, Z_Construct_UClass_UDataAsset_InputConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataAsset_InputConfig.OuterSingleton;
}
UDataAsset_InputConfig::UDataAsset_InputConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataAsset_InputConfig);
UDataAsset_InputConfig::~UDataAsset_InputConfig() {}
// ********** End Class UDataAsset_InputConfig *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_WarrirorARPG_Source_WarrirorARPG_Public_DataAsset_Inputs_DataAsset_Inputconfig_h__Script_WarrirorARPG_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWarriorInputActionConfig::StaticStruct, Z_Construct_UScriptStruct_FWarriorInputActionConfig_Statics::NewStructOps, TEXT("WarriorInputActionConfig"), &Z_Registration_Info_UScriptStruct_FWarriorInputActionConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWarriorInputActionConfig), 3228976931U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataAsset_InputConfig, UDataAsset_InputConfig::StaticClass, TEXT("UDataAsset_InputConfig"), &Z_Registration_Info_UClass_UDataAsset_InputConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataAsset_InputConfig), 614271018U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WarrirorARPG_Source_WarrirorARPG_Public_DataAsset_Inputs_DataAsset_Inputconfig_h__Script_WarrirorARPG_1263155028(TEXT("/Script/WarrirorARPG"),
	Z_CompiledInDeferFile_FID_WarrirorARPG_Source_WarrirorARPG_Public_DataAsset_Inputs_DataAsset_Inputconfig_h__Script_WarrirorARPG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WarrirorARPG_Source_WarrirorARPG_Public_DataAsset_Inputs_DataAsset_Inputconfig_h__Script_WarrirorARPG_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_WarrirorARPG_Source_WarrirorARPG_Public_DataAsset_Inputs_DataAsset_Inputconfig_h__Script_WarrirorARPG_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WarrirorARPG_Source_WarrirorARPG_Public_DataAsset_Inputs_DataAsset_Inputconfig_h__Script_WarrirorARPG_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
