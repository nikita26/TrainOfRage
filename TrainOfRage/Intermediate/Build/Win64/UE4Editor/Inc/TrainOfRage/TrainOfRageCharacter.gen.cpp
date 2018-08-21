// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "TrainOfRageCharacter.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrainOfRageCharacter() {}
// Cross Module References
	TRAINOFRAGE_API UClass* Z_Construct_UClass_ATrainOfRageCharacter_NoRegister();
	TRAINOFRAGE_API UClass* Z_Construct_UClass_ATrainOfRageCharacter();
	PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter();
	UPackage* Z_Construct_UPackage__Script_TrainOfRage();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void ATrainOfRageCharacter::StaticRegisterNativesATrainOfRageCharacter()
	{
	}
	UClass* Z_Construct_UClass_ATrainOfRageCharacter_NoRegister()
	{
		return ATrainOfRageCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_ATrainOfRageCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APaperCharacter();
			Z_Construct_UPackage__Script_TrainOfRage();
			OuterClass = ATrainOfRageCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20800080u;


				UProperty* NewProp_IdleAnimation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("IdleAnimation"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(IdleAnimation, ATrainOfRageCharacter), 0x0020080000000005, Z_Construct_UClass_UPaperFlipbook_NoRegister());
				UProperty* NewProp_RunningAnimation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RunningAnimation"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(RunningAnimation, ATrainOfRageCharacter), 0x0020080000000005, Z_Construct_UClass_UPaperFlipbook_NoRegister());
				UProperty* NewProp_CameraBoom = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CameraBoom"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CameraBoom, ATrainOfRageCharacter), 0x00400000000a001d, Z_Construct_UClass_USpringArmComponent_NoRegister());
				UProperty* NewProp_SideViewCameraComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SideViewCameraComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SideViewCameraComponent, ATrainOfRageCharacter), 0x00400000000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<ATrainOfRageCharacter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TrainOfRageCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("TrainOfRageCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("This class is the default character for TrainOfRage, and it is responsible for all\nphysical interaction between the player and the world.\n\nThe capsule component (inherited from ACharacter) handles collision with the world\nThe CharacterMovementComponent (inherited from ACharacter) handles movement of the collision capsule\nThe Sprite component (inherited from APaperCharacter) handles the visuals"));
				MetaData->SetValue(NewProp_IdleAnimation, TEXT("Category"), TEXT("Animations"));
				MetaData->SetValue(NewProp_IdleAnimation, TEXT("ModuleRelativePath"), TEXT("TrainOfRageCharacter.h"));
				MetaData->SetValue(NewProp_IdleAnimation, TEXT("ToolTip"), TEXT("The animation to play while idle (standing still)"));
				MetaData->SetValue(NewProp_RunningAnimation, TEXT("Category"), TEXT("Animations"));
				MetaData->SetValue(NewProp_RunningAnimation, TEXT("ModuleRelativePath"), TEXT("TrainOfRageCharacter.h"));
				MetaData->SetValue(NewProp_RunningAnimation, TEXT("ToolTip"), TEXT("The animation to play while running around"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ModuleRelativePath"), TEXT("TrainOfRageCharacter.h"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ToolTip"), TEXT("Camera boom positioning the camera beside the character"));
				MetaData->SetValue(NewProp_SideViewCameraComponent, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_SideViewCameraComponent, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_SideViewCameraComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_SideViewCameraComponent, TEXT("ModuleRelativePath"), TEXT("TrainOfRageCharacter.h"));
				MetaData->SetValue(NewProp_SideViewCameraComponent, TEXT("ToolTip"), TEXT("Side view camera"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATrainOfRageCharacter, 433434355);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATrainOfRageCharacter(Z_Construct_UClass_ATrainOfRageCharacter, &ATrainOfRageCharacter::StaticClass, TEXT("/Script/TrainOfRage"), TEXT("ATrainOfRageCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATrainOfRageCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
