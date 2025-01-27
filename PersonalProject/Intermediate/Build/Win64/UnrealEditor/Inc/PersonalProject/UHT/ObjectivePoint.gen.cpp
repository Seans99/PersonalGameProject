// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PersonalProject/Actors/ObjectivePoint.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectivePoint() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
PERSONALPROJECT_API UClass* Z_Construct_UClass_AObjectivePoint();
PERSONALPROJECT_API UClass* Z_Construct_UClass_AObjectivePoint_NoRegister();
PERSONALPROJECT_API UClass* Z_Construct_UClass_UObjectiveUI_NoRegister();
UPackage* Z_Construct_UPackage__Script_PersonalProject();
// End Cross Module References

// Begin Class AObjectivePoint Function HideObjectiveWidget
struct Z_Construct_UFunction_AObjectivePoint_HideObjectiveWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/ObjectivePoint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AObjectivePoint_HideObjectiveWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObjectivePoint, nullptr, "HideObjectiveWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectivePoint_HideObjectiveWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AObjectivePoint_HideObjectiveWidget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AObjectivePoint_HideObjectiveWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AObjectivePoint_HideObjectiveWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AObjectivePoint::execHideObjectiveWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HideObjectiveWidget();
	P_NATIVE_END;
}
// End Class AObjectivePoint Function HideObjectiveWidget

// Begin Class AObjectivePoint Function OnBoxBeginOverlap
struct Z_Construct_UFunction_AObjectivePoint_OnBoxBeginOverlap_Statics
{
	struct ObjectivePoint_eventOnBoxBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/ObjectivePoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AObjectivePoint_OnBoxBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ObjectivePoint_eventOnBoxBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AObjectivePoint_OnBoxBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ObjectivePoint_eventOnBoxBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AObjectivePoint_OnBoxBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ObjectivePoint_eventOnBoxBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AObjectivePoint_OnBoxBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ObjectivePoint_eventOnBoxBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AObjectivePoint_OnBoxBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((ObjectivePoint_eventOnBoxBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AObjectivePoint_OnBoxBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ObjectivePoint_eventOnBoxBeginOverlap_Parms), &Z_Construct_UFunction_AObjectivePoint_OnBoxBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AObjectivePoint_OnBoxBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ObjectivePoint_eventOnBoxBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AObjectivePoint_OnBoxBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjectivePoint_OnBoxBeginOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjectivePoint_OnBoxBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjectivePoint_OnBoxBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjectivePoint_OnBoxBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjectivePoint_OnBoxBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjectivePoint_OnBoxBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectivePoint_OnBoxBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AObjectivePoint_OnBoxBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObjectivePoint, nullptr, "OnBoxBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AObjectivePoint_OnBoxBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectivePoint_OnBoxBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AObjectivePoint_OnBoxBeginOverlap_Statics::ObjectivePoint_eventOnBoxBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectivePoint_OnBoxBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AObjectivePoint_OnBoxBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AObjectivePoint_OnBoxBeginOverlap_Statics::ObjectivePoint_eventOnBoxBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AObjectivePoint_OnBoxBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AObjectivePoint_OnBoxBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AObjectivePoint::execOnBoxBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBoxBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AObjectivePoint Function OnBoxBeginOverlap

// Begin Class AObjectivePoint Function ShowCurrentObjective
struct Z_Construct_UFunction_AObjectivePoint_ShowCurrentObjective_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/ObjectivePoint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AObjectivePoint_ShowCurrentObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObjectivePoint, nullptr, "ShowCurrentObjective", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectivePoint_ShowCurrentObjective_Statics::Function_MetaDataParams), Z_Construct_UFunction_AObjectivePoint_ShowCurrentObjective_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AObjectivePoint_ShowCurrentObjective()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AObjectivePoint_ShowCurrentObjective_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AObjectivePoint::execShowCurrentObjective)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowCurrentObjective();
	P_NATIVE_END;
}
// End Class AObjectivePoint Function ShowCurrentObjective

// Begin Class AObjectivePoint
void AObjectivePoint::StaticRegisterNativesAObjectivePoint()
{
	UClass* Class = AObjectivePoint::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HideObjectiveWidget", &AObjectivePoint::execHideObjectiveWidget },
		{ "OnBoxBeginOverlap", &AObjectivePoint::execOnBoxBeginOverlap },
		{ "ShowCurrentObjective", &AObjectivePoint::execShowCurrentObjective },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AObjectivePoint);
