// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
#ifdef BTFPS_AIFPSCharacter_generated_h
#error "AIFPSCharacter.generated.h already included, missing '#pragma once' in AIFPSCharacter.h"
#endif
#define BTFPS_AIFPSCharacter_generated_h

#define UE4_Stalker_AI_Source_BTFPS_AI_AIFPSCharacter_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDoRagdoll) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DoRagdoll(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomDeathAnimation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimMontage**)Z_Param__Result=P_THIS->GetRandomDeathAnimation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomHitAnimation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimMontage**)Z_Param__Result=P_THIS->GetRandomHitAnimation(); \
		P_NATIVE_END; \
	}


#define UE4_Stalker_AI_Source_BTFPS_AI_AIFPSCharacter_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDoRagdoll) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DoRagdoll(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomDeathAnimation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimMontage**)Z_Param__Result=P_THIS->GetRandomDeathAnimation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomHitAnimation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimMontage**)Z_Param__Result=P_THIS->GetRandomHitAnimation(); \
		P_NATIVE_END; \
	}


#define UE4_Stalker_AI_Source_BTFPS_AI_AIFPSCharacter_h_9_EVENT_PARMS
#define UE4_Stalker_AI_Source_BTFPS_AI_AIFPSCharacter_h_9_CALLBACK_WRAPPERS
#define UE4_Stalker_AI_Source_BTFPS_AI_AIFPSCharacter_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIFPSCharacter(); \
	friend struct Z_Construct_UClass_AAIFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AAIFPSCharacter, AFPSCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BTFPS"), NO_API) \
	DECLARE_SERIALIZER(AAIFPSCharacter)


#define UE4_Stalker_AI_Source_BTFPS_AI_AIFPSCharacter_h_9_INCLASS \
private: \
	static void StaticRegisterNativesAAIFPSCharacter(); \
	friend struct Z_Construct_UClass_AAIFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AAIFPSCharacter, AFPSCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BTFPS"), NO_API) \
	DECLARE_SERIALIZER(AAIFPSCharacter)


#define UE4_Stalker_AI_Source_BTFPS_AI_AIFPSCharacter_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAIFPSCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIFPSCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIFPSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIFPSCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIFPSCharacter(AAIFPSCharacter&&); \
	NO_API AAIFPSCharacter(const AAIFPSCharacter&); \
public:


#define UE4_Stalker_AI_Source_BTFPS_AI_AIFPSCharacter_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAIFPSCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIFPSCharacter(AAIFPSCharacter&&); \
	NO_API AAIFPSCharacter(const AAIFPSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIFPSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIFPSCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIFPSCharacter)


#define UE4_Stalker_AI_Source_BTFPS_AI_AIFPSCharacter_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HitReactions() { return STRUCT_OFFSET(AAIFPSCharacter, HitReactions); } \
	FORCEINLINE static uint32 __PPO__DeathAnims() { return STRUCT_OFFSET(AAIFPSCharacter, DeathAnims); }


#define UE4_Stalker_AI_Source_BTFPS_AI_AIFPSCharacter_h_6_PROLOG \
	UE4_Stalker_AI_Source_BTFPS_AI_AIFPSCharacter_h_9_EVENT_PARMS


#define UE4_Stalker_AI_Source_BTFPS_AI_AIFPSCharacter_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Stalker_AI_Source_BTFPS_AI_AIFPSCharacter_h_9_PRIVATE_PROPERTY_OFFSET \
	UE4_Stalker_AI_Source_BTFPS_AI_AIFPSCharacter_h_9_RPC_WRAPPERS \
	UE4_Stalker_AI_Source_BTFPS_AI_AIFPSCharacter_h_9_CALLBACK_WRAPPERS \
	UE4_Stalker_AI_Source_BTFPS_AI_AIFPSCharacter_h_9_INCLASS \
	UE4_Stalker_AI_Source_BTFPS_AI_AIFPSCharacter_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4_Stalker_AI_Source_BTFPS_AI_AIFPSCharacter_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Stalker_AI_Source_BTFPS_AI_AIFPSCharacter_h_9_PRIVATE_PROPERTY_OFFSET \
	UE4_Stalker_AI_Source_BTFPS_AI_AIFPSCharacter_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4_Stalker_AI_Source_BTFPS_AI_AIFPSCharacter_h_9_CALLBACK_WRAPPERS \
	UE4_Stalker_AI_Source_BTFPS_AI_AIFPSCharacter_h_9_INCLASS_NO_PURE_DECLS \
	UE4_Stalker_AI_Source_BTFPS_AI_AIFPSCharacter_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BTFPS_API UClass* StaticClass<class AAIFPSCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4_Stalker_AI_Source_BTFPS_AI_AIFPSCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
