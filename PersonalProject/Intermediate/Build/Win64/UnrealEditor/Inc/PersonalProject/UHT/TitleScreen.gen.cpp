// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PersonalProject/UI/TitleScreen.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTitleScreen() {}

// Begin Cross Module References
PERSONALPROJECT_API UClass* Z_Construct_UClass_UGUIBase();
PERSONALPROJECT_API UClass* Z_Construct_UClass_UTitleScreen();
PERSONALPROJECT_API UClass* Z_Construct_UClass_UTitleScreen_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_PersonalProject();
// End Cross Module References

// Begin Class UTitleScreen
void UTitleScreen::StaticRegisterNativesUTitleScreen()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTitleScreen);
UClass* Z_Construct_UClass_UTitleScreen_NoRegister()
{
	return UTitleScreen::StaticClass();
}
struct Z_Construct_UClass_UTitleScreen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/TitleScreen.h" },
		{ "ModuleRelativePath", "UI/TitleScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartGameBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TitleScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/TitleScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuButtonsBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TitleScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/TitleScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayGameBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TitleScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/TitleScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettingsBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TitleScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/TitleScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuitGameBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TitleScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/TitleScreen.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartGameBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MenuButtonsBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayGameBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SettingsBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuitGameBtn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTitleScreen>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTitleScreen_Statics::NewProp_StartGameBtn = { "StartGameBtn", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTitleScreen, StartGameBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartGameBtn_MetaData), NewProp_StartGameBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTitleScreen_Statics::NewProp_MenuButtonsBox = { "MenuButtonsBox", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTitleScreen, MenuButtonsBox), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuButtonsBox_MetaData), NewProp_MenuButtonsBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTitleScreen_Statics::NewProp_PlayGameBtn = { "PlayGameBtn", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTitleScreen, PlayGameBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayGameBtn_MetaData), NewProp_PlayGameBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTitleScreen_Statics::NewProp_SettingsBtn = { "SettingsBtn", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTitleScreen, SettingsBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettingsBtn_MetaData), NewProp_SettingsBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTitleScreen_Statics::NewProp_QuitGameBtn = { "QuitGameBtn", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTitleScreen, QuitGameBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuitGameBtn_MetaData), NewProp_QuitGameBtn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTitleScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitleScreen_Statics::NewProp_StartGameBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitleScreen_Statics::NewProp_MenuButtonsBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitleScreen_Statics::NewProp_PlayGameBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitleScreen_Statics::NewProp_SettingsBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitleScreen_Statics::NewProp_QuitGameBtn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTitleScreen_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTitleScreen_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGUIBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PersonalProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTitleScreen_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTitleScreen_Statics::ClassParams = {
	&UTitleScreen::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTitleScreen_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTitleScreen_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTitleScreen_Statics::Class_MetaDataParams), Z_Construct_UClass_UTitleScreen_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTitleScreen()
{
	if (!Z_Registration_Info_UClass_UTitleScreen.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTitleScreen.OuterSingleton, Z_Construct_UClass_UTitleScreen_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTitleScreen.OuterSingleton;
}
template<> PERSONALPROJECT_API UClass* StaticClass<UTitleScreen>()
{
	return UTitleScreen::StaticClass();
}
UTitleScreen::UTitleScreen(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTitleScreen);
UTitleScreen::~UTitleScreen() {}
// End Class UTitleScreen

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_TitleScreen_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTitleScreen, UTitleScreen::StaticClass, TEXT("UTitleScreen"), &Z_Registration_Info_UClass_UTitleScreen, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTitleScreen), 2612604455U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_TitleScreen_h_3296013529(TEXT("/Script/PersonalProject"),
	Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_TitleScreen_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_TitleScreen_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
