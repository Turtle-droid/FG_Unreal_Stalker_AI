// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
struct FVector;
class AActor;
#ifdef BTFPS_FPSWeapon_generated_h
#error "FPSWeapon.generated.h already included, missing '#pragma once' in FPSWeapon.h"
#endif
#define BTFPS_FPSWeapon_generated_h

#define UE4_Stalker_AI_Source_BTFPS_Weapon_FPSWeapon_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentAmmo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCurrentAmmo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanShoot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanShoot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAttack) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_AttackInstigator); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_StartLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ForwardVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Attack(Z_Param_AttackInstigator,Z_Param_Out_StartLocation,Z_Param_Out_ForwardVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReload) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Reload(); \
		P_NATIVE_END; \
	}


#define UE4_Stalker_AI_Source_BTFPS_Weapon_FPSWeapon_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentAmmo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCurrentAmmo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanShoot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanShoot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAttack) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_AttackInstigator); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_StartLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ForwardVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Attack(Z_Param_AttackInstigator,Z_Param_Out_StartLocation,Z_Param_Out_ForwardVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReload) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Reload(); \
		P_NATIVE_END; \
	}


#define UE4_Stalker_AI_Source_BTFPS_Weapon_FPSWeapon_h_9_EVENT_PARMS \
	struct FPSWeapon_eventBP_OnFiredBullet_Parms \
	{ \
		FVector HitLocation; \
		AActor* HitActor; \
	};


#define UE4_Stalker_AI_Source_BTFPS_Weapon_FPSWeapon_h_9_CALLBACK_WRAPPERS
#define UE4_Stalker_AI_Source_BTFPS_Weapon_FPSWeapon_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSWeapon(); \
	friend struct Z_Construct_UClass_AFPSWeapon_Statics; \
public: \
	DECLARE_CLASS(AFPSWeapon, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BTFPS"), NO_API) \
	DECLARE_SERIALIZER(AFPSWeapon)


#define UE4_Stalker_AI_Source_BTFPS_Weapon_FPSWeapon_h_9_INCLASS \
private: \
	static void StaticRegisterNativesAFPSWeapon(); \
	friend struct Z_Construct_UClass_AFPSWeapon_Statics; \
public: \
	DECLARE_CLASS(AFPSWeapon, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BTFPS"), NO_API) \
	DECLARE_SERIALIZER(AFPSWeapon)


#define UE4_Stalker_AI_Source_BTFPS_Weapon_FPSWeapon_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSWeapon(AFPSWeapon&&); \
	NO_API AFPSWeapon(const AFPSWeapon&); \
public:


#define UE4_Stalker_AI_Source_BTFPS_Weapon_FPSWeapon_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSWeapon(AFPSWeapon&&); \
	NO_API AFPSWeapon(const AFPSWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSWeapon)


#define UE4_Stalker_AI_Source_BTFPS_Weapon_FPSWeapon_h_9_PRIVATE_PROPERTY_OFFSET
#define UE4_Stalker_AI_Source_BTFPS_Weapon_FPSWeapon_h_6_PROLOG \
	UE4_Stalker_AI_Source_BTFPS_Weapon_FPSWeapon_h_9_EVENT_PARMS


#define UE4_Stalker_AI_Source_BTFPS_Weapon_FPSWeapon_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Stalker_AI_Source_BTFPS_Weapon_FPSWeapon_h_9_PRIVATE_PROPERTY_OFFSET \
	UE4_Stalker_AI_Source_BTFPS_Weapon_FPSWeapon_h_9_RPC_WRAPPERS \
	UE4_Stalker_AI_Source_BTFPS_Weapon_FPSWeapon_h_9_CALLBACK_WRAPPERS \
	UE4_Stalker_AI_Source_BTFPS_Weapon_FPSWeapon_h_9_INCLASS \
	UE4_Stalker_AI_Source_BTFPS_Weapon_FPSWeapon_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4_Stalker_AI_Source_BTFPS_Weapon_FPSWeapon_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Stalker_AI_Source_BTFPS_Weapon_FPSWeapon_h_9_PRIVATE_PROPERTY_OFFSET \
	UE4_Stalker_AI_Source_BTFPS_Weapon_FPSWeapon_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4_Stalker_AI_Source_BTFPS_Weapon_FPSWeapon_h_9_CALLBACK_WRAPPERS \
	UE4_Stalker_AI_Source_BTFPS_Weapon_FPSWeapon_h_9_INCLASS_NO_PURE_DECLS \
	UE4_Stalker_AI_Source_BTFPS_Weapon_FPSWeapon_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BTFPS_API UClass* StaticClass<class AFPSWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4_Stalker_AI_Source_BTFPS_Weapon_FPSWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
