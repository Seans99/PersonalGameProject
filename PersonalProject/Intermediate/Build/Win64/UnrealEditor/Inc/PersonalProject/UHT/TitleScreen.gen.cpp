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
PERSONALPROJECT_API UClass* Z_Construct_UClass_UCustomButtonV1_NoRegister();
PERSONALPROJECT_API UClass* Z_Construct_UClass_UGUIBase();
PERSONALPROJECT_API UClass* Z_Construct_UClass_UTitleScreen();
PERSONALPROJECT_API UClass* Z_Construct_UClass_UTitleScreen_NoRegister();
UPackage* Z_Construct_UPackage__Script_PersonalProject();
// End Cross Module References

// Begin Class UTitleScreen Function StartGame
struct Z_Construct_UFunction_UTitleScreen_StartGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/TitleScreen.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTitleScreen_StartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTitleScreen, nullptr, "StartGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTitleScreen_StartGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTitleScreen_StartGame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTitleScreen_StartGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTitleScreen_StartGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTitleScreen::execStartGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartGame();
	P_NATIVE_END;
}
// End Class UTitleScreen Function StartGame

// Begin Class UTitleScreen
void UTitleScreen::StaticRegisterNativesUTitleScreen()
{
	UClass* Class = UTitleScreen::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "StartGame", &UTitleScreen::execStartGame },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartGameButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TitleScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/TitleScreen.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartGameButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTitleScreen_StartGame, "StartGame" }, // 1870956023
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTitleScreen>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTitleScreen_Statics::NewProp_StartGameButton = { "StartGameButton", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTitleScreen, StartGameButton), Z_Construct_UClass_UCustomButtonV1_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartGameButton_MetaData), NewProp_StartGameButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTitleScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitleScreen_Statics::NewProp_StartGameButton,
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
	FuncInfo,
	Z_Construct_UClass_UTitleScreen_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
struct Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_TitleScreen_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTitleScreen, UTitleScreen::StaticClass, TEXT("UTitleScreen"), &Z_Registration_Info_UClass_UTitleScreen, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTitleScreen), 279098599U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_TitleScreen_h_2540301393(TEXT("/Script/PersonalProject"),
	Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_TitleScreen_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_TitleScreen_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
