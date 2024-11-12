// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PersonalProject/UI/MainMenuUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuUI() {}

// Begin Cross Module References
PERSONALPROJECT_API UClass* Z_Construct_UClass_UGUIBase();
PERSONALPROJECT_API UClass* Z_Construct_UClass_UMainMenuUI();
PERSONALPROJECT_API UClass* Z_Construct_UClass_UMainMenuUI_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UPackage* Z_Construct_UPackage__Script_PersonalProject();
// End Cross Module References

// Begin Class UMainMenuUI
void UMainMenuUI::StaticRegisterNativesUMainMenuUI()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMainMenuUI);
UClass* Z_Construct_UClass_UMainMenuUI_NoRegister()
{
	return UMainMenuUI::StaticClass();
}
struct Z_Construct_UClass_UMainMenuUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/MainMenuUI.h" },
		{ "ModuleRelativePath", "UI/MainMenuUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainMenuUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MainMenuUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainMenuUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MainMenuUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionsBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainMenuUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MainMenuUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuitBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainMenuUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MainMenuUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionsBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuitBtn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainMenuUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuUI_Statics::NewProp_StartBtn = { "StartBtn", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuUI, StartBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartBtn_MetaData), NewProp_StartBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuUI_Statics::NewProp_PlayBtn = { "PlayBtn", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuUI, PlayBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayBtn_MetaData), NewProp_PlayBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuUI_Statics::NewProp_OptionsBtn = { "OptionsBtn", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuUI, OptionsBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionsBtn_MetaData), NewProp_OptionsBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuUI_Statics::NewProp_QuitBtn = { "QuitBtn", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuUI, QuitBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuitBtn_MetaData), NewProp_QuitBtn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainMenuUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuUI_Statics::NewProp_StartBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuUI_Statics::NewProp_PlayBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuUI_Statics::NewProp_OptionsBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuUI_Statics::NewProp_QuitBtn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuUI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMainMenuUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGUIBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PersonalProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainMenuUI_Statics::ClassParams = {
	&UMainMenuUI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMainMenuUI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuUI_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UMainMenuUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMainMenuUI()
{
	if (!Z_Registration_Info_UClass_UMainMenuUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainMenuUI.OuterSingleton, Z_Construct_UClass_UMainMenuUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMainMenuUI.OuterSingleton;
}
template<> PERSONALPROJECT_API UClass* StaticClass<UMainMenuUI>()
{
	return UMainMenuUI::StaticClass();
}
UMainMenuUI::UMainMenuUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMainMenuUI);
UMainMenuUI::~UMainMenuUI() {}
// End Class UMainMenuUI

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_MainMenuUI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMainMenuUI, UMainMenuUI::StaticClass, TEXT("UMainMenuUI"), &Z_Registration_Info_UClass_UMainMenuUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainMenuUI), 112853898U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_MainMenuUI_h_1527633946(TEXT("/Script/PersonalProject"),
	Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_MainMenuUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_MainMenuUI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
