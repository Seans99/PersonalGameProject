// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/PlayerHUD.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PERSONALPROJECT_PlayerHUD_generated_h
#error "PlayerHUD.generated.h already included, missing '#pragma once' in PlayerHUD.h"
#endif
#define PERSONALPROJECT_PlayerHUD_generated_h

#define FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_PlayerHUD_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckIfbehind); \
	DECLARE_FUNCTION(execCheckNavPoint); \
	DECLARE_FUNCTION(execSetDirection); \
	DECLARE_FUNCTION(execStaminaChange); \
	DECLARE_FUNCTION(execHealthChange);


#define FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_PlayerHUD_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerHUD(); \
	friend struct Z_Construct_UClass_UPlayerHUD_Statics; \
public: \
	DECLARE_CLASS(UPlayerHUD, UGUIBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PersonalProject"), NO_API) \
	DECLARE_SERIALIZER(UPlayerHUD)


#define FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_PlayerHUD_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayerHUD(UPlayerHUD&&); \
	UPlayerHUD(const UPlayerHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerHUD) \
	NO_API virtual ~UPlayerHUD();


#define FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_PlayerHUD_h_18_PROLOG
#define FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_PlayerHUD_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_PlayerHUD_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_PlayerHUD_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_PlayerHUD_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PERSONALPROJECT_API UClass* StaticClass<class UPlayerHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_PlayerHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
