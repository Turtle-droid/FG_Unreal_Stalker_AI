// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTFPS/Character/FPSCharacterMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSCharacterMovementComponent() {}
// Cross Module References
	BTFPS_API UClass* Z_Construct_UClass_UFPSCharacterMovementComponent_NoRegister();
	BTFPS_API UClass* Z_Construct_UClass_UFPSCharacterMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_BTFPS();
// End Cross Module References
	void UFPSCharacterMovementComponent::StaticRegisterNativesUFPSCharacterMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_UFPSCharacterMovementComponent_NoRegister()
	{
		return UFPSCharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFPSCharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BTFPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Character/FPSCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Character/FPSCharacterMovementComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFPSCharacterMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::ClassParams = {
		&UFPSCharacterMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFPSCharacterMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFPSCharacterMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFPSCharacterMovementComponent, 2499170657);
	template<> BTFPS_API UClass* StaticClass<UFPSCharacterMovementComponent>()
	{
		return UFPSCharacterMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFPSCharacterMovementComponent(Z_Construct_UClass_UFPSCharacterMovementComponent, &UFPSCharacterMovementComponent::StaticClass, TEXT("/Script/BTFPS"), TEXT("UFPSCharacterMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFPSCharacterMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
