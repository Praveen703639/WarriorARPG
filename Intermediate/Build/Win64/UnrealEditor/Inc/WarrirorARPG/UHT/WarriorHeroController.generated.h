// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controllers/WarriorHeroController.h"

#ifdef WARRIRORARPG_WarriorHeroController_generated_h
#error "WarriorHeroController.generated.h already included, missing '#pragma once' in WarriorHeroController.h"
#endif
#define WARRIRORARPG_WarriorHeroController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AWarriorHeroController ***************************************************
WARRIRORARPG_API UClass* Z_Construct_UClass_AWarriorHeroController_NoRegister();

#define FID_WarrirorARPG_Source_WarrirorARPG_Public_Controllers_WarriorHeroController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWarriorHeroController(); \
	friend struct Z_Construct_UClass_AWarriorHeroController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WARRIRORARPG_API UClass* Z_Construct_UClass_AWarriorHeroController_NoRegister(); \
public: \
	DECLARE_CLASS2(AWarriorHeroController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WarrirorARPG"), Z_Construct_UClass_AWarriorHeroController_NoRegister) \
	DECLARE_SERIALIZER(AWarriorHeroController)


#define FID_WarrirorARPG_Source_WarrirorARPG_Public_Controllers_WarriorHeroController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWarriorHeroController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AWarriorHeroController(AWarriorHeroController&&) = delete; \
	AWarriorHeroController(const AWarriorHeroController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWarriorHeroController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWarriorHeroController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWarriorHeroController) \
	NO_API virtual ~AWarriorHeroController();


#define FID_WarrirorARPG_Source_WarrirorARPG_Public_Controllers_WarriorHeroController_h_12_PROLOG
#define FID_WarrirorARPG_Source_WarrirorARPG_Public_Controllers_WarriorHeroController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WarrirorARPG_Source_WarrirorARPG_Public_Controllers_WarriorHeroController_h_15_INCLASS_NO_PURE_DECLS \
	FID_WarrirorARPG_Source_WarrirorARPG_Public_Controllers_WarriorHeroController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AWarriorHeroController;

// ********** End Class AWarriorHeroController *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_WarrirorARPG_Source_WarrirorARPG_Public_Controllers_WarriorHeroController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
