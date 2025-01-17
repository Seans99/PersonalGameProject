// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PersonalProject/PrimarySystems/PrimaryPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrimaryPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
PERSONALPROJECT_API UClass* Z_Construct_UClass_APrimaryPlayerController();
PERSONALPROJECT_API UClass* Z_Construct_UClass_APrimaryPlayerController_NoRegister();
PERSONALPROJECT_API UFunction* Z_Construct_UDelegateFunction_PersonalProject_ViewingInteractSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_PersonalProject();
// End Cross Module References

// Begin Delegate FViewingInteractSignature
struct Z_Construct_UDelegateFunction_PersonalProject_ViewingInteractSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PrimarySystems/PrimaryPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PersonalProject_ViewingInteractSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PersonalProject, nullptr, "ViewingInteractSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PersonalProject_ViewingInteractSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PersonalProject_ViewingInteractSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_PersonalProject_ViewingInteractSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PersonalProject_ViewingInteractSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FViewingInteractSignature_DelegateWrapper(const FMulticastScriptDelegate& ViewingInteractSignature)
{
	ViewingInteractSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FViewingInteractSignature

// Begin Class APrimaryPlayerController
void APrimaryPlayerController::StaticRegisterNativesAPrimaryPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APrimaryPlayerController);
UClass* Z_Construct_UClass_APrimaryPlayerController_NoRegister()
{
	return APrimaryPlayerController::StaticClass();
}
struct Z_Construct_UClass_APrimaryPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PrimarySystems/PrimaryPlayerController.h" },
		{ "ModuleRelativePath", "PrimarySystems/PrimaryPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStopViewInteractable_MetaData[] = {
		{ "ModuleRelativePath", "PrimarySystems/PrimaryPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStopViewInteractable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrimaryPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APrimaryPlayerController_Statics::NewProp_OnStopViewInteractable = { "OnStopViewInteractable", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APrimaryPlayerController, OnStopViewInteractable), Z_Construct_UDelegateFunction_PersonalProject_ViewingInteractSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStopViewInteractable_MetaData), NewProp_OnStopViewInteractable_MetaData) }; // 4209297569
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APrimaryPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrimaryPlayerController_Statics::NewProp_OnStopViewInteractable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APrimaryPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APrimaryPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_PersonalProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APrimaryPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APrimaryPlayerController_Statics::ClassParams = {
	&APrimaryPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APrimaryPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APrimaryPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APrimaryPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_APrimaryPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APrimaryPlayerController()
{
	if (!Z_Registration_Info_UClass_APrimaryPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APrimaryPlayerController.OuterSingleton, Z_Construct_UClass_APrimaryPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APrimaryPlayerController.OuterSingleton;
}
template<> PERSONALPROJECT_API UClass* StaticClass<APrimaryPlayerController>()
{
	return APrimaryPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APrimaryPlayerController);
APrimaryPlayerController::~APrimaryPlayerController() {}
// End Class APrimaryPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_PrimarySystems_PrimaryPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APrimaryPlayerController, APrimaryPlayerController::StaticClass, TEXT("APrimaryPlayerController"), &Z_Registration_Info_UClass_APrimaryPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APrimaryPlayerController), 2025967496U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_PrimarySystems_PrimaryPlayerController_h_2208935633(TEXT("/Script/PersonalProject"),
	Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_PrimarySystems_PrimaryPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_PrimarySystems_PrimaryPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
