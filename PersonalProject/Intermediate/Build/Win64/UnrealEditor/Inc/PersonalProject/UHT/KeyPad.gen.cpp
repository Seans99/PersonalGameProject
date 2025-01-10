// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PersonalProject/KeyPad.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeyPad() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PERSONALPROJECT_API UClass* Z_Construct_UClass_AKeyPad();
PERSONALPROJECT_API UClass* Z_Construct_UClass_AKeyPad_NoRegister();
UPackage* Z_Construct_UPackage__Script_PersonalProject();
// End Cross Module References

// Begin Class AKeyPad
void AKeyPad::StaticRegisterNativesAKeyPad()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AKeyPad);
UClass* Z_Construct_UClass_AKeyPad_NoRegister()
{
	return AKeyPad::StaticClass();
}
struct Z_Construct_UClass_AKeyPad_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "KeyPad.h" },
		{ "ModuleRelativePath", "KeyPad.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKeyPad>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AKeyPad_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PersonalProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKeyPad_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AKeyPad_Statics::ClassParams = {
	&AKeyPad::StaticClass,
	"Engine",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKeyPad_Statics::Class_MetaDataParams), Z_Construct_UClass_AKeyPad_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AKeyPad()
{
	if (!Z_Registration_Info_UClass_AKeyPad.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKeyPad.OuterSingleton, Z_Construct_UClass_AKeyPad_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AKeyPad.OuterSingleton;
}
template<> PERSONALPROJECT_API UClass* StaticClass<AKeyPad>()
{
	return AKeyPad::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AKeyPad);
AKeyPad::~AKeyPad() {}
// End Class AKeyPad

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_KeyPad_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AKeyPad, AKeyPad::StaticClass, TEXT("AKeyPad"), &Z_Registration_Info_UClass_AKeyPad, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKeyPad), 2984529507U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_KeyPad_h_2553328786(TEXT("/Script/PersonalProject"),
	Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_KeyPad_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_KeyPad_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
