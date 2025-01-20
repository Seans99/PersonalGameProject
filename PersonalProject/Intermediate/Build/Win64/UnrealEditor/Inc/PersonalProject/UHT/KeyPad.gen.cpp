// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PersonalProject/Actors/KeyPad.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeyPad() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
PERSONALPROJECT_API UClass* Z_Construct_UClass_AKeyPad();
PERSONALPROJECT_API UClass* Z_Construct_UClass_AKeyPad_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_PersonalProject();
// End Cross Module References

// Begin Class AKeyPad Function ChangeViewTarget
struct Z_Construct_UFunction_AKeyPad_ChangeViewTarget_Statics
{
	struct KeyPad_eventChangeViewTarget_Parms
	{
		float DeltaTime;
		AActor* Target;
		bool CanChangeViewFlag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/KeyPad.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static void NewProp_CanChangeViewFlag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanChangeViewFlag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AKeyPad_ChangeViewTarget_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KeyPad_eventChangeViewTarget_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKeyPad_ChangeViewTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KeyPad_eventChangeViewTarget_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AKeyPad_ChangeViewTarget_Statics::NewProp_CanChangeViewFlag_SetBit(void* Obj)
{
	((KeyPad_eventChangeViewTarget_Parms*)Obj)->CanChangeViewFlag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AKeyPad_ChangeViewTarget_Statics::NewProp_CanChangeViewFlag = { "CanChangeViewFlag", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KeyPad_eventChangeViewTarget_Parms), &Z_Construct_UFunction_AKeyPad_ChangeViewTarget_Statics::NewProp_CanChangeViewFlag_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKeyPad_ChangeViewTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKeyPad_ChangeViewTarget_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKeyPad_ChangeViewTarget_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKeyPad_ChangeViewTarget_Statics::NewProp_CanChangeViewFlag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AKeyPad_ChangeViewTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKeyPad_ChangeViewTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKeyPad, nullptr, "ChangeViewTarget", nullptr, nullptr, Z_Construct_UFunction_AKeyPad_ChangeViewTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKeyPad_ChangeViewTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_AKeyPad_ChangeViewTarget_Statics::KeyPad_eventChangeViewTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AKeyPad_ChangeViewTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AKeyPad_ChangeViewTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AKeyPad_ChangeViewTarget_Statics::KeyPad_eventChangeViewTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AKeyPad_ChangeViewTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKeyPad_ChangeViewTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AKeyPad::execChangeViewTarget)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_UBOOL_REF(Z_Param_Out_CanChangeViewFlag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeViewTarget(Z_Param_DeltaTime,Z_Param_Target,Z_Param_Out_CanChangeViewFlag);
	P_NATIVE_END;
}
// End Class AKeyPad Function ChangeViewTarget

// Begin Class AKeyPad Function HandleKeyPadInteract
struct Z_Construct_UFunction_AKeyPad_HandleKeyPadInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/KeyPad.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKeyPad_HandleKeyPadInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKeyPad, nullptr, "HandleKeyPadInteract", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AKeyPad_HandleKeyPadInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_AKeyPad_HandleKeyPadInteract_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AKeyPad_HandleKeyPadInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKeyPad_HandleKeyPadInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AKeyPad::execHandleKeyPadInteract)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleKeyPadInteract();
	P_NATIVE_END;
}
// End Class AKeyPad Function HandleKeyPadInteract

// Begin Class AKeyPad Function HandleStopViewKeyPad
struct Z_Construct_UFunction_AKeyPad_HandleStopViewKeyPad_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/KeyPad.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKeyPad_HandleStopViewKeyPad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKeyPad, nullptr, "HandleStopViewKeyPad", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AKeyPad_HandleStopViewKeyPad_Statics::Function_MetaDataParams), Z_Construct_UFunction_AKeyPad_HandleStopViewKeyPad_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AKeyPad_HandleStopViewKeyPad()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKeyPad_HandleStopViewKeyPad_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AKeyPad::execHandleStopViewKeyPad)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleStopViewKeyPad();
	P_NATIVE_END;
}
// End Class AKeyPad Function HandleStopViewKeyPad

