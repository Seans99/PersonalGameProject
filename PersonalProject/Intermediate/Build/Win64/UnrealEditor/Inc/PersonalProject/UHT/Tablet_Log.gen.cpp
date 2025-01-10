// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PersonalProject/Actors/Tablet_Log.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTablet_Log() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
PERSONALPROJECT_API UClass* Z_Construct_UClass_ATablet_Log();
PERSONALPROJECT_API UClass* Z_Construct_UClass_ATablet_Log_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
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
		{ "IncludePath", "Actors/Tablet_Log.h" },
		{ "ModuleRelativePath", "Actors/Tablet_Log.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogMesh_MetaData[] = {
		{ "Category", "Tablet_Log" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Tablet_Log.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointLight_MetaData[] = {
		{ "Category", "Tablet_Log" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Tablet_Log.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyPrompt_MetaData[] = {
		{ "Category", "Tablet_Log" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Tablet_Log.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LogMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PointLight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyPrompt;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATablet_Log>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATablet_Log_Statics::NewProp_LogMesh = { "LogMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATablet_Log, LogMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogMesh_MetaData), NewProp_LogMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATablet_Log_Statics::NewProp_PointLight = { "PointLight", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATablet_Log, PointLight), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointLight_MetaData), NewProp_PointLight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATablet_Log_Statics::NewProp_KeyPrompt = { "KeyPrompt", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATablet_Log, KeyPrompt), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyPrompt_MetaData), NewProp_KeyPrompt_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATablet_Log_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATablet_Log_Statics::NewProp_LogMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATablet_Log_Statics::NewProp_PointLight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATablet_Log_Statics::NewProp_KeyPrompt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATablet_Log_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_ATablet_Log_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATablet_Log_Statics::PropPointers),
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
struct Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_Tablet_Log_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATablet_Log, ATablet_Log::StaticClass, TEXT("ATablet_Log"), &Z_Registration_Info_UClass_ATablet_Log, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATablet_Log), 1146230377U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_Tablet_Log_h_2721084507(TEXT("/Script/PersonalProject"),
	Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_Tablet_Log_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_Tablet_Log_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
