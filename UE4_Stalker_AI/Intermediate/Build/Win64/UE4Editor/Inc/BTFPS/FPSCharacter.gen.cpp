// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTFPS/Character/FPSCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSCharacter() {}
// Cross Module References
	BTFPS_API UClass* Z_Construct_UClass_AFPSCharacter_NoRegister();
	BTFPS_API UClass* Z_Construct_UClass_AFPSCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_BTFPS();
	BTFPS_API UFunction* Z_Construct_UFunction_AFPSCharacter_BP_OnFireWithWeapon();
	BTFPS_API UFunction* Z_Construct_UFunction_AFPSCharacter_BP_OnReloadWeapon();
	BTFPS_API UFunction* Z_Construct_UFunction_AFPSCharacter_EquipNewWeapon();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	BTFPS_API UClass* Z_Construct_UClass_AFPSWeapon_NoRegister();
	BTFPS_API UFunction* Z_Construct_UFunction_AFPSCharacter_GetADS();
	BTFPS_API UFunction* Z_Construct_UFunction_AFPSCharacter_GetCurrentWeapon();
	BTFPS_API UFunction* Z_Construct_UFunction_AFPSCharacter_GetHealth();
	BTFPS_API UFunction* Z_Construct_UFunction_AFPSCharacter_GetMovementSpeedModifier();
	BTFPS_API UFunction* Z_Construct_UFunction_AFPSCharacter_GetTeam();
	BTFPS_API UFunction* Z_Construct_UFunction_AFPSCharacter_GetWeapon();
	BTFPS_API UFunction* Z_Construct_UFunction_AFPSCharacter_Heal();
	BTFPS_API UFunction* Z_Construct_UFunction_AFPSCharacter_IsDead();
	BTFPS_API UFunction* Z_Construct_UFunction_AFPSCharacter_IsRunning();
	BTFPS_API UFunction* Z_Construct_UFunction_AFPSCharacter_Reload();
	BTFPS_API UFunction* Z_Construct_UFunction_AFPSCharacter_TryToAttackWithWeapon();
	BTFPS_API UFunction* Z_Construct_UFunction_AFPSCharacter_WantsToAttack();
	BTFPS_API UClass* Z_Construct_UClass_URecoilComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
