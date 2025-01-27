// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PersonalProject/PrimarySystems/GameInstances/CodeGenerator.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCodeGenerator() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
PERSONALPROJECT_API UClass* Z_Construct_UClass_UCodeGenerator();
PERSONALPROJECT_API UClass* Z_Construct_UClass_UCodeGenerator_NoRegister();
UPackage* Z_Construct_UPackage__Script_PersonalProject();
// End Cross Module References

// Begin Class UCodeGenerator
void UCodeGenerator::StaticRegisterNativesUCodeGenerator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCodeGenerator);
UClass* Z_Construct_UClass_UCodeGenerator_NoRegister()
{
	return UCodeGenerator::StaticClass();
}
struct Z_Construct_UClass_UCodeGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PrimarySystems/GameInstances/CodeGenerator.h" },
		{ "ModuleRelativePath", "PrimarySystems/GameInstances/CodeGenerator.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCodeGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCodeGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_PersonalProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCodeGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCodeGenerator_Statics::ClassParams = {
	&UCodeGenerator::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCodeGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_UCodeGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCodeGenerator()
{
	if (!Z_Registration_Info_UClass_UCodeGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCodeGenerator.OuterSingleton, Z_Construct_UClass_UCodeGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCodeGenerator.OuterSingleton;
}
template<> PERSONALPROJECT_API UClass* StaticClass<UCodeGenerator>()
{
	return UCodeGenerator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCodeGenerator);
UCodeGenerator::~UCodeGenerator() {}
// End Class UCodeGenerator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_PrimarySystems_GameInstances_CodeGenerator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCodeGenerator, UCodeGenerator::StaticClass, TEXT("UCodeGenerator"), &Z_Registration_Info_UClass_UCodeGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCodeGenerator), 3933214243U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_PrimarySystems_GameInstances_CodeGenerator_h_2679939288(TEXT("/Script/PersonalProject"),
	Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_PrimarySystems_GameInstances_CodeGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_PrimarySystems_GameInstances_CodeGenerator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
