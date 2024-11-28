// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/PauseMenu.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PERSONALPROJECT_PauseMenu_generated_h
#error "PauseMenu.generated.h already included, missing '#pragma once' in PauseMenu.h"
#endif
#define PERSONALPROJECT_PauseMenu_generated_h

#define FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_PauseMenu_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execQuit); \
	DECLARE_FUNCTION(execQuitToTitle); \
	DECLARE_FUNCTION(execSettings); \
	DECLARE_FUNCTION(execResumeGame);


#define FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_PauseMenu_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPauseMenu(); \
	friend struct Z_Construct_UClass_UPauseMenu_Statics; \
public: \
	DECLARE_CLASS(UPauseMenu, UGUIBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PersonalProject"), NO_API) \
	DECLARE_SERIALIZER(UPauseMenu)


#define FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_PauseMenu_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPauseMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPauseMenu(UPauseMenu&&); \
	UPauseMenu(const UPauseMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPauseMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPauseMenu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPauseMenu) \
	NO_API virtual ~UPauseMenu();


#define FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_PauseMenu_h_9_PROLOG
#define FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_PauseMenu_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_PauseMenu_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_PauseMenu_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_PauseMenu_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PERSONALPROJECT_API UClass* StaticClass<class UPauseMenu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_PauseMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
