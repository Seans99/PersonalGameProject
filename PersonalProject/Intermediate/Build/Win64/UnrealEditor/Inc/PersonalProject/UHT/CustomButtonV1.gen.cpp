// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PersonalProject/UI/UIComponents/CustomButtonV1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomButtonV1() {}

// Begin Cross Module References
PERSONALPROJECT_API UClass* Z_Construct_UClass_UCustomButtonV1();
PERSONALPROJECT_API UClass* Z_Construct_UClass_UCustomButtonV1_NoRegister();
PERSONALPROJECT_API UFunction* Z_Construct_UDelegateFunction_PersonalProject_OnButtonClicked__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_PersonalProject();
// End Cross Module References

// Begin Delegate FOnButtonClicked
struct Z_Construct_UDelegateFunction_PersonalProject_OnButtonClicked__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/UIComponents/CustomButtonV1.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PersonalProject_OnButtonClicked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PersonalProject, nullptr, "OnButtonClicked__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PersonalProject_OnButtonClicked__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PersonalProject_OnButtonClicked__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_PersonalProject_OnButtonClicked__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PersonalProject_OnButtonClicked__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnButtonClicked_DelegateWrapper(const FMulticastScriptDelegate& OnButtonClicked)
{
	OnButtonClicked.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnButtonClicked

// Begin Class UCustomButtonV1 Function BroadcastOnClicked
struct Z_Construct_UFunction_UCustomButtonV1_BroadcastOnClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/UIComponents/CustomButtonV1.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomButtonV1_BroadcastOnClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomButtonV1, nullptr, "BroadcastOnClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomButtonV1_BroadcastOnClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomButtonV1_BroadcastOnClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCustomButtonV1_BroadcastOnClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomButtonV1_BroadcastOnClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomButtonV1::execBroadcastOnClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BroadcastOnClicked();
	P_NATIVE_END;
}
// End Class UCustomButtonV1 Function BroadcastOnClicked

// Begin Class UCustomButtonV1 Function HoverEffect
struct Z_Construct_UFunction_UCustomButtonV1_HoverEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/UIComponents/CustomButtonV1.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomButtonV1_HoverEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomButtonV1, nullptr, "HoverEffect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomButtonV1_HoverEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomButtonV1_HoverEffect_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCustomButtonV1_HoverEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomButtonV1_HoverEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomButtonV1::execHoverEffect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HoverEffect();
	P_NATIVE_END;
}
// End Class UCustomButtonV1 Function HoverEffect

// Begin Class UCustomButtonV1 Function IsActiveButton
struct Z_Construct_UFunction_UCustomButtonV1_IsActiveButton_Statics
{
	struct CustomButtonV1_eventIsActiveButton_Parms
	{
		bool state;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/UIComponents/CustomButtonV1.h" },
	};
#endif // WITH_METADATA
	static void NewProp_state_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_state;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCustomButtonV1_IsActiveButton_Statics::NewProp_state_SetBit(void* Obj)
{
	((CustomButtonV1_eventIsActiveButton_Parms*)Obj)->state = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomButtonV1_IsActiveButton_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CustomButtonV1_eventIsActiveButton_Parms), &Z_Construct_UFunction_UCustomButtonV1_IsActiveButton_Statics::NewProp_state_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomButtonV1_IsActiveButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomButtonV1_IsActiveButton_Statics::NewProp_state,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomButtonV1_IsActiveButton_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomButtonV1_IsActiveButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomButtonV1, nullptr, "IsActiveButton", nullptr, nullptr, Z_Construct_UFunction_UCustomButtonV1_IsActiveButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomButtonV1_IsActiveButton_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomButtonV1_IsActiveButton_Statics::CustomButtonV1_eventIsActiveButton_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomButtonV1_IsActiveButton_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomButtonV1_IsActiveButton_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCustomButtonV1_IsActiveButton_Statics::CustomButtonV1_eventIsActiveButton_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomButtonV1_IsActiveButton()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomButtonV1_IsActiveButton_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomButtonV1::execIsActiveButton)
{
	P_GET_UBOOL(Z_Param_state);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IsActiveButton(Z_Param_state);
	P_NATIVE_END;
}
// End Class UCustomButtonV1 Function IsActiveButton

