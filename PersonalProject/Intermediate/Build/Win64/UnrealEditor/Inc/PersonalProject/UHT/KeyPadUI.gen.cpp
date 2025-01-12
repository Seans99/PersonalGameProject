// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PersonalProject/UI/KeyPadUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeyPadUI() {}

// Begin Cross Module References
PERSONALPROJECT_API UClass* Z_Construct_UClass_UGUIBase();
PERSONALPROJECT_API UClass* Z_Construct_UClass_UKeyPadUI();
PERSONALPROJECT_API UClass* Z_Construct_UClass_UKeyPadUI_NoRegister();
UPackage* Z_Construct_UPackage__Script_PersonalProject();
// End Cross Module References

// Begin Class UKeyPadUI
void UKeyPadUI::StaticRegisterNativesUKeyPadUI()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKeyPadUI);
UClass* Z_Construct_UClass_UKeyPadUI_NoRegister()
{
	return UKeyPadUI::StaticClass();
}
struct Z_Construct_UClass_UKeyPadUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/KeyPadUI.h" },
		{ "ModuleRelativePath", "UI/KeyPadUI.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKeyPadUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UKeyPadUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGUIBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PersonalProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKeyPadUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKeyPadUI_Statics::ClassParams = {
	&UKeyPadUI::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKeyPadUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UKeyPadUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKeyPadUI()
{
	if (!Z_Registration_Info_UClass_UKeyPadUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKeyPadUI.OuterSingleton, Z_Construct_UClass_UKeyPadUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKeyPadUI.OuterSingleton;
}
template<> PERSONALPROJECT_API UClass* StaticClass<UKeyPadUI>()
{
	return UKeyPadUI::StaticClass();
}
UKeyPadUI::UKeyPadUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKeyPadUI);
UKeyPadUI::~UKeyPadUI() {}
// End Class UKeyPadUI

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_KeyPadUI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKeyPadUI, UKeyPadUI::StaticClass, TEXT("UKeyPadUI"), &Z_Registration_Info_UClass_UKeyPadUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKeyPadUI), 482257927U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_KeyPadUI_h_3061225750(TEXT("/Script/PersonalProject"),
	Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_KeyPadUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_KeyPadUI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
