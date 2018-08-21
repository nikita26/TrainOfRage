// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "TrainOfRageGameMode.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrainOfRageGameMode() {}
// Cross Module References
	TRAINOFRAGE_API UClass* Z_Construct_UClass_ATrainOfRageGameMode_NoRegister();
	TRAINOFRAGE_API UClass* Z_Construct_UClass_ATrainOfRageGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TrainOfRage();
// End Cross Module References
	void ATrainOfRageGameMode::StaticRegisterNativesATrainOfRageGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATrainOfRageGameMode_NoRegister()
	{
		return ATrainOfRageGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ATrainOfRageGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_TrainOfRage();
			OuterClass = ATrainOfRageGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20880288u;


				static TCppClassTypeInfo<TCppClassTypeTraits<ATrainOfRageGameMode> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TrainOfRageGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("TrainOfRageGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("The GameMode defines the game being played. It governs the game rules, scoring, what actors\nare allowed to exist in this game type, and who may enter the game.\n\nThis game mode just sets the default pawn to be the MyCharacter asset, which is a subclass of TrainOfRageCharacter"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATrainOfRageGameMode, 3293438669);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATrainOfRageGameMode(Z_Construct_UClass_ATrainOfRageGameMode, &ATrainOfRageGameMode::StaticClass, TEXT("/Script/TrainOfRage"), TEXT("ATrainOfRageGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATrainOfRageGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
