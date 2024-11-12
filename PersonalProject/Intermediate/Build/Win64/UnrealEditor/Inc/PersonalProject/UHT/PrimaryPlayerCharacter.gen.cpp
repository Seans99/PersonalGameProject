// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PersonalProject/PrimaryPlayerCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrimaryPlayerCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
PERSONALPROJECT_API UClass* Z_Construct_UClass_APrimaryPlayerCharacter();
PERSONALPROJECT_API UClass* Z_Construct_UClass_APrimaryPlayerCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_PersonalProject();
// End Cross Module References

// Begin Class APrimaryPlayerCharacter
void APrimaryPlayerCharacter::StaticRegisterNativesAPrimaryPlayerCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APrimaryPlayerCharacter);
UClass* Z_Construct_UClass_APrimaryPlayerCharacter_NoRegister()
{
	return APrimaryPlayerCharacter::StaticClass();
}
struct Z_Construct_UClass_APrimaryPlayerCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PrimaryPlayerCharacter.h" },
		{ "ModuleRelativePath", "PrimaryPlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrimaryPlayerCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APrimaryPlayerCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_PersonalProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APrimaryPlayerCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APrimaryPlayerCharacter_Statics::ClassParams = {
	&APrimaryPlayerCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APrimaryPlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_APrimaryPlayerCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APrimaryPlayerCharacter()
{
	if (!Z_Registration_Info_UClass_APrimaryPlayerCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APrimaryPlayerCharacter.OuterSingleton, Z_Construct_UClass_APrimaryPlayerCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APrimaryPlayerCharacter.OuterSingleton;
}
template<> PERSONALPROJECT_API UClass* StaticClass<APrimaryPlayerCharacter>()
{
	return APrimaryPlayerCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APrimaryPlayerCharacter);
APrimaryPlayerCharacter::~APrimaryPlayerCharacter() {}
// End Class APrimaryPlayerCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_PrimaryPlayerCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APrimaryPlayerCharacter, APrimaryPlayerCharacter::StaticClass, TEXT("APrimaryPlayerCharacter"), &Z_Registration_Info_UClass_APrimaryPlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APrimaryPlayerCharacter), 1879491611U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_PrimaryPlayerCharacter_h_2931729117(TEXT("/Script/PersonalProject"),
	Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_PrimaryPlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_PrimaryPlayerCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
