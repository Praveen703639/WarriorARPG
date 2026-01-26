// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameModes/WarriorBaseGameMode.h"

#ifdef WARRIRORARPG_WarriorBaseGameMode_generated_h
#error "WarriorBaseGameMode.generated.h already included, missing '#pragma once' in WarriorBaseGameMode.h"
#endif
#define WARRIRORARPG_WarriorBaseGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AWarriorBaseGameMode *****************************************************
WARRIRORARPG_API UClass* Z_Construct_UClass_AWarriorBaseGameMode_NoRegister();

#define FID_WarrirorARPG_Source_WarrirorARPG_Public_GameModes_WarriorBaseGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWarriorBaseGameMode(); \
	friend struct Z_Construct_UClass_AWarriorBaseGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WARRIRORARPG_API UClass* Z_Construct_UClass_AWarriorBaseGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AWarriorBaseGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/WarrirorARPG"), Z_Construct_UClass_AWarriorBaseGameMode_NoRegister) \
	DECLARE_SERIALIZER(AWarriorBaseGameMode)


#define FID_WarrirorARPG_Source_WarrirorARPG_Public_GameModes_WarriorBaseGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWarriorBaseGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AWarriorBaseGameMode(AWarriorBaseGameMode&&) = delete; \
	AWarriorBaseGameMode(const AWarriorBaseGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWarriorBaseGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWarriorBaseGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWarriorBaseGameMode) \
	NO_API virtual ~AWarriorBaseGameMode();


#define FID_WarrirorARPG_Source_WarrirorARPG_Public_GameModes_WarriorBaseGameMode_h_12_PROLOG
#define FID_WarrirorARPG_Source_WarrirorARPG_Public_GameModes_WarriorBaseGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WarrirorARPG_Source_WarrirorARPG_Public_GameModes_WarriorBaseGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_WarrirorARPG_Source_WarrirorARPG_Public_GameModes_WarriorBaseGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AWarriorBaseGameMode;

// ********** End Class AWarriorBaseGameMode *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_WarrirorARPG_Source_WarrirorARPG_Public_GameModes_WarriorBaseGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
