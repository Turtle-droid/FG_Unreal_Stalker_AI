// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTFPS/AI/AISpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISpawner() {}
// Cross Module References
	BTFPS_API UClass* Z_Construct_UClass_AAISpawner_NoRegister();
	BTFPS_API UClass* Z_Construct_UClass_AAISpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BTFPS();
	BTFPS_API UFunction* Z_Construct_UFunction_AAISpawner_BP_OnSpawned();
	BTFPS_API UClass* Z_Construct_UClass_AAIFPSCharacter_NoRegister();
	BTFPS_API UFunction* Z_Construct_UFunction_AAISpawner_HandleSpawnTimerDone();
	BTFPS_API UFunction* Z_Construct_UFunction_AAISpawner_SpawnCharacter();
	BTFPS_API UFunction* Z_Construct_UFunction_AAISpawner_SpawnCharacterOverride();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	static FName NAME_AAISpawner_BP_OnSpawned = FName(TEXT("BP_OnSpawned"));
	void AAISpawner::BP_OnSpawned(AAIFPSCharacter* AICharacter)
	{
		AISpawner_eventBP_OnSpawned_Parms Parms;
		Parms.AICharacter=AICharacter;
		ProcessEvent(FindFunctionChecked(NAME_AAISpawner_BP_OnSpawned),&Parms);
	}
	void AAISpawner::StaticRegisterNativesAAISpawner()
	{
		UClass* Class = AAISpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleSpawnTimerDone", &AAISpawner::execHandleSpawnTimerDone },
			{ "SpawnCharacter", &AAISpawner::execSpawnCharacter },
			{ "SpawnCharacterOverride", &AAISpawner::execSpawnCharacterOverride },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAISpawner_BP_OnSpawned_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AICharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAISpawner_BP_OnSpawned_Statics::NewProp_AICharacter = { "AICharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISpawner_eventBP_OnSpawned_Parms, AICharacter), Z_Construct_UClass_AAIFPSCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAISpawner_BP_OnSpawned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAISpawner_BP_OnSpawned_Statics::NewProp_AICharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAISpawner_BP_OnSpawned_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spawner" },
		{ "Comment", "// Called every time a character is spawned.\n" },
		{ "DisplayName", "On Spawned" },
		{ "ModuleRelativePath", "AI/AISpawner.h" },
		{ "ToolTip", "Called every time a character is spawned." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAISpawner_BP_OnSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAISpawner, nullptr, "BP_OnSpawned", nullptr, nullptr, sizeof(AISpawner_eventBP_OnSpawned_Parms), Z_Construct_UFunction_AAISpawner_BP_OnSpawned_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAISpawner_BP_OnSpawned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAISpawner_BP_OnSpawned_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAISpawner_BP_OnSpawned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAISpawner_BP_OnSpawned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAISpawner_BP_OnSpawned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAISpawner_HandleSpawnTimerDone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAISpawner_HandleSpawnTimerDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/AISpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAISpawner_HandleSpawnTimerDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAISpawner, nullptr, "HandleSpawnTimerDone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAISpawner_HandleSpawnTimerDone_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAISpawner_HandleSpawnTimerDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAISpawner_HandleSpawnTimerDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAISpawner_HandleSpawnTimerDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAISpawner_SpawnCharacter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAISpawner_SpawnCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spawner" },
		{ "Comment", "// Spawn with default settings.\n" },
		{ "ModuleRelativePath", "AI/AISpawner.h" },
		{ "ToolTip", "Spawn with default settings." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAISpawner_SpawnCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAISpawner, nullptr, "SpawnCharacter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAISpawner_SpawnCharacter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAISpawner_SpawnCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAISpawner_SpawnCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAISpawner_SpawnCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAISpawner_SpawnCharacterOverride_Statics
	{
		struct AISpawner_eventSpawnCharacterOverride_Parms
		{
			int32 Count;
			float Duration;
			bool bRandomDuration;
			float RandomDurationMin;
			float RandomDurationMax;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RandomDurationMax;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RandomDurationMin;
		static void NewProp_bRandomDuration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomDuration;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAISpawner_SpawnCharacterOverride_Statics::NewProp_RandomDurationMax = { "RandomDurationMax", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISpawner_eventSpawnCharacterOverride_Parms, RandomDurationMax), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAISpawner_SpawnCharacterOverride_Statics::NewProp_RandomDurationMin = { "RandomDurationMin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISpawner_eventSpawnCharacterOverride_Parms, RandomDurationMin), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AAISpawner_SpawnCharacterOverride_Statics::NewProp_bRandomDuration_SetBit(void* Obj)
	{
		((AISpawner_eventSpawnCharacterOverride_Parms*)Obj)->bRandomDuration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAISpawner_SpawnCharacterOverride_Statics::NewProp_bRandomDuration = { "bRandomDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AISpawner_eventSpawnCharacterOverride_Parms), &Z_Construct_UFunction_AAISpawner_SpawnCharacterOverride_Statics::NewProp_bRandomDuration_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAISpawner_SpawnCharacterOverride_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISpawner_eventSpawnCharacterOverride_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAISpawner_SpawnCharacterOverride_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISpawner_eventSpawnCharacterOverride_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAISpawner_SpawnCharacterOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAISpawner_SpawnCharacterOverride_Statics::NewProp_RandomDurationMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAISpawner_SpawnCharacterOverride_Statics::NewProp_RandomDurationMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAISpawner_SpawnCharacterOverride_Statics::NewProp_bRandomDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAISpawner_SpawnCharacterOverride_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAISpawner_SpawnCharacterOverride_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAISpawner_SpawnCharacterOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spawner" },
		{ "Comment", "// Spawn and override default settings.\n" },
		{ "CPP_Default_bRandomDuration", "false" },
		{ "CPP_Default_Count", "1" },
		{ "CPP_Default_Duration", "0.000000" },
		{ "CPP_Default_RandomDurationMax", "1.000000" },
		{ "CPP_Default_RandomDurationMin", "0.000000" },
		{ "ModuleRelativePath", "AI/AISpawner.h" },
		{ "ToolTip", "Spawn and override default settings." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAISpawner_SpawnCharacterOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAISpawner, nullptr, "SpawnCharacterOverride", nullptr, nullptr, sizeof(AISpawner_eventSpawnCharacterOverride_Parms), Z_Construct_UFunction_AAISpawner_SpawnCharacterOverride_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAISpawner_SpawnCharacterOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAISpawner_SpawnCharacterOverride_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAISpawner_SpawnCharacterOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAISpawner_SpawnCharacterOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAISpawner_SpawnCharacterOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAISpawner_NoRegister()
	{
		return AAISpawner::StaticClass();
	}
	struct Z_Construct_UClass_AAISpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandomDuration_MetaData[];
#endif
		static void NewProp_bRandomDuration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpawnOnBeginPlay_MetaData[];
#endif
		static void NewProp_bSpawnOnBeginPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnOnBeginPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomDurationMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RandomDurationMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomDurationMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RandomDurationMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CharacterClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAISpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BTFPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAISpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAISpawner_BP_OnSpawned, "BP_OnSpawned" }, // 3005389554
		{ &Z_Construct_UFunction_AAISpawner_HandleSpawnTimerDone, "HandleSpawnTimerDone" }, // 917344269
		{ &Z_Construct_UFunction_AAISpawner_SpawnCharacter, "SpawnCharacter" }, // 4005416582
		{ &Z_Construct_UFunction_AAISpawner_SpawnCharacterOverride, "SpawnCharacterOverride" }, // 219961396
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/AISpawner.h" },
		{ "ModuleRelativePath", "AI/AISpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawner_Statics::NewProp_bRandomDuration_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "AI/AISpawner.h" },
	};
#endif
	void Z_Construct_UClass_AAISpawner_Statics::NewProp_bRandomDuration_SetBit(void* Obj)
	{
		((AAISpawner*)Obj)->bRandomDuration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAISpawner_Statics::NewProp_bRandomDuration = { "bRandomDuration", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAISpawner), &Z_Construct_UClass_AAISpawner_Statics::NewProp_bRandomDuration_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAISpawner_Statics::NewProp_bRandomDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAISpawner_Statics::NewProp_bRandomDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawner_Statics::NewProp_bSpawnOnBeginPlay_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "AI/AISpawner.h" },
	};
#endif
	void Z_Construct_UClass_AAISpawner_Statics::NewProp_bSpawnOnBeginPlay_SetBit(void* Obj)
	{
		((AAISpawner*)Obj)->bSpawnOnBeginPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAISpawner_Statics::NewProp_bSpawnOnBeginPlay = { "bSpawnOnBeginPlay", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAISpawner), &Z_Construct_UClass_AAISpawner_Statics::NewProp_bSpawnOnBeginPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAISpawner_Statics::NewProp_bSpawnOnBeginPlay_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAISpawner_Statics::NewProp_bSpawnOnBeginPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawner_Statics::NewProp_RandomDurationMax_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "AI/AISpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAISpawner_Statics::NewProp_RandomDurationMax = { "RandomDurationMax", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAISpawner, RandomDurationMax), METADATA_PARAMS(Z_Construct_UClass_AAISpawner_Statics::NewProp_RandomDurationMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAISpawner_Statics::NewProp_RandomDurationMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawner_Statics::NewProp_RandomDurationMin_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "AI/AISpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAISpawner_Statics::NewProp_RandomDurationMin = { "RandomDurationMin", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAISpawner, RandomDurationMin), METADATA_PARAMS(Z_Construct_UClass_AAISpawner_Statics::NewProp_RandomDurationMin_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAISpawner_Statics::NewProp_RandomDurationMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawner_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "AI/AISpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAISpawner_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAISpawner, Duration), METADATA_PARAMS(Z_Construct_UClass_AAISpawner_Statics::NewProp_Duration_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAISpawner_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawner_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "AI/AISpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAISpawner_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAISpawner, Count), METADATA_PARAMS(Z_Construct_UClass_AAISpawner_Statics::NewProp_Count_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAISpawner_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawner_Statics::NewProp_CharacterClass_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "AI/AISpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAISpawner_Statics::NewProp_CharacterClass = { "CharacterClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAISpawner, CharacterClass), Z_Construct_UClass_AAIFPSCharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AAISpawner_Statics::NewProp_CharacterClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAISpawner_Statics::NewProp_CharacterClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAISpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawner_Statics::NewProp_bRandomDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawner_Statics::NewProp_bSpawnOnBeginPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawner_Statics::NewProp_RandomDurationMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawner_Statics::NewProp_RandomDurationMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawner_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawner_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawner_Statics::NewProp_CharacterClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAISpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAISpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAISpawner_Statics::ClassParams = {
		&AAISpawner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAISpawner_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AAISpawner_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAISpawner_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAISpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAISpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAISpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAISpawner, 2100464870);
	template<> BTFPS_API UClass* StaticClass<AAISpawner>()
	{
		return AAISpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAISpawner(Z_Construct_UClass_AAISpawner, &AAISpawner::StaticClass, TEXT("/Script/BTFPS"), TEXT("AAISpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAISpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
