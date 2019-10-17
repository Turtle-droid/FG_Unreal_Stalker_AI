// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAITargetInfo;
class AActor;
struct FAIStimulus;
#ifdef BTFPS_FPSAIController_generated_h
#error "FPSAIController.generated.h already included, missing '#pragma once' in FPSAIController.h"
#endif
#define BTFPS_FPSAIController_generated_h

#define UE4_Stalker_AI_Source_BTFPS_Controller_FPSAIController_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAITargetInfo_Statics; \
	BTFPS_API static class UScriptStruct* StaticStruct();


template<> BTFPS_API UScriptStruct* StaticStruct<struct FAITargetInfo>();

#define UE4_Stalker_AI_Source_BTFPS_Controller_FPSAIController_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllVisibleTargets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FAITargetInfo>*)Z_Param__Result=P_THIS->GetAllVisibleTargets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllTargets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FAITargetInfo>*)Z_Param__Result=P_THIS->GetAllTargets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTargetWithHighestAggro) \
	{ \
		P_GET_STRUCT_REF(FAITargetInfo,Z_Param_Out_OutTargetInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetTargetWithHighestAggro(Z_Param_Out_OutTargetInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnActorPerceptionUpdated) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActorPerceptionUpdated(Z_Param_Actor,Z_Param_Stimulus); \
		P_NATIVE_END; \
	}


#define UE4_Stalker_AI_Source_BTFPS_Controller_FPSAIController_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllVisibleTargets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FAITargetInfo>*)Z_Param__Result=P_THIS->GetAllVisibleTargets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllTargets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FAITargetInfo>*)Z_Param__Result=P_THIS->GetAllTargets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTargetWithHighestAggro) \
	{ \
		P_GET_STRUCT_REF(FAITargetInfo,Z_Param_Out_OutTargetInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetTargetWithHighestAggro(Z_Param_Out_OutTargetInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnActorPerceptionUpdated) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActorPerceptionUpdated(Z_Param_Actor,Z_Param_Stimulus); \
		P_NATIVE_END; \
	}


#define UE4_Stalker_AI_Source_BTFPS_Controller_FPSAIController_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIFPSController(); \
	friend struct Z_Construct_UClass_AAIFPSController_Statics; \
public: \
	DECLARE_CLASS(AAIFPSController, AAIController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BTFPS"), NO_API) \
	DECLARE_SERIALIZER(AAIFPSController)


#define UE4_Stalker_AI_Source_BTFPS_Controller_FPSAIController_h_25_INCLASS \
private: \
	static void StaticRegisterNativesAAIFPSController(); \
	friend struct Z_Construct_UClass_AAIFPSController_Statics; \
public: \
	DECLARE_CLASS(AAIFPSController, AAIController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BTFPS"), NO_API) \
	DECLARE_SERIALIZER(AAIFPSController)


#define UE4_Stalker_AI_Source_BTFPS_Controller_FPSAIController_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAIFPSController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIFPSController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIFPSController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIFPSController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIFPSController(AAIFPSController&&); \
	NO_API AAIFPSController(const AAIFPSController&); \
public:


#define UE4_Stalker_AI_Source_BTFPS_Controller_FPSAIController_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIFPSController(AAIFPSController&&); \
	NO_API AAIFPSController(const AAIFPSController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIFPSController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIFPSController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIFPSController)


#define UE4_Stalker_AI_Source_BTFPS_Controller_FPSAIController_h_25_PRIVATE_PROPERTY_OFFSET
#define UE4_Stalker_AI_Source_BTFPS_Controller_FPSAIController_h_22_PROLOG
#define UE4_Stalker_AI_Source_BTFPS_Controller_FPSAIController_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Stalker_AI_Source_BTFPS_Controller_FPSAIController_h_25_PRIVATE_PROPERTY_OFFSET \
	UE4_Stalker_AI_Source_BTFPS_Controller_FPSAIController_h_25_RPC_WRAPPERS \
	UE4_Stalker_AI_Source_BTFPS_Controller_FPSAIController_h_25_INCLASS \
	UE4_Stalker_AI_Source_BTFPS_Controller_FPSAIController_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4_Stalker_AI_Source_BTFPS_Controller_FPSAIController_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Stalker_AI_Source_BTFPS_Controller_FPSAIController_h_25_PRIVATE_PROPERTY_OFFSET \
	UE4_Stalker_AI_Source_BTFPS_Controller_FPSAIController_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4_Stalker_AI_Source_BTFPS_Controller_FPSAIController_h_25_INCLASS_NO_PURE_DECLS \
	UE4_Stalker_AI_Source_BTFPS_Controller_FPSAIController_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BTFPS_API UClass* StaticClass<class AAIFPSController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4_Stalker_AI_Source_BTFPS_Controller_FPSAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
