// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TRAINOFRAGE_TrainOfRageCharacter_generated_h
#error "TrainOfRageCharacter.generated.h already included, missing '#pragma once' in TrainOfRageCharacter.h"
#endif
#define TRAINOFRAGE_TrainOfRageCharacter_generated_h

#define TrainOfRage_Source_TrainOfRage_TrainOfRageCharacter_h_22_RPC_WRAPPERS
#define TrainOfRage_Source_TrainOfRage_TrainOfRageCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define TrainOfRage_Source_TrainOfRage_TrainOfRageCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATrainOfRageCharacter(); \
	friend TRAINOFRAGE_API class UClass* Z_Construct_UClass_ATrainOfRageCharacter(); \
public: \
	DECLARE_CLASS(ATrainOfRageCharacter, APaperCharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TrainOfRage"), NO_API) \
	DECLARE_SERIALIZER(ATrainOfRageCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define TrainOfRage_Source_TrainOfRage_TrainOfRageCharacter_h_22_INCLASS \
private: \
	static void StaticRegisterNativesATrainOfRageCharacter(); \
	friend TRAINOFRAGE_API class UClass* Z_Construct_UClass_ATrainOfRageCharacter(); \
public: \
	DECLARE_CLASS(ATrainOfRageCharacter, APaperCharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TrainOfRage"), NO_API) \
	DECLARE_SERIALIZER(ATrainOfRageCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define TrainOfRage_Source_TrainOfRage_TrainOfRageCharacter_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATrainOfRageCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATrainOfRageCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATrainOfRageCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATrainOfRageCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATrainOfRageCharacter(ATrainOfRageCharacter&&); \
	NO_API ATrainOfRageCharacter(const ATrainOfRageCharacter&); \
public:


#define TrainOfRage_Source_TrainOfRage_TrainOfRageCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATrainOfRageCharacter(ATrainOfRageCharacter&&); \
	NO_API ATrainOfRageCharacter(const ATrainOfRageCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATrainOfRageCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATrainOfRageCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATrainOfRageCharacter)


#define TrainOfRage_Source_TrainOfRage_TrainOfRageCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(ATrainOfRageCharacter, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ATrainOfRageCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__RunningAnimation() { return STRUCT_OFFSET(ATrainOfRageCharacter, RunningAnimation); } \
	FORCEINLINE static uint32 __PPO__IdleAnimation() { return STRUCT_OFFSET(ATrainOfRageCharacter, IdleAnimation); }


#define TrainOfRage_Source_TrainOfRage_TrainOfRageCharacter_h_19_PROLOG
#define TrainOfRage_Source_TrainOfRage_TrainOfRageCharacter_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TrainOfRage_Source_TrainOfRage_TrainOfRageCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	TrainOfRage_Source_TrainOfRage_TrainOfRageCharacter_h_22_RPC_WRAPPERS \
	TrainOfRage_Source_TrainOfRage_TrainOfRageCharacter_h_22_INCLASS \
	TrainOfRage_Source_TrainOfRage_TrainOfRageCharacter_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TrainOfRage_Source_TrainOfRage_TrainOfRageCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TrainOfRage_Source_TrainOfRage_TrainOfRageCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	TrainOfRage_Source_TrainOfRage_TrainOfRageCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	TrainOfRage_Source_TrainOfRage_TrainOfRageCharacter_h_22_INCLASS_NO_PURE_DECLS \
	TrainOfRage_Source_TrainOfRage_TrainOfRageCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TrainOfRage_Source_TrainOfRage_TrainOfRageCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
