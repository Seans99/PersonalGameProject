// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PersonalProject/UI/KeyPrompt.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeyPrompt() {}

// Begin Cross Module References
PERSONALPROJECT_API UClass* Z_Construct_UClass_UGUIBase();
PERSONALPROJECT_API UClass* Z_Construct_UClass_UKeyPrompt();
PERSONALPROJECT_API UClass* Z_Construct_UClass_UKeyPrompt_NoRegister();
UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_PersonalProject();
// End Cross Module References

// Begin Class UKeyPrompt
void UKeyPrompt::StaticRegisterNativesUKeyPrompt()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKeyPrompt);
UClass* Z_Construct_UClass_UKeyPrompt_NoRegister()
{
	return UKeyPrompt::StaticClass();
}
struct Z_Construct_UClass_UKeyPrompt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/KeyPrompt.h" },
		{ "ModuleRelativePath", "UI/KeyPrompt.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractKey_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "KeyPrompt" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/KeyPrompt.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKeyPrompt>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKeyPrompt_Statics::NewProp_InteractKey = { "InteractKey", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKeyPrompt, InteractKey), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractKey_MetaData), NewProp_InteractKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKeyPrompt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKeyPrompt_Statics::NewProp_InteractKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKeyPrompt_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UKeyPrompt_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGUIBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PersonalProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKeyPrompt_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKeyPrompt_Statics::ClassParams = {
	&UKeyPrompt::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UKeyPrompt_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UKeyPrompt_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKeyPrompt_Statics::Class_MetaDataParams), Z_Construct_UClass_UKeyPrompt_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKeyPrompt()
{
	if (!Z_Registration_Info_UClass_UKeyPrompt.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKeyPrompt.OuterSingleton, Z_Construct_UClass_UKeyPrompt_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKeyPrompt.OuterSingleton;
}
template<> PERSONALPROJECT_API UClass* StaticClass<UKeyPrompt>()
{
	return UKeyPrompt::StaticClass();
}
UKeyPrompt::UKeyPrompt(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKeyPrompt);
UKeyPrompt::~UKeyPrompt() {}
// End Class UKeyPrompt

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_KeyPrompt_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKeyPrompt, UKeyPrompt::StaticClass, TEXT("UKeyPrompt"), &Z_Registration_Info_UClass_UKeyPrompt, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKeyPrompt), 3357662031U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_KeyPrompt_h_3319672411(TEXT("/Script/PersonalProject"),
	Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_KeyPrompt_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_KeyPrompt_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
