// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/Unlockable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PERSONALPROJECT_Unlockable_generated_h
#error "Unlockable.generated.h already included, missing '#pragma once' in Unlockable.h"
#endif
#define PERSONALPROJECT_Unlockable_generated_h

#define FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Interfaces_Unlockable_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PERSONALPROJECT_API UUnlockable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUnlockable(UUnlockable&&); \
	UUnlockable(const UUnlockable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PERSONALPROJECT_API, UUnlockable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnlockable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnlockable) \
	PERSONALPROJECT_API virtual ~UUnlockable();


#define FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Interfaces_Unlockable_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUUnlockable(); \
	friend struct Z_Construct_UClass_UUnlockable_Statics; \
public: \
	DECLARE_CLASS(UUnlockable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PersonalProject"), PERSONALPROJECT_API) \
	DECLARE_SERIALIZER(UUnlockable)


#define FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Interfaces_Unlockable_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Interfaces_Unlockable_h_10_GENERATED_UINTERFACE_BODY() \
	FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Interfaces_Unlockable_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Interfaces_Unlockable_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IUnlockable() {} \
public: \
	typedef UUnlockable UClassType; \
	typedef IUnlockable ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Interfaces_Unlockable_h_7_PROLOG
#define FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Interfaces_Unlockable_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Interfaces_Unlockable_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PERSONALPROJECT_API UClass* StaticClass<class UUnlockable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Interfaces_Unlockable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
