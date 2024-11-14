// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PrimarySystems/PrimaryGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PERSONALPROJECT_PrimaryGameMode_generated_h
#error "PrimaryGameMode.generated.h already included, missing '#pragma once' in PrimaryGameMode.h"
#endif
#define PERSONALPROJECT_PrimaryGameMode_generated_h

#define FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_PrimarySystems_PrimaryGameMode_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPrimaryGameMode(); \
	friend struct Z_Construct_UClass_APrimaryGameMode_Statics; \
public: \
	DECLARE_CLASS(APrimaryGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/PersonalProject"), NO_API) \
	DECLARE_SERIALIZER(APrimaryGameMode)


#define FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_PrimarySystems_PrimaryGameMode_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APrimaryGameMode(APrimaryGameMode&&); \
	APrimaryGameMode(const APrimaryGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APrimaryGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APrimaryGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APrimaryGameMode) \
	NO_API virtual ~APrimaryGameMode();


#define FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_PrimarySystems_PrimaryGameMode_h_18_PROLOG
#define FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_PrimarySystems_PrimaryGameMode_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_PrimarySystems_PrimaryGameMode_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_PrimarySystems_PrimaryGameMode_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PERSONALPROJECT_API UClass* StaticClass<class APrimaryGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_PrimarySystems_PrimaryGameMode_h


#define FOREACH_ENUM_EGAMESTATE(op) \
	op(EGameState::ETitleScreen) \
	op(EGameState::EInGame) \
	op(EGameState::EPause) \
	op(EGameState::EGameOver) 

enum class EGameState : uint8;
template<> struct TIsUEnumClass<EGameState> { enum { Value = true }; };
template<> PERSONALPROJECT_API UEnum* StaticEnum<EGameState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
