// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PersonalProject/Tablet_Log.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTablet_Log() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PERSONALPROJECT_API UClass* Z_Construct_UClass_ATablet_Log();
PERSONALPROJECT_API UClass* Z_Construct_UClass_ATablet_Log_NoRegister();
UPackage* Z_Construct_UPackage__Script_PersonalProject();
// End Cross Module References

// Begin Class ATablet_Log
void ATablet_Log::StaticRegisterNativesATablet_Log()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATablet_Log);
UClass* Z_Construct_UClass_ATablet_Log_NoRegister()
{
	return ATablet_Log::StaticClass();
}
struct Z_Construct_UClass_ATablet_Log_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tablet_Log.h" },
		{ "ModuleRelativePath", "Tablet_Log.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATablet_Log>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATablet_Log_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PersonalProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATablet_Log_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATablet_Log_Statics::ClassParams = {
	&ATablet_Log::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATablet_Log_Statics::Class_MetaDataParams), Z_Construct_UClass_ATablet_Log_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATablet_Log()
{
	if (!Z_Registration_Info_UClass_ATablet_Log.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATablet_Log.OuterSingleton, Z_Construct_UClass_ATablet_Log_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATablet_Log.OuterSingleton;
}
template<> PERSONALPROJECT_API UClass* StaticClass<ATablet_Log>()
{
	return ATablet_Log::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATablet_Log);
ATablet_Log::~ATablet_Log() {}
// End Class ATablet_Log

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Tablet_Log_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATablet_Log, ATablet_Log::StaticClass, TEXT("ATablet_Log"), &Z_Registration_Info_UClass_ATablet_Log, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATablet_Log), 199388077U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Tablet_Log_h_3972424014(TEXT("/Script/PersonalProject"),
	Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Tablet_Log_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Tablet_Log_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
