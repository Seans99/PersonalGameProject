// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/NavPoint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PERSONALPROJECT_NavPoint_generated_h
#error "NavPoint.generated.h already included, missing '#pragma once' in NavPoint.h"
#endif
#define PERSONALPROJECT_NavPoint_generated_h

#define FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_NavPoint_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnBoxBeginOverlap);


#define FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_NavPoint_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANavPoint(); \
	friend struct Z_Construct_UClass_ANavPoint_Statics; \
public: \
	DECLARE_CLASS(ANavPoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PersonalProject"), NO_API) \
	DECLARE_SERIALIZER(ANavPoint)


#define FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_NavPoint_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANavPoint(ANavPoint&&); \
	ANavPoint(const ANavPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANavPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavPoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANavPoint) \
	NO_API virtual ~ANavPoint();


#define FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_NavPoint_h_9_PROLOG
#define FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_NavPoint_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_NavPoint_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_NavPoint_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_NavPoint_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PERSONALPROJECT_API UClass* StaticClass<class ANavPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_NavPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
