// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTFPS/Weapon/FPSWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSWeapon() {}
// Cross Module References
	BTFPS_API UClass* Z_Construct_UClass_AFPSWeapon_NoRegister();
	BTFPS_API UClass* Z_Construct_UClass_AFPSWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BTFPS();
	BTFPS_API UFunction* Z_Construct_UFunction_AFPSWeapon_Attack();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	BTFPS_API UFunction* Z_Construct_UFunction_AFPSWeapon_BP_OnFiredBullet();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	BTFPS_API UFunction* Z_Construct_UFunction_AFPSWeapon_CanShoot();
	BTFPS_API UFunction* Z_Construct_UFunction_AFPSWeapon_GetCurrentAmmo();
	BTFPS_API UFunction* Z_Construct_UFunction_AFPSWeapon_Reload();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	static FName NAME_AFPSWeapon_BP_OnFiredBullet = FName(TEXT("BP_OnFiredBullet"));
	void AFPSWeapon::BP_OnFiredBullet(FVector const& HitLocation, AActor* HitActor)
	{
		FPSWeapon_eventBP_OnFiredBullet_Parms Parms;
		Parms.HitLocation=HitLocation;
		Parms.HitActor=HitActor;
		ProcessEvent(FindFunctionChecked(NAME_AFPSWeapon_BP_OnFiredBullet),&Parms);
	}
	void AFPSWeapon::StaticRegisterNativesAFPSWeapon()
	{
		UClass* Class = AFPSWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Attack", &AFPSWeapon::execAttack },
			{ "CanShoot", &AFPSWeapon::execCanShoot },
			{ "GetCurrentAmmo", &AFPSWeapon::execGetCurrentAmmo },
			{ "Reload", &AFPSWeapon::execReload },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSWeapon_Attack_Statics
	{
		struct FPSWeapon_eventAttack_Parms
		{
			APawn* AttackInstigator;
			FVector StartLocation;
			FVector ForwardVector;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForwardVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForwardVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackInstigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSWeapon_Attack_Statics::NewProp_ForwardVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSWeapon_Attack_Statics::NewProp_ForwardVector = { "ForwardVector", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSWeapon_eventAttack_Parms, ForwardVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AFPSWeapon_Attack_Statics::NewProp_ForwardVector_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFPSWeapon_Attack_Statics::NewProp_ForwardVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSWeapon_Attack_Statics::NewProp_StartLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSWeapon_Attack_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSWeapon_eventAttack_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AFPSWeapon_Attack_Statics::NewProp_StartLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFPSWeapon_Attack_Statics::NewProp_StartLocation_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSWeapon_Attack_Statics::NewProp_AttackInstigator = { "AttackInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSWeapon_eventAttack_Parms, AttackInstigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSWeapon_Attack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSWeapon_Attack_Statics::NewProp_ForwardVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSWeapon_Attack_Statics::NewProp_StartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSWeapon_Attack_Statics::NewProp_AttackInstigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSWeapon_Attack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon/FPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSWeapon_Attack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSWeapon, nullptr, "Attack", nullptr, nullptr, sizeof(FPSWeapon_eventAttack_Parms), Z_Construct_UFunction_AFPSWeapon_Attack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFPSWeapon_Attack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSWeapon_Attack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSWeapon_Attack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSWeapon_Attack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSWeapon_Attack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSWeapon_BP_OnFiredBullet_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSWeapon_BP_OnFiredBullet_Statics::NewProp_HitActor = { "HitActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSWeapon_eventBP_OnFiredBullet_Parms, HitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSWeapon_BP_OnFiredBullet_Statics::NewProp_HitLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSWeapon_BP_OnFiredBullet_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSWeapon_eventBP_OnFiredBullet_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AFPSWeapon_BP_OnFiredBullet_Statics::NewProp_HitLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFPSWeapon_BP_OnFiredBullet_Statics::NewProp_HitLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSWeapon_BP_OnFiredBullet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSWeapon_BP_OnFiredBullet_Statics::NewProp_HitActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSWeapon_BP_OnFiredBullet_Statics::NewProp_HitLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSWeapon_BP_OnFiredBullet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon/FPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSWeapon_BP_OnFiredBullet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSWeapon, nullptr, "BP_OnFiredBullet", nullptr, nullptr, sizeof(FPSWeapon_eventBP_OnFiredBullet_Parms), Z_Construct_UFunction_AFPSWeapon_BP_OnFiredBullet_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFPSWeapon_BP_OnFiredBullet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSWeapon_BP_OnFiredBullet_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSWeapon_BP_OnFiredBullet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSWeapon_BP_OnFiredBullet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSWeapon_BP_OnFiredBullet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSWeapon_CanShoot_Statics
	{
		struct FPSWeapon_eventCanShoot_Parms
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
	void Z_Construct_UFunction_AFPSWeapon_CanShoot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSWeapon_eventCanShoot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSWeapon_CanShoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSWeapon_eventCanShoot_Parms), &Z_Construct_UFunction_AFPSWeapon_CanShoot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSWeapon_CanShoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSWeapon_CanShoot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSWeapon_CanShoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon/FPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSWeapon_CanShoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSWeapon, nullptr, "CanShoot", nullptr, nullptr, sizeof(FPSWeapon_eventCanShoot_Parms), Z_Construct_UFunction_AFPSWeapon_CanShoot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFPSWeapon_CanShoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSWeapon_CanShoot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSWeapon_CanShoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSWeapon_CanShoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSWeapon_CanShoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSWeapon_GetCurrentAmmo_Statics
	{
		struct FPSWeapon_eventGetCurrentAmmo_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFPSWeapon_GetCurrentAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSWeapon_eventGetCurrentAmmo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSWeapon_GetCurrentAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSWeapon_GetCurrentAmmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSWeapon_GetCurrentAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon/FPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSWeapon_GetCurrentAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSWeapon, nullptr, "GetCurrentAmmo", nullptr, nullptr, sizeof(FPSWeapon_eventGetCurrentAmmo_Parms), Z_Construct_UFunction_AFPSWeapon_GetCurrentAmmo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFPSWeapon_GetCurrentAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSWeapon_GetCurrentAmmo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSWeapon_GetCurrentAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSWeapon_GetCurrentAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSWeapon_GetCurrentAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSWeapon_Reload_Statics
	{
		struct FPSWeapon_eventReload_Parms
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
	void Z_Construct_UFunction_AFPSWeapon_Reload_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSWeapon_eventReload_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSWeapon_Reload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSWeapon_eventReload_Parms), &Z_Construct_UFunction_AFPSWeapon_Reload_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSWeapon_Reload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSWeapon_Reload_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSWeapon_Reload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon/FPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSWeapon_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSWeapon, nullptr, "Reload", nullptr, nullptr, sizeof(FPSWeapon_eventReload_Parms), Z_Construct_UFunction_AFPSWeapon_Reload_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFPSWeapon_Reload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSWeapon_Reload_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSWeapon_Reload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSWeapon_Reload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSWeapon_Reload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSWeapon_NoRegister()
	{
		return AFPSWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AFPSWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsRifle_MetaData[];
#endif
		static void NewProp_bIsRifle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRifle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YawMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YawMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedRecover_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedRecover;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedDeflect_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedDeflect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KickDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KickDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangeVerticalMaximum_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RangeVerticalMaximum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangeVerticalMinimum_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RangeVerticalMinimum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangeHorizontalMaximum_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RangeHorizontalMaximum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangeHorizontalMinimum_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RangeHorizontalMinimum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailParamName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TrailParamName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrailEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleFXSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MuzzleFXSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuzzleFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ammo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Ammo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Interval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Range;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BTFPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSWeapon_Attack, "Attack" }, // 973504340
		{ &Z_Construct_UFunction_AFPSWeapon_BP_OnFiredBullet, "BP_OnFiredBullet" }, // 3982979332
		{ &Z_Construct_UFunction_AFPSWeapon_CanShoot, "CanShoot" }, // 486169165
		{ &Z_Construct_UFunction_AFPSWeapon_GetCurrentAmmo, "GetCurrentAmmo" }, // 1406433609
		{ &Z_Construct_UFunction_AFPSWeapon_Reload, "Reload" }, // 1528596374
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon/FPSWeapon.h" },
		{ "ModuleRelativePath", "Weapon/FPSWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSWeapon_Statics::NewProp_bIsRifle_MetaData[] = {
		{ "Category", "FPSWeapon" },
		{ "ModuleRelativePath", "Weapon/FPSWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AFPSWeapon_Statics::NewProp_bIsRifle_SetBit(void* Obj)
	{
		((AFPSWeapon*)Obj)->bIsRifle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_bIsRifle = { "bIsRifle", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSWeapon), &Z_Construct_UClass_AFPSWeapon_Statics::NewProp_bIsRifle_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_bIsRifle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_bIsRifle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSWeapon_Statics::NewProp_PitchMax_MetaData[] = {
		{ "Category", "Recoil|Clamp" },
		{ "ModuleRelativePath", "Weapon/FPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_PitchMax = { "PitchMax", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSWeapon, PitchMax), METADATA_PARAMS(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_PitchMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_PitchMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSWeapon_Statics::NewProp_PitchMin_MetaData[] = {
		{ "Category", "Recoil|Clamp" },
		{ "ModuleRelativePath", "Weapon/FPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_PitchMin = { "PitchMin", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSWeapon, PitchMin), METADATA_PARAMS(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_PitchMin_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_PitchMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSWeapon_Statics::NewProp_YawMax_MetaData[] = {
		{ "Category", "Recoil|Clamp" },
		{ "ModuleRelativePath", "Weapon/FPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_YawMax = { "YawMax", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSWeapon, YawMax), METADATA_PARAMS(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_YawMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_YawMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSWeapon_Statics::NewProp_YawMin_MetaData[] = {
		{ "Category", "Recoil|Clamp" },
		{ "ModuleRelativePath", "Weapon/FPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_YawMin = { "YawMin", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSWeapon, YawMin), METADATA_PARAMS(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_YawMin_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_YawMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSWeapon_Statics::NewProp_SpeedRecover_MetaData[] = {
		{ "Category", "Recoil" },
		{ "ModuleRelativePath", "Weapon/FPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_SpeedRecover = { "SpeedRecover", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSWeapon, SpeedRecover), METADATA_PARAMS(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_SpeedRecover_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_SpeedRecover_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSWeapon_Statics::NewProp_SpeedDeflect_MetaData[] = {
		{ "Category", "Recoil" },
		{ "ModuleRelativePath", "Weapon/FPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_SpeedDeflect = { "SpeedDeflect", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSWeapon, SpeedDeflect), METADATA_PARAMS(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_SpeedDeflect_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_SpeedDeflect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSWeapon_Statics::NewProp_KickDistance_MetaData[] = {
		{ "Category", "Recoil" },
		{ "ModuleRelativePath", "Weapon/FPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_KickDistance = { "KickDistance", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSWeapon, KickDistance), METADATA_PARAMS(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_KickDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_KickDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSWeapon_Statics::NewProp_RangeVerticalMaximum_MetaData[] = {
		{ "Category", "Recoil" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Weapon/FPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_RangeVerticalMaximum = { "RangeVerticalMaximum", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSWeapon, RangeVerticalMaximum), METADATA_PARAMS(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_RangeVerticalMaximum_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_RangeVerticalMaximum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSWeapon_Statics::NewProp_RangeVerticalMinimum_MetaData[] = {
		{ "Category", "Recoil" },
		{ "ClampMax", "0.000000" },
		{ "ClampMin", "-1.000000" },
		{ "ModuleRelativePath", "Weapon/FPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_RangeVerticalMinimum = { "RangeVerticalMinimum", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSWeapon, RangeVerticalMinimum), METADATA_PARAMS(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_RangeVerticalMinimum_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_RangeVerticalMinimum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSWeapon_Statics::NewProp_RangeHorizontalMaximum_MetaData[] = {
		{ "Category", "Recoil" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Weapon/FPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_RangeHorizontalMaximum = { "RangeHorizontalMaximum", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSWeapon, RangeHorizontalMaximum), METADATA_PARAMS(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_RangeHorizontalMaximum_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_RangeHorizontalMaximum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSWeapon_Statics::NewProp_RangeHorizontalMinimum_MetaData[] = {
		{ "Category", "Recoil" },
		{ "ClampMax", "0.000000" },
		{ "ClampMin", "-1.000000" },
		{ "ModuleRelativePath", "Weapon/FPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_RangeHorizontalMinimum = { "RangeHorizontalMinimum", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSWeapon, RangeHorizontalMinimum), METADATA_PARAMS(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_RangeHorizontalMinimum_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_RangeHorizontalMinimum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSWeapon_Statics::NewProp_TrailParamName_MetaData[] = {
		{ "Category", "VFX" },
		{ "ModuleRelativePath", "Weapon/FPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_TrailParamName = { "TrailParamName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSWeapon, TrailParamName), METADATA_PARAMS(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_TrailParamName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_TrailParamName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSWeapon_Statics::NewProp_TrailEffect_MetaData[] = {
		{ "Category", "VFX" },
		{ "ModuleRelativePath", "Weapon/FPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_TrailEffect = { "TrailEffect", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSWeapon, TrailEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_TrailEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_TrailEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSWeapon_Statics::NewProp_MuzzleFXSocketName_MetaData[] = {
		{ "Category", "VFX" },
		{ "ModuleRelativePath", "Weapon/FPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_MuzzleFXSocketName = { "MuzzleFXSocketName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSWeapon, MuzzleFXSocketName), METADATA_PARAMS(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_MuzzleFXSocketName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_MuzzleFXSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSWeapon_Statics::NewProp_MuzzleFX_MetaData[] = {
		{ "Category", "VFX" },
		{ "ModuleRelativePath", "Weapon/FPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_MuzzleFX = { "MuzzleFX", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSWeapon, MuzzleFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_MuzzleFX_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_MuzzleFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSWeapon_Statics::NewProp_Ammo_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Weapon/FPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_Ammo = { "Ammo", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSWeapon, Ammo), METADATA_PARAMS(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_Ammo_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_Ammo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSWeapon_Statics::NewProp_Interval_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Weapon/FPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_Interval = { "Interval", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSWeapon, Interval), METADATA_PARAMS(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_Interval_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_Interval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSWeapon_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Weapon/FPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSWeapon, Damage), METADATA_PARAMS(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_Damage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSWeapon_Statics::NewProp_Range_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Weapon/FPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSWeapon, Range), METADATA_PARAMS(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_Range_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_Range_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSWeapon_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapon/FPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSWeapon, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_Mesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_bIsRifle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_PitchMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_PitchMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_YawMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_YawMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_SpeedRecover,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_SpeedDeflect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_KickDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_RangeVerticalMaximum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_RangeVerticalMinimum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_RangeHorizontalMaximum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_RangeHorizontalMinimum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_TrailParamName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_TrailEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_MuzzleFXSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_MuzzleFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_Ammo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_Interval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_Range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSWeapon_Statics::ClassParams = {
		&AFPSWeapon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFPSWeapon_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFPSWeapon_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSWeapon_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFPSWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSWeapon, 4227266610);
	template<> BTFPS_API UClass* StaticClass<AFPSWeapon>()
	{
		return AFPSWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSWeapon(Z_Construct_UClass_AFPSWeapon, &AFPSWeapon::StaticClass, TEXT("/Script/BTFPS"), TEXT("AFPSWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
