// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/UIComponents/CustomButtonV1.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PERSONALPROJECT_CustomButtonV1_generated_h
#error "CustomButtonV1.generated.h already included, missing '#pragma once' in CustomButtonV1.h"
#endif
#define PERSONALPROJECT_CustomButtonV1_generated_h

#define FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_UIComponents_CustomButtonV1_h_10_DELEGATE \
PERSONALPROJECT_API void FOnButtonClicked_DelegateWrapper(const FMulticastScriptDelegate& OnButtonClicked);


#define FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_UIComponents_CustomButtonV1_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBroadcastOnClicked); \
	DECLARE_FUNCTION(execIsActiveButton); \
	DECLARE_FUNCTION(execSetButtonText); \
	DECLARE_FUNCTION(execUnHoverEffect); \
	DECLARE_FUNCTION(execHoverEffect);


#define FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_UIComponents_CustomButtonV1_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomButtonV1(); \
	friend struct Z_Construct_UClass_UCustomButtonV1_Statics; \
public: \
	DECLARE_CLASS(UCustomButtonV1, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PersonalProject"), NO_API) \
	DECLARE_SERIALIZER(UCustomButtonV1)


#define FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_UIComponents_CustomButtonV1_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomButtonV1(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCustomButtonV1(UCustomButtonV1&&); \
	UCustomButtonV1(const UCustomButtonV1&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomButtonV1); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomButtonV1); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomButtonV1) \
	NO_API virtual ~UCustomButtonV1();


#define FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_UIComponents_CustomButtonV1_h_12_PROLOG
#define FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_UIComponents_CustomButtonV1_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_UIComponents_CustomButtonV1_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_UIComponents_CustomButtonV1_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_UIComponents_CustomButtonV1_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PERSONALPROJECT_API UClass* StaticClass<class UCustomButtonV1>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_UIComponents_CustomButtonV1_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
