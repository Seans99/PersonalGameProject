// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PersonalProject/PrimarySystems/PrimaryPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrimaryPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
PERSONALPROJECT_API UClass* Z_Construct_UClass_APrimaryPlayerController();
PERSONALPROJECT_API UClass* Z_Construct_UClass_APrimaryPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_PersonalProject();
// End Cross Module References

// Begin Class APrimaryPlayerController
void APrimaryPlayerController::StaticRegisterNativesAPrimaryPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APrimaryPlayerController);
UClass* Z_Construct_UClass_APrimaryPlayerController_NoRegister()
{
	return APrimaryPlayerController::StaticClass();
}
struct Z_Construct_UClass_APrimaryPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PrimarySystems/PrimaryPlayerController.h" },
		{ "ModuleRelativePath", "PrimarySystems/PrimaryPlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrimaryPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APrimaryPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_PersonalProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APrimaryPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APrimaryPlayerController_Statics::ClassParams = {
	&APrimaryPlayerController::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APrimaryPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_APrimaryPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APrimaryPlayerController()
{
	if (!Z_Registration_Info_UClass_APrimaryPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APrimaryPlayerController.OuterSingleton, Z_Construct_UClass_APrimaryPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APrimaryPlayerController.OuterSingleton;
}
template<> PERSONALPROJECT_API UClass* StaticClass<APrimaryPlayerController>()
{
	return APrimaryPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APrimaryPlayerController);
APrimaryPlayerController::~APrimaryPlayerController() {}
// End Class APrimaryPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_PrimarySystems_PrimaryPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APrimaryPlayerController, APrimaryPlayerController::StaticClass, TEXT("APrimaryPlayerController"), &Z_Registration_Info_UClass_APrimaryPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APrimaryPlayerController), 1755319420U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_PrimarySystems_PrimaryPlayerController_h_1626432873(TEXT("/Script/PersonalProject"),
	Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_PrimarySystems_PrimaryPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_PrimarySystems_PrimaryPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