UClass* Z_Construct_UClass_AObjectivePoint_NoRegister()
{
	return AObjectivePoint::StaticClass();
}
struct Z_Construct_UClass_AObjectivePoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/ObjectivePoint.h" },
		{ "ModuleRelativePath", "Actors/ObjectivePoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[] = {
		{ "Category", "ObjectivePoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/ObjectivePoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectiveID_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Actors/ObjectivePoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectiveWidgetClass_MetaData[] = {
		{ "Category", "ObjectivePoint" },
		{ "ModuleRelativePath", "Actors/ObjectivePoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectiveWidget_MetaData[] = {
		{ "Category", "ObjectivePoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/ObjectivePoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectiveTitle_MetaData[] = {
		{ "Category", "ObjectivePoint" },
		{ "ModuleRelativePath", "Actors/ObjectivePoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectiveDesc_MetaData[] = {
		{ "Category", "ObjectivePoint" },
		{ "ModuleRelativePath", "Actors/ObjectivePoint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ObjectiveID;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ObjectiveWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectiveWidget;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ObjectiveTitle;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ObjectiveDesc;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AObjectivePoint_HideObjectiveWidget, "HideObjectiveWidget" }, // 3974746753
		{ &Z_Construct_UFunction_AObjectivePoint_OnBoxBeginOverlap, "OnBoxBeginOverlap" }, // 3574834164
		{ &Z_Construct_UFunction_AObjectivePoint_ShowCurrentObjective, "ShowCurrentObjective" }, // 813758607
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObjectivePoint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObjectivePoint_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AObjectivePoint, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxComponent_MetaData), NewProp_BoxComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AObjectivePoint_Statics::NewProp_ObjectiveID = { "ObjectiveID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AObjectivePoint, ObjectiveID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectiveID_MetaData), NewProp_ObjectiveID_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AObjectivePoint_Statics::NewProp_ObjectiveWidgetClass = { "ObjectiveWidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AObjectivePoint, ObjectiveWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObjectiveUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectiveWidgetClass_MetaData), NewProp_ObjectiveWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObjectivePoint_Statics::NewProp_ObjectiveWidget = { "ObjectiveWidget", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AObjectivePoint, ObjectiveWidget), Z_Construct_UClass_UObjectiveUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectiveWidget_MetaData), NewProp_ObjectiveWidget_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_AObjectivePoint_Statics::NewProp_ObjectiveTitle = { "ObjectiveTitle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AObjectivePoint, ObjectiveTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectiveTitle_MetaData), NewProp_ObjectiveTitle_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_AObjectivePoint_Statics::NewProp_ObjectiveDesc = { "ObjectiveDesc", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AObjectivePoint, ObjectiveDesc), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectiveDesc_MetaData), NewProp_ObjectiveDesc_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObjectivePoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectivePoint_Statics::NewProp_BoxComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectivePoint_Statics::NewProp_ObjectiveID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectivePoint_Statics::NewProp_ObjectiveWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectivePoint_Statics::NewProp_ObjectiveWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectivePoint_Statics::NewProp_ObjectiveTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectivePoint_Statics::NewProp_ObjectiveDesc,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AObjectivePoint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AObjectivePoint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PersonalProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AObjectivePoint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AObjectivePoint_Statics::ClassParams = {
	&AObjectivePoint::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AObjectivePoint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AObjectivePoint_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AObjectivePoint_Statics::Class_MetaDataParams), Z_Construct_UClass_AObjectivePoint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AObjectivePoint()
{
	if (!Z_Registration_Info_UClass_AObjectivePoint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AObjectivePoint.OuterSingleton, Z_Construct_UClass_AObjectivePoint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AObjectivePoint.OuterSingleton;
}
template<> PERSONALPROJECT_API UClass* StaticClass<AObjectivePoint>()
{
	return AObjectivePoint::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AObjectivePoint);
AObjectivePoint::~AObjectivePoint() {}
// End Class AObjectivePoint

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_ObjectivePoint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AObjectivePoint, AObjectivePoint::StaticClass, TEXT("AObjectivePoint"), &Z_Registration_Info_UClass_AObjectivePoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AObjectivePoint), 2091542533U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_ObjectivePoint_h_2719619129(TEXT("/Script/PersonalProject"),
	Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_ObjectivePoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_ObjectivePoint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
