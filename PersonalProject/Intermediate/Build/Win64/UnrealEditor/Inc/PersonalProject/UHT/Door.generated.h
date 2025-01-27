// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/Door.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PERSONALPROJECT_Door_generated_h
#error "Door.generated.h already included, missing '#pragma once' in Door.h"
#endif
#define PERSONALPROJECT_Door_generated_h

#define FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_Door_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnBoxEndOverlap); \
	DECLARE_FUNCTION(execOnBoxBeginOverlap);


#define FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_Door_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADoor(); \
	friend struct Z_Construct_UClass_ADoor_Statics; \
public: \
	DECLARE_CLASS(ADoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PersonalProject"), NO_API) \
	DECLARE_SERIALIZER(ADoor)


#define FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_Door_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADoor(ADoor&&); \
	ADoor(const ADoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADoor) \
	NO_API virtual ~ADoor();


#define FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_Door_h_10_PROLOG
#define FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_Door_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_Door_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_Door_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_Door_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PERSONALPROJECT_API UClass* StaticClass<class ADoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_Door_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
