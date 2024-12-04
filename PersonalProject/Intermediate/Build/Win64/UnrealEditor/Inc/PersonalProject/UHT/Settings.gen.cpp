// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PersonalProject/UI/Settings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettings() {}

// Begin Cross Module References
PERSONALPROJECT_API UClass* Z_Construct_UClass_UGUIBase();
PERSONALPROJECT_API UClass* Z_Construct_UClass_USettings();
PERSONALPROJECT_API UClass* Z_Construct_UClass_USettings_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_PersonalProject();
// End Cross Module References

// Begin Class USettings Function Apply
struct Z_Construct_UFunction_USettings_Apply_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettings_Apply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettings, nullptr, "Apply", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettings_Apply_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettings_Apply_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USettings_Apply()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettings_Apply_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettings::execApply)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Apply();
	P_NATIVE_END;
}
// End Class USettings Function Apply

// Begin Class USettings Function Back
struct Z_Construct_UFunction_USettings_Back_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettings_Back_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettings, nullptr, "Back", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettings_Back_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettings_Back_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USettings_Back()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettings_Back_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettings::execBack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Back();
	P_NATIVE_END;
}
// End Class USettings Function Back

// Begin Class USettings Function ShowDisplaySettings
struct Z_Construct_UFunction_USettings_ShowDisplaySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettings_ShowDisplaySettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettings, nullptr, "ShowDisplaySettings", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettings_ShowDisplaySettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettings_ShowDisplaySettings_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USettings_ShowDisplaySettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettings_ShowDisplaySettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettings::execShowDisplaySettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowDisplaySettings();
	P_NATIVE_END;
}
// End Class USettings Function ShowDisplaySettings

// Begin Class USettings
void USettings::StaticRegisterNativesUSettings()
{
	UClass* Class = USettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Apply", &USettings::execApply },
		{ "Back", &USettings::execBack },
		{ "ShowDisplaySettings", &USettings::execShowDisplaySettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USettings);
UClass* Z_Construct_UClass_USettings_NoRegister()
{
	return USettings::StaticClass();
}
struct Z_Construct_UClass_USettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Settings.h" },
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundImg_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlsBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccessibilityBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CloseBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplyBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplaySettings_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Settings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackgroundImg;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DisplayBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlsBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AccessibilityBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CloseBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ApplyBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DisplaySettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USettings_Apply, "Apply" }, // 487313601
		{ &Z_Construct_UFunction_USettings_Back, "Back" }, // 1190003293
		{ &Z_Construct_UFunction_USettings_ShowDisplaySettings, "ShowDisplaySettings" }, // 2872304857
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettings_Statics::NewProp_BackgroundImg = { "BackgroundImg", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettings, BackgroundImg), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundImg_MetaData), NewProp_BackgroundImg_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettings_Statics::NewProp_DisplayBtn = { "DisplayBtn", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettings, DisplayBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayBtn_MetaData), NewProp_DisplayBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettings_Statics::NewProp_AudioBtn = { "AudioBtn", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettings, AudioBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioBtn_MetaData), NewProp_AudioBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettings_Statics::NewProp_ControlsBtn = { "ControlsBtn", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettings, ControlsBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlsBtn_MetaData), NewProp_ControlsBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettings_Statics::NewProp_AccessibilityBtn = { "AccessibilityBtn", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettings, AccessibilityBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccessibilityBtn_MetaData), NewProp_AccessibilityBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettings_Statics::NewProp_BackBtn = { "BackBtn", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettings, BackBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackBtn_MetaData), NewProp_BackBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettings_Statics::NewProp_CloseBtn = { "CloseBtn", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettings, CloseBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CloseBtn_MetaData), NewProp_CloseBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettings_Statics::NewProp_ApplyBtn = { "ApplyBtn", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettings, ApplyBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplyBtn_MetaData), NewProp_ApplyBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettings_Statics::NewProp_DisplaySettings = { "DisplaySettings", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettings, DisplaySettings), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplaySettings_MetaData), NewProp_DisplaySettings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettings_Statics::NewProp_BackgroundImg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettings_Statics::NewProp_DisplayBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettings_Statics::NewProp_AudioBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettings_Statics::NewProp_ControlsBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettings_Statics::NewProp_AccessibilityBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettings_Statics::NewProp_BackBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettings_Statics::NewProp_CloseBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettings_Statics::NewProp_ApplyBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettings_Statics::NewProp_DisplaySettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGUIBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PersonalProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USettings_Statics::ClassParams = {
	&USettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USettings_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USettings_Statics::Class_MetaDataParams), Z_Construct_UClass_USettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USettings()
{
	if (!Z_Registration_Info_UClass_USettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USettings.OuterSingleton, Z_Construct_UClass_USettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USettings.OuterSingleton;
}
template<> PERSONALPROJECT_API UClass* StaticClass<USettings>()
{
	return USettings::StaticClass();
}
USettings::USettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USettings);
USettings::~USettings() {}
// End Class USettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_Settings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USettings, USettings::StaticClass, TEXT("USettings"), &Z_Registration_Info_UClass_USettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USettings), 2144696081U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_Settings_h_1539383873(TEXT("/Script/PersonalProject"),
	Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_Settings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_Settings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
