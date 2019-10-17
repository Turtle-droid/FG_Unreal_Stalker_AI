// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AAIFPSCharacter;
#ifdef BTFPS_AISpawner_generated_h
#error "AISpawner.generated.h already included, missing '#pragma once' in AISpawner.h"
#endif
#define BTFPS_AISpawner_generated_h

#define UE4_Stalker_AI_Source_BTFPS_AI_AISpawner_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleSpawnTimerDone) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleSpawnTimerDone(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnCharacter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnCharacter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnCharacterOverride) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Count); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_UBOOL(Z_Param_bRandomDuration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RandomDurationMin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RandomDurationMax); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnCharacterOverride(Z_Param_Count,Z_Param_Duration,Z_Param_bRandomDuration,Z_Param_RandomDurationMin,Z_Param_RandomDurationMax); \
		P_NATIVE_END; \
	}


#define UE4_Stalker_AI_Source_BTFPS_AI_AISpawner_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleSpawnTimerDone) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleSpawnTimerDone(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnCharacter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnCharacter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnCharacterOverride) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Count); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_UBOOL(Z_Param_bRandomDuration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RandomDurationMin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RandomDurationMax); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnCharacterOverride(Z_Param_Count,Z_Param_Duration,Z_Param_bRandomDuration,Z_Param_RandomDurationMin,Z_Param_RandomDurationMax); \
		P_NATIVE_END; \
	}


#define UE4_Stalker_AI_Source_BTFPS_AI_AISpawner_h_9_EVENT_PARMS \
	struct AISpawner_eventBP_OnSpawned_Parms \
	{ \
		AAIFPSCharacter* AICharacter; \
	};


#define UE4_Stalker_AI_Source_BTFPS_AI_AISpawner_h_9_CALLBACK_WRAPPERS
#define UE4_Stalker_AI_Source_BTFPS_AI_AISpawner_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAISpawner(); \
	friend struct Z_Construct_UClass_AAISpawner_Statics; \
public: \
	DECLARE_CLASS(AAISpawner, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BTFPS"), NO_API) \
	DECLARE_SERIALIZER(AAISpawner)


#define UE4_Stalker_AI_Source_BTFPS_AI_AISpawner_h_9_INCLASS \
private: \
	static void StaticRegisterNativesAAISpawner(); \
	friend struct Z_Construct_UClass_AAISpawner_Statics; \
public: \
	DECLARE_CLASS(AAISpawner, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BTFPS"), NO_API) \
	DECLARE_SERIALIZER(AAISpawner)


#define UE4_Stalker_AI_Source_BTFPS_AI_AISpawner_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAISpawner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAISpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAISpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAISpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAISpawner(AAISpawner&&); \
	NO_API AAISpawner(const AAISpawner&); \
public:


#define UE4_Stalker_AI_Source_BTFPS_AI_AISpawner_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAISpawner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAISpawner(AAISpawner&&); \
	NO_API AAISpawner(const AAISpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAISpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAISpawner); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAISpawner)


#define UE4_Stalker_AI_Source_BTFPS_AI_AISpawner_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CharacterClass() { return STRUCT_OFFSET(AAISpawner, CharacterClass); } \
	FORCEINLINE static uint32 __PPO__Count() { return STRUCT_OFFSET(AAISpawner, Count); } \
	FORCEINLINE static uint32 __PPO__Duration() { return STRUCT_OFFSET(AAISpawner, Duration); } \
	FORCEINLINE static uint32 __PPO__RandomDurationMin() { return STRUCT_OFFSET(AAISpawner, RandomDurationMin); } \
	FORCEINLINE static uint32 __PPO__RandomDurationMax() { return STRUCT_OFFSET(AAISpawner, RandomDurationMax); } \
	FORCEINLINE static uint32 __PPO__bSpawnOnBeginPlay() { return STRUCT_OFFSET(AAISpawner, bSpawnOnBeginPlay); } \
	FORCEINLINE static uint32 __PPO__bRandomDuration() { return STRUCT_OFFSET(AAISpawner, bRandomDuration); }


#define UE4_Stalker_AI_Source_BTFPS_AI_AISpawner_h_6_PROLOG \
	UE4_Stalker_AI_Source_BTFPS_AI_AISpawner_h_9_EVENT_PARMS


#define UE4_Stalker_AI_Source_BTFPS_AI_AISpawner_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Stalker_AI_Source_BTFPS_AI_AISpawner_h_9_PRIVATE_PROPERTY_OFFSET \
	UE4_Stalker_AI_Source_BTFPS_AI_AISpawner_h_9_RPC_WRAPPERS \
	UE4_Stalker_AI_Source_BTFPS_AI_AISpawner_h_9_CALLBACK_WRAPPERS \
	UE4_Stalker_AI_Source_BTFPS_AI_AISpawner_h_9_INCLASS \
	UE4_Stalker_AI_Source_BTFPS_AI_AISpawner_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4_Stalker_AI_Source_BTFPS_AI_AISpawner_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Stalker_AI_Source_BTFPS_AI_AISpawner_h_9_PRIVATE_PROPERTY_OFFSET \
	UE4_Stalker_AI_Source_BTFPS_AI_AISpawner_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4_Stalker_AI_Source_BTFPS_AI_AISpawner_h_9_CALLBACK_WRAPPERS \
	UE4_Stalker_AI_Source_BTFPS_AI_AISpawner_h_9_INCLASS_NO_PURE_DECLS \
	UE4_Stalker_AI_Source_BTFPS_AI_AISpawner_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BTFPS_API UClass* StaticClass<class AAISpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4_Stalker_AI_Source_BTFPS_AI_AISpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
