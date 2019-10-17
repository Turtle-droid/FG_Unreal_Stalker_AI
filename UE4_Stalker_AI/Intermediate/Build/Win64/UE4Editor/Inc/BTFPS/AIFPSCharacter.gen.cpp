// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTFPS/AI/AIFPSCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIFPSCharacter() {}
// Cross Module References
	BTFPS_API UClass* Z_Construct_UClass_AAIFPSCharacter_NoRegister();
	BTFPS_API UClass* Z_Construct_UClass_AAIFPSCharacter();
	BTFPS_API UClass* Z_Construct_UClass_AFPSCharacter();
	UPackage* Z_Construct_UPackage__Script_BTFPS();
	BTFPS_API UFunction* Z_Construct_UFunction_AAIFPSCharacter_BP_OnDamageTaken();
	BTFPS_API UFunction* Z_Construct_UFunction_AAIFPSCharacter_BP_OnDead();
	BTFPS_API UFunction* Z_Construct_UFunction_AAIFPSCharacter_DoRagdoll();
	BTFPS_API UFunction* Z_Construct_UFunction_AAIFPSCharacter_GetRandomDeathAnimation();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	BTFPS_API UFunction* Z_Construct_UFunction_AAIFPSCharacter_GetRandomHitAnimation();
// End Cross Module References
	static FName NAME_AAIFPSCharacter_BP_OnDamageTaken = FName(TEXT("BP_OnDamageTaken"));
	void AAIFPSCharacter::BP_OnDamageTaken()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAIFPSCharacter_BP_OnDamageTaken),NULL);
	}
	static FName NAME_AAIFPSCharacter_BP_OnDead = FName(TEXT("BP_OnDead"));
	void AAIFPSCharacter::BP_OnDead()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAIFPSCharacter_BP_OnDead),NULL);
	}
	void AAIFPSCharacter::StaticRegisterNativesAAIFPSCharacter()
	{
		UClass* Class = AAIFPSCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DoRagdoll", &AAIFPSCharacter::execDoRagdoll },
			{ "GetRandomDeathAnimation", &AAIFPSCharacter::execGetRandomDeathAnimation },
			{ "GetRandomHitAnimation", &AAIFPSCharacter::execGetRandomHitAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAIFPSCharacter_BP_OnDamageTaken_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIFPSCharacter_BP_OnDamageTaken_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "On Damage Taken" },
		{ "ModuleRelativePath", "AI/AIFPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIFPSCharacter_BP_OnDamageTaken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIFPSCharacter, nullptr, "BP_OnDamageTaken", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIFPSCharacter_BP_OnDamageTaken_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAIFPSCharacter_BP_OnDamageTaken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIFPSCharacter_BP_OnDamageTaken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIFPSCharacter_BP_OnDamageTaken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIFPSCharacter_BP_OnDead_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIFPSCharacter_BP_OnDead_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "On Dead" },
		{ "ModuleRelativePath", "AI/AIFPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIFPSCharacter_BP_OnDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIFPSCharacter, nullptr, "BP_OnDead", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIFPSCharacter_BP_OnDead_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAIFPSCharacter_BP_OnDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIFPSCharacter_BP_OnDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIFPSCharacter_BP_OnDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIFPSCharacter_DoRagdoll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIFPSCharacter_DoRagdoll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/AIFPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIFPSCharacter_DoRagdoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIFPSCharacter, nullptr, "DoRagdoll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIFPSCharacter_DoRagdoll_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAIFPSCharacter_DoRagdoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIFPSCharacter_DoRagdoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIFPSCharacter_DoRagdoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIFPSCharacter_GetRandomDeathAnimation_Statics
	{
		struct AIFPSCharacter_eventGetRandomDeathAnimation_Parms
		{
			UAnimMontage* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIFPSCharacter_GetRandomDeathAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIFPSCharacter_eventGetRandomDeathAnimation_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIFPSCharacter_GetRandomDeathAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIFPSCharacter_GetRandomDeathAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIFPSCharacter_GetRandomDeathAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/AIFPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIFPSCharacter_GetRandomDeathAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIFPSCharacter, nullptr, "GetRandomDeathAnimation", nullptr, nullptr, sizeof(AIFPSCharacter_eventGetRandomDeathAnimation_Parms), Z_Construct_UFunction_AAIFPSCharacter_GetRandomDeathAnimation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAIFPSCharacter_GetRandomDeathAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIFPSCharacter_GetRandomDeathAnimation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAIFPSCharacter_GetRandomDeathAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIFPSCharacter_GetRandomDeathAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIFPSCharacter_GetRandomDeathAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIFPSCharacter_GetRandomHitAnimation_Statics
	{
		struct AIFPSCharacter_eventGetRandomHitAnimation_Parms
		{
			UAnimMontage* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIFPSCharacter_GetRandomHitAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIFPSCharacter_eventGetRandomHitAnimation_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIFPSCharacter_GetRandomHitAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIFPSCharacter_GetRandomHitAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIFPSCharacter_GetRandomHitAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/AIFPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIFPSCharacter_GetRandomHitAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIFPSCharacter, nullptr, "GetRandomHitAnimation", nullptr, nullptr, sizeof(AIFPSCharacter_eventGetRandomHitAnimation_Parms), Z_Construct_UFunction_AAIFPSCharacter_GetRandomHitAnimation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAIFPSCharacter_GetRandomHitAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIFPSCharacter_GetRandomHitAnimation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAIFPSCharacter_GetRandomHitAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIFPSCharacter_GetRandomHitAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIFPSCharacter_GetRandomHitAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAIFPSCharacter_NoRegister()
	{
		return AAIFPSCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AAIFPSCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeathAnims_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DeathAnims;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeathAnims_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitReactions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HitReactions;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitReactions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIFPSCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFPSCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_BTFPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAIFPSCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAIFPSCharacter_BP_OnDamageTaken, "BP_OnDamageTaken" }, // 3713150247
		{ &Z_Construct_UFunction_AAIFPSCharacter_BP_OnDead, "BP_OnDead" }, // 4225383791
		{ &Z_Construct_UFunction_AAIFPSCharacter_DoRagdoll, "DoRagdoll" }, // 2571559768
		{ &Z_Construct_UFunction_AAIFPSCharacter_GetRandomDeathAnimation, "GetRandomDeathAnimation" }, // 2080729354
		{ &Z_Construct_UFunction_AAIFPSCharacter_GetRandomHitAnimation, "GetRandomHitAnimation" }, // 4286602609
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIFPSCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/AIFPSCharacter.h" },
		{ "ModuleRelativePath", "AI/AIFPSCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIFPSCharacter_Statics::NewProp_DeathAnims_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "AI/AIFPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAIFPSCharacter_Statics::NewProp_DeathAnims = { "DeathAnims", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIFPSCharacter, DeathAnims), METADATA_PARAMS(Z_Construct_UClass_AAIFPSCharacter_Statics::NewProp_DeathAnims_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAIFPSCharacter_Statics::NewProp_DeathAnims_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIFPSCharacter_Statics::NewProp_DeathAnims_Inner = { "DeathAnims", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIFPSCharacter_Statics::NewProp_HitReactions_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "AI/AIFPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAIFPSCharacter_Statics::NewProp_HitReactions = { "HitReactions", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIFPSCharacter, HitReactions), METADATA_PARAMS(Z_Construct_UClass_AAIFPSCharacter_Statics::NewProp_HitReactions_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAIFPSCharacter_Statics::NewProp_HitReactions_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIFPSCharacter_Statics::NewProp_HitReactions_Inner = { "HitReactions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIFPSCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIFPSCharacter_Statics::NewProp_DeathAnims,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIFPSCharacter_Statics::NewProp_DeathAnims_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIFPSCharacter_Statics::NewProp_HitReactions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIFPSCharacter_Statics::NewProp_HitReactions_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIFPSCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIFPSCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAIFPSCharacter_Statics::ClassParams = {
		&AAIFPSCharacter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAIFPSCharacter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AAIFPSCharacter_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAIFPSCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAIFPSCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAIFPSCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAIFPSCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAIFPSCharacter, 93755795);
	template<> BTFPS_API UClass* StaticClass<AAIFPSCharacter>()
	{
		return AAIFPSCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAIFPSCharacter(Z_Construct_UClass_AAIFPSCharacter, &AAIFPSCharacter::StaticClass, TEXT("/Script/BTFPS"), TEXT("AAIFPSCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIFPSCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
