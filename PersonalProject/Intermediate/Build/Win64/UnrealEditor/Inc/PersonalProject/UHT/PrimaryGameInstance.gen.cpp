// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PersonalProject/PrimarySystems/PrimaryGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrimaryGameInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
PERSONALPROJECT_API UClass* Z_Construct_UClass_UPrimaryGameInstance();
PERSONALPROJECT_API UClass* Z_Construct_UClass_UPrimaryGameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_PersonalProject();
// End Cross Module References

// Begin Class UPrimaryGameInstance
void UPrimaryGameInstance::StaticRegisterNativesUPrimaryGameInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPrimaryGameInstance);
UClass* Z_Construct_UClass_UPrimaryGameInstance_NoRegister()
{
	return UPrimaryGameInstance::StaticClass();
}
struct Z_Construct_UClass_UPrimaryGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PrimarySystems/PrimaryGameInstance.h" },
		{ "ModuleRelativePath", "PrimarySystems/PrimaryGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MasterVolume_MetaData[] = {
		{ "ModuleRelativePath", "PrimarySystems/PrimaryGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MusicVolume_MetaData[] = {
		{ "ModuleRelativePath", "PrimarySystems/PrimaryGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MasterVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MusicVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPrimaryGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPrimaryGameInstance_Statics::NewProp_MasterVolume = { "MasterVolume", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPrimaryGameInstance, MasterVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterVolume_MetaData), NewProp_MasterVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPrimaryGameInstance_Statics::NewProp_MusicVolume = { "MusicVolume", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPrimaryGameInstance, MusicVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MusicVolume_MetaData), NewProp_MusicVolume_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPrimaryGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimaryGameInstance_Statics::NewProp_MasterVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimaryGameInstance_Statics::NewProp_MusicVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPrimaryGameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPrimaryGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_PersonalProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPrimaryGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPrimaryGameInstance_Statics::ClassParams = {
	&UPrimaryGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPrimaryGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPrimaryGameInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPrimaryGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UPrimaryGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPrimaryGameInstance()
{
	if (!Z_Registration_Info_UClass_UPrimaryGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPrimaryGameInstance.OuterSingleton, Z_Construct_UClass_UPrimaryGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPrimaryGameInstance.OuterSingleton;
}
template<> PERSONALPROJECT_API UClass* StaticClass<UPrimaryGameInstance>()
{
	return UPrimaryGameInstance::StaticClass();
}
UPrimaryGameInstance::UPrimaryGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPrimaryGameInstance);
UPrimaryGameInstance::~UPrimaryGameInstance() {}
// End Class UPrimaryGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_PrimarySystems_PrimaryGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPrimaryGameInstance, UPrimaryGameInstance::StaticClass, TEXT("UPrimaryGameInstance"), &Z_Registration_Info_UClass_UPrimaryGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPrimaryGameInstance), 4058714175U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_PrimarySystems_PrimaryGameInstance_h_2571391663(TEXT("/Script/PersonalProject"),
	Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_PrimarySystems_PrimaryGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_PrimarySystems_PrimaryGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
