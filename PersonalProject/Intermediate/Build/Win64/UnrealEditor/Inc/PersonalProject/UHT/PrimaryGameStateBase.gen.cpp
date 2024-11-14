// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PersonalProject/PrimarySystems/PrimaryGameStateBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrimaryGameStateBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
PERSONALPROJECT_API UClass* Z_Construct_UClass_APrimaryGameStateBase();
PERSONALPROJECT_API UClass* Z_Construct_UClass_APrimaryGameStateBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_PersonalProject();
// End Cross Module References

// Begin Class APrimaryGameStateBase
void APrimaryGameStateBase::StaticRegisterNativesAPrimaryGameStateBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APrimaryGameStateBase);
UClass* Z_Construct_UClass_APrimaryGameStateBase_NoRegister()
{
	return APrimaryGameStateBase::StaticClass();
}
struct Z_Construct_UClass_APrimaryGameStateBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PrimarySystems/PrimaryGameStateBase.h" },
		{ "ModuleRelativePath", "PrimarySystems/PrimaryGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrimaryGameStateBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APrimaryGameStateBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PersonalProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APrimaryGameStateBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APrimaryGameStateBase_Statics::ClassParams = {
	&APrimaryGameStateBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APrimaryGameStateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_APrimaryGameStateBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APrimaryGameStateBase()
{
	if (!Z_Registration_Info_UClass_APrimaryGameStateBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APrimaryGameStateBase.OuterSingleton, Z_Construct_UClass_APrimaryGameStateBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APrimaryGameStateBase.OuterSingleton;
}
template<> PERSONALPROJECT_API UClass* StaticClass<APrimaryGameStateBase>()
{
	return APrimaryGameStateBase::StaticClass();
}
APrimaryGameStateBase::APrimaryGameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(APrimaryGameStateBase);
APrimaryGameStateBase::~APrimaryGameStateBase() {}
// End Class APrimaryGameStateBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_PrimarySystems_PrimaryGameStateBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APrimaryGameStateBase, APrimaryGameStateBase::StaticClass, TEXT("APrimaryGameStateBase"), &Z_Registration_Info_UClass_APrimaryGameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APrimaryGameStateBase), 3729097158U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_PrimarySystems_PrimaryGameStateBase_h_2672180546(TEXT("/Script/PersonalProject"),
	Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_PrimarySystems_PrimaryGameStateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_PrimarySystems_PrimaryGameStateBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
