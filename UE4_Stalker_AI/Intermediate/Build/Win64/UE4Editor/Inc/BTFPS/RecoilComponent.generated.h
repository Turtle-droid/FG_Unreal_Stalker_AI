// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BTFPS_RecoilComponent_generated_h
#error "RecoilComponent.generated.h already included, missing '#pragma once' in RecoilComponent.h"
#endif
#define BTFPS_RecoilComponent_generated_h

#define UE4_Stalker_AI_Source_BTFPS_Components_RecoilComponent_h_9_RPC_WRAPPERS
#define UE4_Stalker_AI_Source_BTFPS_Components_RecoilComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS
#define UE4_Stalker_AI_Source_BTFPS_Components_RecoilComponent_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURecoilComponent(); \
	friend struct Z_Construct_UClass_URecoilComponent_Statics; \
public: \
	DECLARE_CLASS(URecoilComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BTFPS"), NO_API) \
	DECLARE_SERIALIZER(URecoilComponent)


#define UE4_Stalker_AI_Source_BTFPS_Components_RecoilComponent_h_9_INCLASS \
private: \
	static void StaticRegisterNativesURecoilComponent(); \
	friend struct Z_Construct_UClass_URecoilComponent_Statics; \
public: \
	DECLARE_CLASS(URecoilComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BTFPS"), NO_API) \
	DECLARE_SERIALIZER(URecoilComponent)


#define UE4_Stalker_AI_Source_BTFPS_Components_RecoilComponent_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URecoilComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URecoilComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URecoilComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URecoilComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URecoilComponent(URecoilComponent&&); \
	NO_API URecoilComponent(const URecoilComponent&); \
public:


#define UE4_Stalker_AI_Source_BTFPS_Components_RecoilComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URecoilComponent(URecoilComponent&&); \
	NO_API URecoilComponent(const URecoilComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URecoilComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URecoilComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URecoilComponent)


#define UE4_Stalker_AI_Source_BTFPS_Components_RecoilComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OwnerPawn() { return STRUCT_OFFSET(URecoilComponent, OwnerPawn); } \
	FORCEINLINE static uint32 __PPO__Weapon() { return STRUCT_OFFSET(URecoilComponent, Weapon); }


#define UE4_Stalker_AI_Source_BTFPS_Components_RecoilComponent_h_6_PROLOG
#define UE4_Stalker_AI_Source_BTFPS_Components_RecoilComponent_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Stalker_AI_Source_BTFPS_Components_RecoilComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	UE4_Stalker_AI_Source_BTFPS_Components_RecoilComponent_h_9_RPC_WRAPPERS \
	UE4_Stalker_AI_Source_BTFPS_Components_RecoilComponent_h_9_INCLASS \
	UE4_Stalker_AI_Source_BTFPS_Components_RecoilComponent_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4_Stalker_AI_Source_BTFPS_Components_RecoilComponent_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Stalker_AI_Source_BTFPS_Components_RecoilComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	UE4_Stalker_AI_Source_BTFPS_Components_RecoilComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4_Stalker_AI_Source_BTFPS_Components_RecoilComponent_h_9_INCLASS_NO_PURE_DECLS \
	UE4_Stalker_AI_Source_BTFPS_Components_RecoilComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BTFPS_API UClass* StaticClass<class URecoilComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4_Stalker_AI_Source_BTFPS_Components_RecoilComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
