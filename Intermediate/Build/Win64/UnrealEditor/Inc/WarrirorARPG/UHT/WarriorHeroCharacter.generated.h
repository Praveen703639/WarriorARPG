// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/WarriorHeroCharacter.h"

#ifdef WARRIRORARPG_WarriorHeroCharacter_generated_h
#error "WarriorHeroCharacter.generated.h already included, missing '#pragma once' in WarriorHeroCharacter.h"
#endif
#define WARRIRORARPG_WarriorHeroCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AWarriorHeroCharacter ****************************************************
WARRIRORARPG_API UClass* Z_Construct_UClass_AWarriorHeroCharacter_NoRegister();

#define FID_WarrirorARPG_Source_WarrirorARPG_Public_Characters_WarriorHeroCharacter_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWarriorHeroCharacter(); \
	friend struct Z_Construct_UClass_AWarriorHeroCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WARRIRORARPG_API UClass* Z_Construct_UClass_AWarriorHeroCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AWarriorHeroCharacter, AWarriorBaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WarrirorARPG"), Z_Construct_UClass_AWarriorHeroCharacter_NoRegister) \
	DECLARE_SERIALIZER(AWarriorHeroCharacter)


#define FID_WarrirorARPG_Source_WarrirorARPG_Public_Characters_WarriorHeroCharacter_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AWarriorHeroCharacter(AWarriorHeroCharacter&&) = delete; \
	AWarriorHeroCharacter(const AWarriorHeroCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWarriorHeroCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWarriorHeroCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWarriorHeroCharacter) \
	NO_API virtual ~AWarriorHeroCharacter();


#define FID_WarrirorARPG_Source_WarrirorARPG_Public_Characters_WarriorHeroCharacter_h_16_PROLOG
#define FID_WarrirorARPG_Source_WarrirorARPG_Public_Characters_WarriorHeroCharacter_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WarrirorARPG_Source_WarrirorARPG_Public_Characters_WarriorHeroCharacter_h_19_INCLASS_NO_PURE_DECLS \
	FID_WarrirorARPG_Source_WarrirorARPG_Public_Characters_WarriorHeroCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AWarriorHeroCharacter;

// ********** End Class AWarriorHeroCharacter ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_WarrirorARPG_Source_WarrirorARPG_Public_Characters_WarriorHeroCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
