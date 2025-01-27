// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PersonalProject/UI/ObjectiveUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectiveUI() {}

// Begin Cross Module References
PERSONALPROJECT_API UClass* Z_Construct_UClass_UGUIBase();
PERSONALPROJECT_API UClass* Z_Construct_UClass_UObjectiveUI();
PERSONALPROJECT_API UClass* Z_Construct_UClass_UObjectiveUI_NoRegister();
UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UPackage* Z_Construct_UPackage__Script_PersonalProject();
// End Cross Module References

// Begin Class UObjectiveUI
void UObjectiveUI::StaticRegisterNativesUObjectiveUI()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectiveUI);
UClass* Z_Construct_UClass_UObjectiveUI_NoRegister()
{
	return UObjectiveUI::StaticClass();
}
struct Z_Construct_UClass_UObjectiveUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/ObjectiveUI.h" },
		{ "ModuleRelativePath", "UI/ObjectiveUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectivePanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ObjectiveUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/ObjectiveUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectiveTitle_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ObjectiveUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/ObjectiveUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectiveDesc_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ObjectiveUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/ObjectiveUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectivePanel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectiveTitle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectiveDesc;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectiveUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectiveUI_Statics::NewProp_ObjectivePanel = { "ObjectivePanel", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectiveUI, ObjectivePanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectivePanel_MetaData), NewProp_ObjectivePanel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectiveUI_Statics::NewProp_ObjectiveTitle = { "ObjectiveTitle", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectiveUI, ObjectiveTitle), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectiveTitle_MetaData), NewProp_ObjectiveTitle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectiveUI_Statics::NewProp_ObjectiveDesc = { "ObjectiveDesc", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectiveUI, ObjectiveDesc), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectiveDesc_MetaData), NewProp_ObjectiveDesc_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectiveUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectiveUI_Statics::NewProp_ObjectivePanel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectiveUI_Statics::NewProp_ObjectiveTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectiveUI_Statics::NewProp_ObjectiveDesc,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectiveUI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UObjectiveUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGUIBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PersonalProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectiveUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectiveUI_Statics::ClassParams = {
	&UObjectiveUI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UObjectiveUI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UObjectiveUI_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectiveUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UObjectiveUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UObjectiveUI()
{
	if (!Z_Registration_Info_UClass_UObjectiveUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectiveUI.OuterSingleton, Z_Construct_UClass_UObjectiveUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UObjectiveUI.OuterSingleton;
}
template<> PERSONALPROJECT_API UClass* StaticClass<UObjectiveUI>()
{
	return UObjectiveUI::StaticClass();
}
UObjectiveUI::UObjectiveUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectiveUI);
UObjectiveUI::~UObjectiveUI() {}
// End Class UObjectiveUI

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_ObjectiveUI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UObjectiveUI, UObjectiveUI::StaticClass, TEXT("UObjectiveUI"), &Z_Registration_Info_UClass_UObjectiveUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectiveUI), 2209473882U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_ObjectiveUI_h_2991607085(TEXT("/Script/PersonalProject"),
	Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_ObjectiveUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_ObjectiveUI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
