// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTFPS/Controller/FPSAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSAIController() {}
// Cross Module References
	BTFPS_API UScriptStruct* Z_Construct_UScriptStruct_FAITargetInfo();
	UPackage* Z_Construct_UPackage__Script_BTFPS();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	BTFPS_API UClass* Z_Construct_UClass_AAIFPSController_NoRegister();
	BTFPS_API UClass* Z_Construct_UClass_AAIFPSController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	BTFPS_API UFunction* Z_Construct_UFunction_AAIFPSController_GetAllTargets();
	BTFPS_API UFunction* Z_Construct_UFunction_AAIFPSController_GetAllVisibleTargets();
	BTFPS_API UFunction* Z_Construct_UFunction_AAIFPSController_GetTargetWithHighestAggro();
	BTFPS_API UFunction* Z_Construct_UFunction_AAIFPSController_OnActorPerceptionUpdated();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
// End Cross Module References
class UScriptStruct* FAITargetInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BTFPS_API uint32 Get_Z_Construct_UScriptStruct_FAITargetInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAITargetInfo, Z_Construct_UPackage__Script_BTFPS(), TEXT("AITargetInfo"), sizeof(FAITargetInfo), Get_Z_Construct_UScriptStruct_FAITargetInfo_Hash());
	}
	return Singleton;
}
template<> BTFPS_API UScriptStruct* StaticStruct<FAITargetInfo>()
{
	return FAITargetInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAITargetInfo(FAITargetInfo::StaticStruct, TEXT("/Script/BTFPS"), TEXT("AITargetInfo"), false, nullptr, nullptr);
static struct FScriptStruct_BTFPS_StaticRegisterNativesFAITargetInfo
{
	FScriptStruct_BTFPS_StaticRegisterNativesFAITargetInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AITargetInfo")),new UScriptStruct::TCppStructOps<FAITargetInfo>);
	}
} ScriptStruct_BTFPS_StaticRegisterNativesFAITargetInfo;
	struct Z_Construct_UScriptStruct_FAITargetInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[];
