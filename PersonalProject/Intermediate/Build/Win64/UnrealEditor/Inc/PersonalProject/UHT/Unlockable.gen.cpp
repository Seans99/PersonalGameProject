// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PersonalProject/Interfaces/Unlockable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnlockable() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
PERSONALPROJECT_API UClass* Z_Construct_UClass_UUnlockable();
PERSONALPROJECT_API UClass* Z_Construct_UClass_UUnlockable_NoRegister();
UPackage* Z_Construct_UPackage__Script_PersonalProject();
// End Cross Module References

// Begin Interface UUnlockable
void UUnlockable::StaticRegisterNativesUUnlockable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUnlockable);
UClass* Z_Construct_UClass_UUnlockable_NoRegister()
{
	return UUnlockable::StaticClass();
}
struct Z_Construct_UClass_UUnlockable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/Unlockable.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUnlockable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUnlockable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_PersonalProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUnlockable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnlockable_Statics::ClassParams = {
	&UUnlockable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUnlockable_Statics::Class_MetaDataParams), Z_Construct_UClass_UUnlockable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUnlockable()
{
	if (!Z_Registration_Info_UClass_UUnlockable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnlockable.OuterSingleton, Z_Construct_UClass_UUnlockable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUnlockable.OuterSingleton;
}
template<> PERSONALPROJECT_API UClass* StaticClass<UUnlockable>()
{
	return UUnlockable::StaticClass();
}
UUnlockable::UUnlockable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUnlockable);
UUnlockable::~UUnlockable() {}
// End Interface UUnlockable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Interfaces_Unlockable_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUnlockable, UUnlockable::StaticClass, TEXT("UUnlockable"), &Z_Registration_Info_UClass_UUnlockable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnlockable), 918908413U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Interfaces_Unlockable_h_450065184(TEXT("/Script/PersonalProject"),
	Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Interfaces_Unlockable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Interfaces_Unlockable_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
