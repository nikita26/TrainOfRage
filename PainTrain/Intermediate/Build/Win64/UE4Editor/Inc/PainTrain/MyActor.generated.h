// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PAINTRAIN_MyActor_generated_h
#error "MyActor.generated.h already included, missing '#pragma once' in MyActor.h"
#endif
#define PAINTRAIN_MyActor_generated_h

#define PainTrain_Source_PainTrain_MyActor_h_12_RPC_WRAPPERS
#define PainTrain_Source_PainTrain_MyActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define PainTrain_Source_PainTrain_MyActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyActor(); \
	friend PAINTRAIN_API class UClass* Z_Construct_UClass_AMyActor(); \
public: \
	DECLARE_CLASS(AMyActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PainTrain"), NO_API) \
	DECLARE_SERIALIZER(AMyActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PainTrain_Source_PainTrain_MyActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyActor(); \
	friend PAINTRAIN_API class UClass* Z_Construct_UClass_AMyActor(); \
public: \
	DECLARE_CLASS(AMyActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PainTrain"), NO_API) \
	DECLARE_SERIALIZER(AMyActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PainTrain_Source_PainTrain_MyActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyActor(AMyActor&&); \
	NO_API AMyActor(const AMyActor&); \
public:


#define PainTrain_Source_PainTrain_MyActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyActor(AMyActor&&); \
	NO_API AMyActor(const AMyActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyActor)


#define PainTrain_Source_PainTrain_MyActor_h_12_PRIVATE_PROPERTY_OFFSET
#define PainTrain_Source_PainTrain_MyActor_h_9_PROLOG
#define PainTrain_Source_PainTrain_MyActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PainTrain_Source_PainTrain_MyActor_h_12_PRIVATE_PROPERTY_OFFSET \
	PainTrain_Source_PainTrain_MyActor_h_12_RPC_WRAPPERS \
	PainTrain_Source_PainTrain_MyActor_h_12_INCLASS \
	PainTrain_Source_PainTrain_MyActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PainTrain_Source_PainTrain_MyActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PainTrain_Source_PainTrain_MyActor_h_12_PRIVATE_PROPERTY_OFFSET \
	PainTrain_Source_PainTrain_MyActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PainTrain_Source_PainTrain_MyActor_h_12_INCLASS_NO_PURE_DECLS \
	PainTrain_Source_PainTrain_MyActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PainTrain_Source_PainTrain_MyActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
