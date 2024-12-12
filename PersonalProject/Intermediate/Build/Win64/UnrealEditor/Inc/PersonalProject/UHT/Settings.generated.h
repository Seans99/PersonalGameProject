// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Settings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PERSONALPROJECT_Settings_generated_h
#error "Settings.generated.h already included, missing '#pragma once' in Settings.h"
#endif
#define PERSONALPROJECT_Settings_generated_h

#define FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_Settings_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execApply); \
	DECLARE_FUNCTION(execBack); \
	DECLARE_FUNCTION(execShowAccessibilitySettings); \
	DECLARE_FUNCTION(execShowControlsSettings); \
	DECLARE_FUNCTION(execShowAudioSettings); \
	DECLARE_FUNCTION(execShowDisplaySettings);


#define FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_Settings_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSettings(); \
	friend struct Z_Construct_UClass_USettings_Statics; \
public: \
	DECLARE_CLASS(USettings, UGUIBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PersonalProject"), NO_API) \
	DECLARE_SERIALIZER(USettings)


#define FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_Settings_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USettings(USettings&&); \
	USettings(const USettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USettings) \
	NO_API virtual ~USettings();


#define FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_Settings_h_14_PROLOG
#define FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_Settings_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_Settings_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_Settings_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_Settings_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PERSONALPROJECT_API UClass* StaticClass<class USettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_Settings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