// Begin Class UCustomButtonV1 Function SetButtonText
struct Z_Construct_UFunction_UCustomButtonV1_SetButtonText_Statics
{
	struct CustomButtonV1_eventSetButtonText_Parms
	{
		FString Text;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/UIComponents/CustomButtonV1.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomButtonV1_SetButtonText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomButtonV1_eventSetButtonText_Parms, Text), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomButtonV1_SetButtonText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomButtonV1_SetButtonText_Statics::NewProp_Text,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomButtonV1_SetButtonText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomButtonV1_SetButtonText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomButtonV1, nullptr, "SetButtonText", nullptr, nullptr, Z_Construct_UFunction_UCustomButtonV1_SetButtonText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomButtonV1_SetButtonText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomButtonV1_SetButtonText_Statics::CustomButtonV1_eventSetButtonText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomButtonV1_SetButtonText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomButtonV1_SetButtonText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCustomButtonV1_SetButtonText_Statics::CustomButtonV1_eventSetButtonText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomButtonV1_SetButtonText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomButtonV1_SetButtonText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomButtonV1::execSetButtonText)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Text);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetButtonText(Z_Param_Text);
	P_NATIVE_END;
}
// End Class UCustomButtonV1 Function SetButtonText

// Begin Class UCustomButtonV1 Function UnHoverEffect
struct Z_Construct_UFunction_UCustomButtonV1_UnHoverEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/UIComponents/CustomButtonV1.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomButtonV1_UnHoverEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomButtonV1, nullptr, "UnHoverEffect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomButtonV1_UnHoverEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomButtonV1_UnHoverEffect_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCustomButtonV1_UnHoverEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomButtonV1_UnHoverEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomButtonV1::execUnHoverEffect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnHoverEffect();
	P_NATIVE_END;
}
// End Class UCustomButtonV1 Function UnHoverEffect

// Begin Class UCustomButtonV1
void UCustomButtonV1::StaticRegisterNativesUCustomButtonV1()
{
	UClass* Class = UCustomButtonV1::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BroadcastOnClicked", &UCustomButtonV1::execBroadcastOnClicked },
		{ "HoverEffect", &UCustomButtonV1::execHoverEffect },
		{ "IsActiveButton", &UCustomButtonV1::execIsActiveButton },
		{ "SetButtonText", &UCustomButtonV1::execSetButtonText },
		{ "UnHoverEffect", &UCustomButtonV1::execUnHoverEffect },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		{ "IncludePath", "UI/UIComponents/CustomButtonV1.h" },
		{ "ModuleRelativePath", "UI/UIComponents/CustomButtonV1.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CustomButtonV1" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/UIComponents/CustomButtonV1.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CustomButtonV1" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/UIComponents/CustomButtonV1.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnClicked_MetaData[] = {
		{ "ModuleRelativePath", "UI/UIComponents/CustomButtonV1.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewButtonText_MetaData[] = {
		{ "Category", "CustomButtonV1" },
		{ "ModuleRelativePath", "UI/UIComponents/CustomButtonV1.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonText;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClicked;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewButtonText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomButtonV1_BroadcastOnClicked, "BroadcastOnClicked" }, // 2007440075
		{ &Z_Construct_UFunction_UCustomButtonV1_HoverEffect, "HoverEffect" }, // 2854146560
		{ &Z_Construct_UFunction_UCustomButtonV1_IsActiveButton, "IsActiveButton" }, // 3890871414
		{ &Z_Construct_UFunction_UCustomButtonV1_SetButtonText, "SetButtonText" }, // 329403991
		{ &Z_Construct_UFunction_UCustomButtonV1_UnHoverEffect, "UnHoverEffect" }, // 953233569
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomButtonV1>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomButtonV1_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomButtonV1, Button), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_MetaData), NewProp_Button_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomButtonV1_Statics::NewProp_ButtonText = { "ButtonText", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomButtonV1, ButtonText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonText_MetaData), NewProp_ButtonText_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCustomButtonV1_Statics::NewProp_OnClicked = { "OnClicked", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomButtonV1, OnClicked), Z_Construct_UDelegateFunction_PersonalProject_OnButtonClicked__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnClicked_MetaData), NewProp_OnClicked_MetaData) }; // 1812648910
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomButtonV1_Statics::NewProp_NewButtonText = { "NewButtonText", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomButtonV1, NewButtonText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewButtonText_MetaData), NewProp_NewButtonText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomButtonV1_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomButtonV1_Statics::NewProp_Button,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomButtonV1_Statics::NewProp_ButtonText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomButtonV1_Statics::NewProp_OnClicked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomButtonV1_Statics::NewProp_NewButtonText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomButtonV1_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_UCustomButtonV1_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCustomButtonV1_Statics::PropPointers),
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
struct Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_UIComponents_CustomButtonV1_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomButtonV1, UCustomButtonV1::StaticClass, TEXT("UCustomButtonV1"), &Z_Registration_Info_UClass_UCustomButtonV1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomButtonV1), 3227398528U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_UIComponents_CustomButtonV1_h_4282112922(TEXT("/Script/PersonalProject"),
	Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_UIComponents_CustomButtonV1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_UI_UIComponents_CustomButtonV1_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