// End Cross Module References
	static FName NAME_AFPSCharacter_BP_OnFireWithWeapon = FName(TEXT("BP_OnFireWithWeapon"));
	void AFPSCharacter::BP_OnFireWithWeapon()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacter_BP_OnFireWithWeapon),NULL);
	}
	static FName NAME_AFPSCharacter_BP_OnReloadWeapon = FName(TEXT("BP_OnReloadWeapon"));
	void AFPSCharacter::BP_OnReloadWeapon()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacter_BP_OnReloadWeapon),NULL);
	}
	void AFPSCharacter::StaticRegisterNativesAFPSCharacter()
	{
		UClass* Class = AFPSCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EquipNewWeapon", &AFPSCharacter::execEquipNewWeapon },
			{ "GetADS", &AFPSCharacter::execGetADS },
			{ "GetCurrentWeapon", &AFPSCharacter::execGetCurrentWeapon },
			{ "GetHealth", &AFPSCharacter::execGetHealth },
			{ "GetMovementSpeedModifier", &AFPSCharacter::execGetMovementSpeedModifier },
			{ "GetTeam", &AFPSCharacter::execGetTeam },
			{ "GetWeapon", &AFPSCharacter::execGetWeapon },
			{ "Heal", &AFPSCharacter::execHeal },
			{ "IsDead", &AFPSCharacter::execIsDead },
			{ "IsRunning", &AFPSCharacter::execIsRunning },
			{ "Reload", &AFPSCharacter::execReload },
			{ "TryToAttackWithWeapon", &AFPSCharacter::execTryToAttackWithWeapon },
			{ "WantsToAttack", &AFPSCharacter::execWantsToAttack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSCharacter_BP_OnFireWithWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_BP_OnFireWithWeapon_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "On Fire With Weapon" },
		{ "ModuleRelativePath", "Character/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_BP_OnFireWithWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "BP_OnFireWithWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_BP_OnFireWithWeapon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_BP_OnFireWithWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_BP_OnFireWithWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_BP_OnFireWithWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_BP_OnReloadWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_BP_OnReloadWeapon_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "On Reload Weapon" },
		{ "ModuleRelativePath", "Character/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_BP_OnReloadWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "BP_OnReloadWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_BP_OnReloadWeapon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_BP_OnReloadWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_BP_OnReloadWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_BP_OnReloadWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_EquipNewWeapon_Statics
	{
		struct FPSCharacter_eventEquipNewWeapon_Parms
		{
			TSubclassOf<AFPSWeapon>  NewWeapon;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NewWeapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFPSCharacter_EquipNewWeapon_Statics::NewProp_NewWeapon = { "NewWeapon", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacter_eventEquipNewWeapon_Parms, NewWeapon), Z_Construct_UClass_AFPSWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_EquipNewWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_EquipNewWeapon_Statics::NewProp_NewWeapon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_EquipNewWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_EquipNewWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "EquipNewWeapon", nullptr, nullptr, sizeof(FPSCharacter_eventEquipNewWeapon_Parms), Z_Construct_UFunction_AFPSCharacter_EquipNewWeapon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_EquipNewWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_EquipNewWeapon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_EquipNewWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_EquipNewWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_EquipNewWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_GetADS_Statics
	{
		struct FPSCharacter_eventGetADS_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacter_GetADS_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacter_eventGetADS_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacter_GetADS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacter_eventGetADS_Parms), &Z_Construct_UFunction_AFPSCharacter_GetADS_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_GetADS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_GetADS_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_GetADS_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_GetADS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "GetADS", nullptr, nullptr, sizeof(FPSCharacter_eventGetADS_Parms), Z_Construct_UFunction_AFPSCharacter_GetADS_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetADS_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_GetADS_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetADS_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_GetADS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_GetADS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_GetCurrentWeapon_Statics
	{
		struct FPSCharacter_eventGetCurrentWeapon_Parms
		{
			AFPSWeapon* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacter_GetCurrentWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacter_eventGetCurrentWeapon_Parms, ReturnValue), Z_Construct_UClass_AFPSWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_GetCurrentWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_GetCurrentWeapon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_GetCurrentWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_GetCurrentWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "GetCurrentWeapon", nullptr, nullptr, sizeof(FPSCharacter_eventGetCurrentWeapon_Parms), Z_Construct_UFunction_AFPSCharacter_GetCurrentWeapon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetCurrentWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_GetCurrentWeapon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetCurrentWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_GetCurrentWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_GetCurrentWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_GetHealth_Statics
	{
		struct FPSCharacter_eventGetHealth_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacter_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacter_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_GetHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_GetHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_GetHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "GetHealth", nullptr, nullptr, sizeof(FPSCharacter_eventGetHealth_Parms), Z_Construct_UFunction_AFPSCharacter_GetHealth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_GetHealth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_GetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_GetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_GetMovementSpeedModifier_Statics
	{
		struct FPSCharacter_eventGetMovementSpeedModifier_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacter_GetMovementSpeedModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacter_eventGetMovementSpeedModifier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_GetMovementSpeedModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_GetMovementSpeedModifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_GetMovementSpeedModifier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_GetMovementSpeedModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "GetMovementSpeedModifier", nullptr, nullptr, sizeof(FPSCharacter_eventGetMovementSpeedModifier_Parms), Z_Construct_UFunction_AFPSCharacter_GetMovementSpeedModifier_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetMovementSpeedModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_GetMovementSpeedModifier_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetMovementSpeedModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_GetMovementSpeedModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_GetMovementSpeedModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_GetTeam_Statics
	{
		struct FPSCharacter_eventGetTeam_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSCharacter_GetTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacter_eventGetTeam_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_GetTeam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_GetTeam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_GetTeam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_GetTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "GetTeam", nullptr, nullptr, sizeof(FPSCharacter_eventGetTeam_Parms), Z_Construct_UFunction_AFPSCharacter_GetTeam_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetTeam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_GetTeam_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_GetTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_GetTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_GetWeapon_Statics
	{
		struct FPSCharacter_eventGetWeapon_Parms
		{
			AFPSWeapon* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacter_GetWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacter_eventGetWeapon_Parms, ReturnValue), Z_Construct_UClass_AFPSWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_GetWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_GetWeapon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_GetWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_GetWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "GetWeapon", nullptr, nullptr, sizeof(FPSCharacter_eventGetWeapon_Parms), Z_Construct_UFunction_AFPSCharacter_GetWeapon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_GetWeapon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_GetWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_GetWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_Heal_Statics
	{
		struct FPSCharacter_eventHeal_Parms
		{
			float AmountToHeal;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmountToHeal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacter_Heal_Statics::NewProp_AmountToHeal = { "AmountToHeal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacter_eventHeal_Parms, AmountToHeal), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_Heal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_Heal_Statics::NewProp_AmountToHeal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_Heal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_Heal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "Heal", nullptr, nullptr, sizeof(FPSCharacter_eventHeal_Parms), Z_Construct_UFunction_AFPSCharacter_Heal_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_Heal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_Heal_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_Heal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_Heal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_Heal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_IsDead_Statics
	{
		struct FPSCharacter_eventIsDead_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacter_IsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacter_eventIsDead_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacter_IsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacter_eventIsDead_Parms), &Z_Construct_UFunction_AFPSCharacter_IsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_IsDead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_IsDead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_IsDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_IsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "IsDead", nullptr, nullptr, sizeof(FPSCharacter_eventIsDead_Parms), Z_Construct_UFunction_AFPSCharacter_IsDead_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_IsDead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_IsDead_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_IsDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_IsDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_IsDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_IsRunning_Statics
	{
		struct FPSCharacter_eventIsRunning_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacter_IsRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacter_eventIsRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacter_IsRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacter_eventIsRunning_Parms), &Z_Construct_UFunction_AFPSCharacter_IsRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_IsRunning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_IsRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_IsRunning_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_IsRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "IsRunning", nullptr, nullptr, sizeof(FPSCharacter_eventIsRunning_Parms), Z_Construct_UFunction_AFPSCharacter_IsRunning_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_IsRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_IsRunning_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_IsRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_IsRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_IsRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_Reload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_Reload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "Reload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_Reload_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_Reload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_Reload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_Reload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_TryToAttackWithWeapon_Statics
	{
		struct FPSCharacter_eventTryToAttackWithWeapon_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacter_TryToAttackWithWeapon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacter_eventTryToAttackWithWeapon_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacter_TryToAttackWithWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacter_eventTryToAttackWithWeapon_Parms), &Z_Construct_UFunction_AFPSCharacter_TryToAttackWithWeapon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_TryToAttackWithWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_TryToAttackWithWeapon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_TryToAttackWithWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_TryToAttackWithWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "TryToAttackWithWeapon", nullptr, nullptr, sizeof(FPSCharacter_eventTryToAttackWithWeapon_Parms), Z_Construct_UFunction_AFPSCharacter_TryToAttackWithWeapon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_TryToAttackWithWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_TryToAttackWithWeapon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_TryToAttackWithWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_TryToAttackWithWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_TryToAttackWithWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_WantsToAttack_Statics
	{
		struct FPSCharacter_eventWantsToAttack_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacter_WantsToAttack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacter_eventWantsToAttack_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacter_WantsToAttack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacter_eventWantsToAttack_Parms), &Z_Construct_UFunction_AFPSCharacter_WantsToAttack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_WantsToAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_WantsToAttack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_WantsToAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_WantsToAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "WantsToAttack", nullptr, nullptr, sizeof(FPSCharacter_eventWantsToAttack_Parms), Z_Construct_UFunction_AFPSCharacter_WantsToAttack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_WantsToAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_WantsToAttack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_WantsToAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_WantsToAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_WantsToAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSCharacter_NoRegister()
	{
		return AFPSCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFPSCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponBodyAttachName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WeaponBodyAttachName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponArmsAttachName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WeaponArmsAttachName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoilComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RecoilComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Arms_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Arms;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Team;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartingWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StartingWeapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_BTFPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSCharacter_BP_OnFireWithWeapon, "BP_OnFireWithWeapon" }, // 1766143845
		{ &Z_Construct_UFunction_AFPSCharacter_BP_OnReloadWeapon, "BP_OnReloadWeapon" }, // 840026917
		{ &Z_Construct_UFunction_AFPSCharacter_EquipNewWeapon, "EquipNewWeapon" }, // 913707070
		{ &Z_Construct_UFunction_AFPSCharacter_GetADS, "GetADS" }, // 2387507328
		{ &Z_Construct_UFunction_AFPSCharacter_GetCurrentWeapon, "GetCurrentWeapon" }, // 4253421522
		{ &Z_Construct_UFunction_AFPSCharacter_GetHealth, "GetHealth" }, // 2286725294
		{ &Z_Construct_UFunction_AFPSCharacter_GetMovementSpeedModifier, "GetMovementSpeedModifier" }, // 3940159207
		{ &Z_Construct_UFunction_AFPSCharacter_GetTeam, "GetTeam" }, // 3026846004
		{ &Z_Construct_UFunction_AFPSCharacter_GetWeapon, "GetWeapon" }, // 3041896500
		{ &Z_Construct_UFunction_AFPSCharacter_Heal, "Heal" }, // 2588003714
		{ &Z_Construct_UFunction_AFPSCharacter_IsDead, "IsDead" }, // 3270087586
		{ &Z_Construct_UFunction_AFPSCharacter_IsRunning, "IsRunning" }, // 3974221541
		{ &Z_Construct_UFunction_AFPSCharacter_Reload, "Reload" }, // 3366353924
		{ &Z_Construct_UFunction_AFPSCharacter_TryToAttackWithWeapon, "TryToAttackWithWeapon" }, // 2693020349
		{ &Z_Construct_UFunction_AFPSCharacter_WantsToAttack, "WantsToAttack" }, // 1819883193
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/FPSCharacter.h" },
		{ "ModuleRelativePath", "Character/FPSCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Character/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, Health), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Health_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_WeaponBodyAttachName_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Character/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_WeaponBodyAttachName = { "WeaponBodyAttachName", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, WeaponBodyAttachName), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_WeaponBodyAttachName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_WeaponBodyAttachName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_WeaponArmsAttachName_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Character/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_WeaponArmsAttachName = { "WeaponArmsAttachName", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, WeaponArmsAttachName), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_WeaponArmsAttachName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_WeaponArmsAttachName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CurrentWeapon_MetaData[] = {
		{ "ModuleRelativePath", "Character/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CurrentWeapon = { "CurrentWeapon", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, CurrentWeapon), Z_Construct_UClass_AFPSWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CurrentWeapon_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CurrentWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_RecoilComponent_MetaData[] = {
		{ "Category", "Recoil" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_RecoilComponent = { "RecoilComponent", nullptr, (EPropertyFlags)0x00200800000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, RecoilComponent), Z_Construct_UClass_URecoilComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_RecoilComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_RecoilComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Arms_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Arms = { "Arms", nullptr, (EPropertyFlags)0x00200800000b000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, Arms), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Arms_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Arms_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00200800000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CameraComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Team_MetaData[] = {
		{ "Category", "Team" },
		{ "ModuleRelativePath", "Character/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, Team), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Team_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Team_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_StartingWeapon_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Character/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_StartingWeapon = { "StartingWeapon", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, StartingWeapon), Z_Construct_UClass_AFPSWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_StartingWeapon_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_StartingWeapon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_WeaponBodyAttachName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_WeaponArmsAttachName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CurrentWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_RecoilComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Arms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Team,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_StartingWeapon,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFPSCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(AFPSCharacter, IGenericTeamAgentInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSCharacter_Statics::ClassParams = {
		&AFPSCharacter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFPSCharacter_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSCharacter, 2457116129);
	template<> BTFPS_API UClass* StaticClass<AFPSCharacter>()
	{
		return AFPSCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSCharacter(Z_Construct_UClass_AFPSCharacter, &AFPSCharacter::StaticClass, TEXT("/Script/BTFPS"), TEXT("AFPSCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
