// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFPSWeapon;
#ifdef BTFPS_FPSCharacter_generated_h
#error "FPSCharacter.generated.h already included, missing '#pragma once' in FPSCharacter.h"
#endif
#define BTFPS_FPSCharacter_generated_h

#define UE4_Stalker_AI_Source_BTFPS_Character_FPSCharacter_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReload) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Reload(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFPSWeapon**)Z_Param__Result=P_THIS->GetCurrentWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMovementSpeedModifier) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMovementSpeedModifier(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetADS) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetADS(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRunning) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsRunning(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWantsToAttack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->WantsToAttack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTeam) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetTeam(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHeal) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AmountToHeal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Heal(Z_Param_AmountToHeal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDead) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDead(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFPSWeapon**)Z_Param__Result=P_THIS->GetWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryToAttackWithWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TryToAttackWithWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipNewWeapon) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_NewWeapon); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EquipNewWeapon(Z_Param_NewWeapon); \
		P_NATIVE_END; \
	}


#define UE4_Stalker_AI_Source_BTFPS_Character_FPSCharacter_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReload) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Reload(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFPSWeapon**)Z_Param__Result=P_THIS->GetCurrentWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMovementSpeedModifier) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMovementSpeedModifier(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetADS) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetADS(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRunning) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsRunning(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWantsToAttack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->WantsToAttack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTeam) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetTeam(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHeal) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AmountToHeal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Heal(Z_Param_AmountToHeal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDead) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDead(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFPSWeapon**)Z_Param__Result=P_THIS->GetWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryToAttackWithWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TryToAttackWithWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipNewWeapon) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_NewWeapon); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EquipNewWeapon(Z_Param_NewWeapon); \
		P_NATIVE_END; \
	}


#define UE4_Stalker_AI_Source_BTFPS_Character_FPSCharacter_h_10_EVENT_PARMS
#define UE4_Stalker_AI_Source_BTFPS_Character_FPSCharacter_h_10_CALLBACK_WRAPPERS
#define UE4_Stalker_AI_Source_BTFPS_Character_FPSCharacter_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend struct Z_Construct_UClass_AFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BTFPS"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AFPSCharacter*>(this); }


#define UE4_Stalker_AI_Source_BTFPS_Character_FPSCharacter_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend struct Z_Construct_UClass_AFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BTFPS"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AFPSCharacter*>(this); }


#define UE4_Stalker_AI_Source_BTFPS_Character_FPSCharacter_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCharacter(AFPSCharacter&&); \
	NO_API AFPSCharacter(const AFPSCharacter&); \
public:


#define UE4_Stalker_AI_Source_BTFPS_Character_FPSCharacter_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCharacter(AFPSCharacter&&); \
	NO_API AFPSCharacter(const AFPSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSCharacter)


#define UE4_Stalker_AI_Source_BTFPS_Character_FPSCharacter_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(AFPSCharacter, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__Arms() { return STRUCT_OFFSET(AFPSCharacter, Arms); } \
	FORCEINLINE static uint32 __PPO__RecoilComponent() { return STRUCT_OFFSET(AFPSCharacter, RecoilComponent); } \
	FORCEINLINE static uint32 __PPO__CurrentWeapon() { return STRUCT_OFFSET(AFPSCharacter, CurrentWeapon); } \
	FORCEINLINE static uint32 __PPO__WeaponArmsAttachName() { return STRUCT_OFFSET(AFPSCharacter, WeaponArmsAttachName); } \
	FORCEINLINE static uint32 __PPO__WeaponBodyAttachName() { return STRUCT_OFFSET(AFPSCharacter, WeaponBodyAttachName); } \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(AFPSCharacter, Health); }


#define UE4_Stalker_AI_Source_BTFPS_Character_FPSCharacter_h_7_PROLOG \
	UE4_Stalker_AI_Source_BTFPS_Character_FPSCharacter_h_10_EVENT_PARMS


#define UE4_Stalker_AI_Source_BTFPS_Character_FPSCharacter_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Stalker_AI_Source_BTFPS_Character_FPSCharacter_h_10_PRIVATE_PROPERTY_OFFSET \
	UE4_Stalker_AI_Source_BTFPS_Character_FPSCharacter_h_10_RPC_WRAPPERS \
	UE4_Stalker_AI_Source_BTFPS_Character_FPSCharacter_h_10_CALLBACK_WRAPPERS \
	UE4_Stalker_AI_Source_BTFPS_Character_FPSCharacter_h_10_INCLASS \
	UE4_Stalker_AI_Source_BTFPS_Character_FPSCharacter_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4_Stalker_AI_Source_BTFPS_Character_FPSCharacter_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Stalker_AI_Source_BTFPS_Character_FPSCharacter_h_10_PRIVATE_PROPERTY_OFFSET \
	UE4_Stalker_AI_Source_BTFPS_Character_FPSCharacter_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4_Stalker_AI_Source_BTFPS_Character_FPSCharacter_h_10_CALLBACK_WRAPPERS \
	UE4_Stalker_AI_Source_BTFPS_Character_FPSCharacter_h_10_INCLASS_NO_PURE_DECLS \
	UE4_Stalker_AI_Source_BTFPS_Character_FPSCharacter_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BTFPS_API UClass* StaticClass<class AFPSCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4_Stalker_AI_Source_BTFPS_Character_FPSCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