#endif
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Aggro_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Aggro;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAITargetInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Controller/FPSAIController.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAITargetInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAITargetInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAITargetInfo_Statics::NewProp_bVisible_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Controller/FPSAIController.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAITargetInfo_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((FAITargetInfo*)Obj)->bVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAITargetInfo_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAITargetInfo), &Z_Construct_UScriptStruct_FAITargetInfo_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAITargetInfo_Statics::NewProp_bVisible_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAITargetInfo_Statics::NewProp_bVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAITargetInfo_Statics::NewProp_Aggro_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Controller/FPSAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAITargetInfo_Statics::NewProp_Aggro = { "Aggro", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAITargetInfo, Aggro), METADATA_PARAMS(Z_Construct_UScriptStruct_FAITargetInfo_Statics::NewProp_Aggro_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAITargetInfo_Statics::NewProp_Aggro_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAITargetInfo_Statics::NewProp_TargetActor_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Controller/FPSAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAITargetInfo_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAITargetInfo, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAITargetInfo_Statics::NewProp_TargetActor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAITargetInfo_Statics::NewProp_TargetActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAITargetInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITargetInfo_Statics::NewProp_bVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITargetInfo_Statics::NewProp_Aggro,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITargetInfo_Statics::NewProp_TargetActor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAITargetInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BTFPS,
		nullptr,
		&NewStructOps,
		"AITargetInfo",
		sizeof(FAITargetInfo),
		alignof(FAITargetInfo),
		Z_Construct_UScriptStruct_FAITargetInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAITargetInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAITargetInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAITargetInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAITargetInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAITargetInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BTFPS();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AITargetInfo"), sizeof(FAITargetInfo), Get_Z_Construct_UScriptStruct_FAITargetInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAITargetInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAITargetInfo_Hash() { return 360287607U; }
	void AAIFPSController::StaticRegisterNativesAAIFPSController()
	{
		UClass* Class = AAIFPSController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllTargets", &AAIFPSController::execGetAllTargets },
			{ "GetAllVisibleTargets", &AAIFPSController::execGetAllVisibleTargets },
			{ "GetTargetWithHighestAggro", &AAIFPSController::execGetTargetWithHighestAggro },
			{ "OnActorPerceptionUpdated", &AAIFPSController::execOnActorPerceptionUpdated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAIFPSController_GetAllTargets_Statics
	{
		struct AIFPSController_eventGetAllTargets_Parms
		{
			TArray<FAITargetInfo> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIFPSController_GetAllTargets_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAIFPSController_GetAllTargets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIFPSController_eventGetAllTargets_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_AAIFPSController_GetAllTargets_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AAIFPSController_GetAllTargets_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAIFPSController_GetAllTargets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAITargetInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIFPSController_GetAllTargets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIFPSController_GetAllTargets_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIFPSController_GetAllTargets_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIFPSController_GetAllTargets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Controller/FPSAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIFPSController_GetAllTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIFPSController, nullptr, "GetAllTargets", nullptr, nullptr, sizeof(AIFPSController_eventGetAllTargets_Parms), Z_Construct_UFunction_AAIFPSController_GetAllTargets_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAIFPSController_GetAllTargets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIFPSController_GetAllTargets_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAIFPSController_GetAllTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIFPSController_GetAllTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIFPSController_GetAllTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIFPSController_GetAllVisibleTargets_Statics
	{
		struct AIFPSController_eventGetAllVisibleTargets_Parms
		{
			TArray<FAITargetInfo> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAIFPSController_GetAllVisibleTargets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIFPSController_eventGetAllVisibleTargets_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAIFPSController_GetAllVisibleTargets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAITargetInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIFPSController_GetAllVisibleTargets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIFPSController_GetAllVisibleTargets_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIFPSController_GetAllVisibleTargets_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIFPSController_GetAllVisibleTargets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Controller/FPSAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIFPSController_GetAllVisibleTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIFPSController, nullptr, "GetAllVisibleTargets", nullptr, nullptr, sizeof(AIFPSController_eventGetAllVisibleTargets_Parms), Z_Construct_UFunction_AAIFPSController_GetAllVisibleTargets_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAIFPSController_GetAllVisibleTargets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIFPSController_GetAllVisibleTargets_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAIFPSController_GetAllVisibleTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIFPSController_GetAllVisibleTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIFPSController_GetAllVisibleTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIFPSController_GetTargetWithHighestAggro_Statics
	{
		struct AIFPSController_eventGetTargetWithHighestAggro_Parms
		{
			FAITargetInfo OutTargetInfo;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutTargetInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAIFPSController_GetTargetWithHighestAggro_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AIFPSController_eventGetTargetWithHighestAggro_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAIFPSController_GetTargetWithHighestAggro_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AIFPSController_eventGetTargetWithHighestAggro_Parms), &Z_Construct_UFunction_AAIFPSController_GetTargetWithHighestAggro_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAIFPSController_GetTargetWithHighestAggro_Statics::NewProp_OutTargetInfo = { "OutTargetInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIFPSController_eventGetTargetWithHighestAggro_Parms, OutTargetInfo), Z_Construct_UScriptStruct_FAITargetInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIFPSController_GetTargetWithHighestAggro_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIFPSController_GetTargetWithHighestAggro_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIFPSController_GetTargetWithHighestAggro_Statics::NewProp_OutTargetInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIFPSController_GetTargetWithHighestAggro_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Controller/FPSAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIFPSController_GetTargetWithHighestAggro_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIFPSController, nullptr, "GetTargetWithHighestAggro", nullptr, nullptr, sizeof(AIFPSController_eventGetTargetWithHighestAggro_Parms), Z_Construct_UFunction_AAIFPSController_GetTargetWithHighestAggro_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAIFPSController_GetTargetWithHighestAggro_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIFPSController_GetTargetWithHighestAggro_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAIFPSController_GetTargetWithHighestAggro_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIFPSController_GetTargetWithHighestAggro()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIFPSController_GetTargetWithHighestAggro_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIFPSController_OnActorPerceptionUpdated_Statics
	{
		struct AIFPSController_eventOnActorPerceptionUpdated_Parms
		{
			AActor* Actor;
			FAIStimulus Stimulus;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stimulus;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAIFPSController_OnActorPerceptionUpdated_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIFPSController_eventOnActorPerceptionUpdated_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIFPSController_OnActorPerceptionUpdated_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIFPSController_eventOnActorPerceptionUpdated_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIFPSController_OnActorPerceptionUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIFPSController_OnActorPerceptionUpdated_Statics::NewProp_Stimulus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIFPSController_OnActorPerceptionUpdated_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIFPSController_OnActorPerceptionUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Controller/FPSAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIFPSController_OnActorPerceptionUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIFPSController, nullptr, "OnActorPerceptionUpdated", nullptr, nullptr, sizeof(AIFPSController_eventOnActorPerceptionUpdated_Parms), Z_Construct_UFunction_AAIFPSController_OnActorPerceptionUpdated_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAIFPSController_OnActorPerceptionUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIFPSController_OnActorPerceptionUpdated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAIFPSController_OnActorPerceptionUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIFPSController_OnActorPerceptionUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIFPSController_OnActorPerceptionUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAIFPSController_NoRegister()
	{
		return AAIFPSController::StaticClass();
	}
	struct Z_Construct_UClass_AAIFPSController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIFPSController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_BTFPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAIFPSController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAIFPSController_GetAllTargets, "GetAllTargets" }, // 2025438530
		{ &Z_Construct_UFunction_AAIFPSController_GetAllVisibleTargets, "GetAllVisibleTargets" }, // 4174969962
		{ &Z_Construct_UFunction_AAIFPSController_GetTargetWithHighestAggro, "GetTargetWithHighestAggro" }, // 3888953
		{ &Z_Construct_UFunction_AAIFPSController_OnActorPerceptionUpdated, "OnActorPerceptionUpdated" }, // 620361489
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIFPSController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Controller/FPSAIController.h" },
		{ "ModuleRelativePath", "Controller/FPSAIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIFPSController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIFPSController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAIFPSController_Statics::ClassParams = {
		&AAIFPSController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAIFPSController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAIFPSController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAIFPSController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAIFPSController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAIFPSController, 2415871539);
	template<> BTFPS_API UClass* StaticClass<AAIFPSController>()
	{
		return AAIFPSController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAIFPSController(Z_Construct_UClass_AAIFPSController, &AAIFPSController::StaticClass, TEXT("/Script/BTFPS"), TEXT("AAIFPSController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIFPSController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
