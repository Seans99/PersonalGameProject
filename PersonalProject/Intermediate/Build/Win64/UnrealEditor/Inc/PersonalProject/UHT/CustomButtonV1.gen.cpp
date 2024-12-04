// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PersonalProject/UI/CustomButtonV1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomButtonV1() {}

// Begin Cross Module References
PERSONALPROJECT_API UClass* Z_Construct_UClass_UCustomButtonV1();
PERSONALPROJECT_API UClass* Z_Construct_UClass_UCustomButtonV1_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_PersonalProject();
// End Cross Module References

// Begin Class UCustomButtonV1
void UCustomButtonV1::StaticRegisterNativesUCustomButtonV1()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomButtonV1);
UClass* Z_Construct_UClass_UCustomButtonV1_NoRegister()
{
	return UCustomButtonV1::StaticClass();
}
struct Z_Construct_UClass_UCustomButtonV1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/CustomButtonV1.h" },
		{ "ModuleRelativePath", "UI/CustomButtonV1.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomButtonV1>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCustomButtonV1_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_PersonalProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomButtonV1_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomButtonV1_Statics::ClassParams = {
	&UCustomButtonV1::StaticClass,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomButtonV1_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomButtonV1_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCustomButtonV1()
{
	if (!Z_Registration_Info_UClass_UCustomButtonV1.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomButtonV1.OuterSingleton, Z_Construct_UClass_UCustomButtonV1_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomButtonV1.OuterSingleton;
}
template<> PERSONALPROJECT_API UClass* StaticClass<UCustomButtonV1>()
{
	return UCustomButtonV1::StaticClass();
}
UCustomButtonV1::UCustomButtonV1(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomButtonV1);
UCustomButtonV1::~UCustomButtonV1() {}
// End Class UCustomButtonV1

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_CustomButtonV1_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomButtonV1, UCustomButtonV1::StaticClass, TEXT("UCustomButtonV1"), &Z_Registration_Info_UClass_UCustomButtonV1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomButtonV1), 3352011406U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_CustomButtonV1_h_2173274957(TEXT("/Script/PersonalProject"),
	Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_CustomButtonV1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_CustomButtonV1_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