// Begin Class AKeyPad Function OnBoxBeginOverlap
struct Z_Construct_UFunction_AKeyPad_OnBoxBeginOverlap_Statics
{
	struct KeyPad_eventOnBoxBeginOverlap_Parms
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
		{ "ModuleRelativePath", "Actors/KeyPad.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKeyPad_OnBoxBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KeyPad_eventOnBoxBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKeyPad_OnBoxBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KeyPad_eventOnBoxBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKeyPad_OnBoxBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KeyPad_eventOnBoxBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AKeyPad_OnBoxBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KeyPad_eventOnBoxBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AKeyPad_OnBoxBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((KeyPad_eventOnBoxBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AKeyPad_OnBoxBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KeyPad_eventOnBoxBeginOverlap_Parms), &Z_Construct_UFunction_AKeyPad_OnBoxBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AKeyPad_OnBoxBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KeyPad_eventOnBoxBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKeyPad_OnBoxBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKeyPad_OnBoxBeginOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKeyPad_OnBoxBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKeyPad_OnBoxBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKeyPad_OnBoxBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKeyPad_OnBoxBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKeyPad_OnBoxBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AKeyPad_OnBoxBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKeyPad_OnBoxBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKeyPad, nullptr, "OnBoxBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AKeyPad_OnBoxBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKeyPad_OnBoxBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AKeyPad_OnBoxBeginOverlap_Statics::KeyPad_eventOnBoxBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AKeyPad_OnBoxBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AKeyPad_OnBoxBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AKeyPad_OnBoxBeginOverlap_Statics::KeyPad_eventOnBoxBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AKeyPad_OnBoxBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKeyPad_OnBoxBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AKeyPad::execOnBoxBeginOverlap)
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
// End Class AKeyPad Function OnBoxBeginOverlap

// Begin Class AKeyPad Function OnBoxEndOverlap
struct Z_Construct_UFunction_AKeyPad_OnBoxEndOverlap_Statics
{
	struct KeyPad_eventOnBoxEndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/KeyPad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKeyPad_OnBoxEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KeyPad_eventOnBoxEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKeyPad_OnBoxEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KeyPad_eventOnBoxEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKeyPad_OnBoxEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KeyPad_eventOnBoxEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AKeyPad_OnBoxEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KeyPad_eventOnBoxEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKeyPad_OnBoxEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKeyPad_OnBoxEndOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKeyPad_OnBoxEndOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKeyPad_OnBoxEndOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKeyPad_OnBoxEndOverlap_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AKeyPad_OnBoxEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKeyPad_OnBoxEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKeyPad, nullptr, "OnBoxEndOverlap", nullptr, nullptr, Z_Construct_UFunction_AKeyPad_OnBoxEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKeyPad_OnBoxEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AKeyPad_OnBoxEndOverlap_Statics::KeyPad_eventOnBoxEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AKeyPad_OnBoxEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AKeyPad_OnBoxEndOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AKeyPad_OnBoxEndOverlap_Statics::KeyPad_eventOnBoxEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AKeyPad_OnBoxEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKeyPad_OnBoxEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AKeyPad::execOnBoxEndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBoxEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class AKeyPad Function OnBoxEndOverlap

// Begin Class AKeyPad
void AKeyPad::StaticRegisterNativesAKeyPad()
{
	UClass* Class = AKeyPad::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeViewTarget", &AKeyPad::execChangeViewTarget },
		{ "HandleKeyPadInteract", &AKeyPad::execHandleKeyPadInteract },
		{ "HandleStopViewKeyPad", &AKeyPad::execHandleStopViewKeyPad },
		{ "OnBoxBeginOverlap", &AKeyPad::execOnBoxBeginOverlap },
		{ "OnBoxEndOverlap", &AKeyPad::execOnBoxEndOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AKeyPad);
UClass* Z_Construct_UClass_AKeyPad_NoRegister()
{
	return AKeyPad::StaticClass();
}
struct Z_Construct_UClass_AKeyPad_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/KeyPad.h" },
		{ "ModuleRelativePath", "Actors/KeyPad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyPadMesh_MetaData[] = {
		{ "Category", "KeyPad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/KeyPad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[] = {
		{ "Category", "KeyPad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/KeyPad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyPadUI_MetaData[] = {
		{ "Category", "KeyPad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/KeyPad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyPrompt_MetaData[] = {
		{ "Category", "KeyPad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/KeyPad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "KeyPad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/KeyPad.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyPadMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyPadUI;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyPrompt;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AKeyPad_ChangeViewTarget, "ChangeViewTarget" }, // 15070142
		{ &Z_Construct_UFunction_AKeyPad_HandleKeyPadInteract, "HandleKeyPadInteract" }, // 1262555696
		{ &Z_Construct_UFunction_AKeyPad_HandleStopViewKeyPad, "HandleStopViewKeyPad" }, // 2433583011
		{ &Z_Construct_UFunction_AKeyPad_OnBoxBeginOverlap, "OnBoxBeginOverlap" }, // 1597217661
		{ &Z_Construct_UFunction_AKeyPad_OnBoxEndOverlap, "OnBoxEndOverlap" }, // 1769272897
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKeyPad>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKeyPad_Statics::NewProp_KeyPadMesh = { "KeyPadMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKeyPad, KeyPadMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyPadMesh_MetaData), NewProp_KeyPadMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKeyPad_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKeyPad, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxComponent_MetaData), NewProp_BoxComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKeyPad_Statics::NewProp_KeyPadUI = { "KeyPadUI", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKeyPad, KeyPadUI), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyPadUI_MetaData), NewProp_KeyPadUI_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKeyPad_Statics::NewProp_KeyPrompt = { "KeyPrompt", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKeyPad, KeyPrompt), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyPrompt_MetaData), NewProp_KeyPrompt_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKeyPad_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKeyPad, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKeyPad_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyPad_Statics::NewProp_KeyPadMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyPad_Statics::NewProp_BoxComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyPad_Statics::NewProp_KeyPadUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyPad_Statics::NewProp_KeyPrompt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyPad_Statics::NewProp_Camera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKeyPad_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AKeyPad_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PersonalProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKeyPad_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AKeyPad_Statics::ClassParams = {
	&AKeyPad::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AKeyPad_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AKeyPad_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKeyPad_Statics::Class_MetaDataParams), Z_Construct_UClass_AKeyPad_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AKeyPad()
{
	if (!Z_Registration_Info_UClass_AKeyPad.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKeyPad.OuterSingleton, Z_Construct_UClass_AKeyPad_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AKeyPad.OuterSingleton;
}
template<> PERSONALPROJECT_API UClass* StaticClass<AKeyPad>()
{
	return AKeyPad::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AKeyPad);
AKeyPad::~AKeyPad() {}
// End Class AKeyPad

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_KeyPad_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AKeyPad, AKeyPad::StaticClass, TEXT("AKeyPad"), &Z_Registration_Info_UClass_AKeyPad, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKeyPad), 1127928745U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_KeyPad_h_2117350276(TEXT("/Script/PersonalProject"),
	Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_KeyPad_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sean_schelvis_GitHub_PersonalGameProject_PersonalProject_Source_PersonalProject_Actors_KeyPad_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
