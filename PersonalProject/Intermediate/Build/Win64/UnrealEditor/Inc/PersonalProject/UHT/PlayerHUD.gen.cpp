// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PersonalProject/UI/PlayerHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerHUD() {}

// Begin Cross Module References
PERSONALPROJECT_API UClass* Z_Construct_UClass_UGUIBase();
PERSONALPROJECT_API UClass* Z_Construct_UClass_UPlayerHUD();
PERSONALPROJECT_API UClass* Z_Construct_UClass_UPlayerHUD_NoRegister();
UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UPackage* Z_Construct_UPackage__Script_PersonalProject();
// End Cross Module References

// Begin Class UPlayerHUD Function HealthChange
struct Z_Construct_UFunction_UPlayerHUD_HealthChange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/PlayerHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerHUD_HealthChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerHUD, nullptr, "HealthChange", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUD_HealthChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerHUD_HealthChange_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayerHUD_HealthChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerHUD_HealthChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerHUD::execHealthChange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HealthChange();
	P_NATIVE_END;
}
// End Class UPlayerHUD Function HealthChange

// Begin Class UPlayerHUD Function SetDirection
struct Z_Construct_UFunction_UPlayerHUD_SetDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/PlayerHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerHUD_SetDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerHUD, nullptr, "SetDirection", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUD_SetDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerHUD_SetDirection_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayerHUD_SetDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerHUD_SetDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerHUD::execSetDirection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDirection();
	P_NATIVE_END;
}
// End Class UPlayerHUD Function SetDirection

// Begin Class UPlayerHUD Function StaminaChange
struct Z_Construct_UFunction_UPlayerHUD_StaminaChange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/PlayerHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerHUD_StaminaChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerHUD, nullptr, "StaminaChange", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUD_StaminaChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerHUD_StaminaChange_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayerHUD_StaminaChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerHUD_StaminaChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerHUD::execStaminaChange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StaminaChange();
	P_NATIVE_END;
}
// End Class UPlayerHUD Function StaminaChange

// Begin Class UPlayerHUD
void UPlayerHUD::StaticRegisterNativesUPlayerHUD()
{
	UClass* Class = UPlayerHUD::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HealthChange", &UPlayerHUD::execHealthChange },
		{ "SetDirection", &UPlayerHUD::execSetDirection },
		{ "StaminaChange", &UPlayerHUD::execStaminaChange },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerHUD);
UClass* Z_Construct_UClass_UPlayerHUD_NoRegister()
{
	return UPlayerHUD::StaticClass();
}
struct Z_Construct_UClass_UPlayerHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/PlayerHUD.h" },
		{ "ModuleRelativePath", "UI/PlayerHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompassPanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompassPoints_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaminaBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CompassPanel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CompassPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerHUD_HealthChange, "HealthChange" }, // 2235311365
		{ &Z_Construct_UFunction_UPlayerHUD_SetDirection, "SetDirection" }, // 1969087099
		{ &Z_Construct_UFunction_UPlayerHUD_StaminaChange, "StaminaChange" }, // 318233500
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerHUD_Statics::NewProp_HealthBar = { "HealthBar", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerHUD, HealthBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBar_MetaData), NewProp_HealthBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerHUD_Statics::NewProp_StaminaBar = { "StaminaBar", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerHUD, StaminaBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaBar_MetaData), NewProp_StaminaBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerHUD_Statics::NewProp_CompassPanel = { "CompassPanel", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerHUD, CompassPanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompassPanel_MetaData), NewProp_CompassPanel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerHUD_Statics::NewProp_CompassPoints = { "CompassPoints", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerHUD, CompassPoints), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompassPoints_MetaData), NewProp_CompassPoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHUD_Statics::NewProp_HealthBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHUD_Statics::NewProp_StaminaBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHUD_Statics::NewProp_CompassPanel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHUD_Statics::NewProp_CompassPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGUIBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PersonalProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerHUD_Statics::ClassParams = {
	&UPlayerHUD::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlayerHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUD_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerHUD()
{
	if (!Z_Registration_Info_UClass_UPlayerHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerHUD.OuterSingleton, Z_Construct_UClass_UPlayerHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerHUD.OuterSingleton;
}
template<> PERSONALPROJECT_API UClass* StaticClass<UPlayerHUD>()
{
	return UPlayerHUD::StaticClass();
}
UPlayerHUD::UPlayerHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerHUD);
UPlayerHUD::~UPlayerHUD() {}
// End Class UPlayerHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_PlayerHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerHUD, UPlayerHUD::StaticClass, TEXT("UPlayerHUD"), &Z_Registration_Info_UClass_UPlayerHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerHUD), 1352057227U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_PlayerHUD_h_3676080440(TEXT("/Script/PersonalProject"),
	Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_PlayerHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sean9_Documents_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_PlayerHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
