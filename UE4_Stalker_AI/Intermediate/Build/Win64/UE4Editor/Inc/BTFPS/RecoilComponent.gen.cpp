// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTFPS/Components/RecoilComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRecoilComponent() {}
// Cross Module References
	BTFPS_API UClass* Z_Construct_UClass_URecoilComponent_NoRegister();
	BTFPS_API UClass* Z_Construct_UClass_URecoilComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_BTFPS();
	BTFPS_API UClass* Z_Construct_UClass_AFPSWeapon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	void URecoilComponent::StaticRegisterNativesURecoilComponent()
	{
	}
	UClass* Z_Construct_UClass_URecoilComponent_NoRegister()
	{
		return URecoilComponent::StaticClass();
	}
	struct Z_Construct_UClass_URecoilComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Weapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URecoilComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BTFPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URecoilComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/RecoilComponent.h" },
		{ "ModuleRelativePath", "Components/RecoilComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URecoilComponent_Statics::NewProp_Weapon_MetaData[] = {
		{ "ModuleRelativePath", "Components/RecoilComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URecoilComponent_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URecoilComponent, Weapon), Z_Construct_UClass_AFPSWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URecoilComponent_Statics::NewProp_Weapon_MetaData, ARRAY_COUNT(Z_Construct_UClass_URecoilComponent_Statics::NewProp_Weapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URecoilComponent_Statics::NewProp_OwnerPawn_MetaData[] = {
		{ "ModuleRelativePath", "Components/RecoilComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URecoilComponent_Statics::NewProp_OwnerPawn = { "OwnerPawn", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URecoilComponent, OwnerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URecoilComponent_Statics::NewProp_OwnerPawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_URecoilComponent_Statics::NewProp_OwnerPawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URecoilComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecoilComponent_Statics::NewProp_Weapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecoilComponent_Statics::NewProp_OwnerPawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URecoilComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URecoilComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URecoilComponent_Statics::ClassParams = {
		&URecoilComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URecoilComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_URecoilComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URecoilComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_URecoilComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URecoilComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URecoilComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URecoilComponent, 1893136160);
	template<> BTFPS_API UClass* StaticClass<URecoilComponent>()
	{
		return URecoilComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URecoilComponent(Z_Construct_UClass_URecoilComponent, &URecoilComponent::StaticClass, TEXT("/Script/BTFPS"), TEXT("URecoilComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URecoilComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
