// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/ObjectivePoint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PERSONALPROJECT_ObjectivePoint_generated_h
#error "ObjectivePoint.generated.h already included, missing '#pragma once' in ObjectivePoint.h"
#endif
#define PERSONALPROJECT_ObjectivePoint_generated_h

#define FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_ObjectivePoint_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execShowCurrentObjective); \
	DECLARE_FUNCTION(execHideObjectiveWidget); \
	DECLARE_FUNCTION(execOnBoxBeginOverlap);


#define FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_ObjectivePoint_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAObjectivePoint(); \
	friend struct Z_Construct_UClass_AObjectivePoint_Statics; \
public: \
	DECLARE_CLASS(AObjectivePoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PersonalProject"), NO_API) \
	DECLARE_SERIALIZER(AObjectivePoint)


#define FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_ObjectivePoint_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AObjectivePoint(AObjectivePoint&&); \
	AObjectivePoint(const AObjectivePoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObjectivePoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObjectivePoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AObjectivePoint) \
	NO_API virtual ~AObjectivePoint();


#define FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_ObjectivePoint_h_12_PROLOG
#define FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_ObjectivePoint_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_ObjectivePoint_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_ObjectivePoint_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_ObjectivePoint_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PERSONALPROJECT_API UClass* StaticClass<class AObjectivePoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_ObjectivePoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
