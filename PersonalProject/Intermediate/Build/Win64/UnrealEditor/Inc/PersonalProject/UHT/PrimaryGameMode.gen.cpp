// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PersonalProject/PrimaryGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrimaryGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PERSONALPROJECT_API UClass* Z_Construct_UClass_APrimaryGameMode();
PERSONALPROJECT_API UClass* Z_Construct_UClass_APrimaryGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_PersonalProject();
// End Cross Module References

// Begin Class APrimaryGameMode
void APrimaryGameMode::StaticRegisterNativesAPrimaryGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APrimaryGameMode);
UClass* Z_Construct_UClass_APrimaryGameMode_NoRegister()
{
	return APrimaryGameMode::StaticClass();
}
struct Z_Construct_UClass_APrimaryGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PrimaryGameMode.h" },
		{ "ModuleRelativePath", "PrimaryGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrimaryGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APrimaryGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PersonalProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APrimaryGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APrimaryGameMode_Statics::ClassParams = {
	&APrimaryGameMode::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APrimaryGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APrimaryGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APrimaryGameMode()
{
	if (!Z_Registration_Info_UClass_APrimaryGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APrimaryGameMode.OuterSingleton, Z_Construct_UClass_APrimaryGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APrimaryGameMode.OuterSingleton;
}
template<> PERSONALPROJECT_API UClass* StaticClass<APrimaryGameMode>()
{
	return APrimaryGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APrimaryGameMode);
APrimaryGameMode::~APrimaryGameMode() {}
// End Class APrimaryGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_PrimaryGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APrimaryGameMode, APrimaryGameMode::StaticClass, TEXT("APrimaryGameMode"), &Z_Registration_Info_UClass_APrimaryGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APrimaryGameMode), 1550421048U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_PrimaryGameMode_h_181667348(TEXT("/Script/PersonalProject"),
	Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_PrimaryGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_PrimaryGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
