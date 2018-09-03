// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/background_dust.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodebackground_dust() {}
// Cross Module References
	PAINTRAIN_API UClass* Z_Construct_UClass_Abackground_dust_NoRegister();
	PAINTRAIN_API UClass* Z_Construct_UClass_Abackground_dust();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PainTrain();
// End Cross Module References
	void Abackground_dust::StaticRegisterNativesAbackground_dust()
	{
	}
	UClass* Z_Construct_UClass_Abackground_dust_NoRegister()
	{
		return Abackground_dust::StaticClass();
	}
	UClass* Z_Construct_UClass_Abackground_dust()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_PainTrain();
			OuterClass = Abackground_dust::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				static TCppClassTypeInfo<TCppClassTypeTraits<Abackground_dust> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("background_dust.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/background_dust.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(Abackground_dust, 3570555462);
	static FCompiledInDefer Z_CompiledInDefer_UClass_Abackground_dust(Z_Construct_UClass_Abackground_dust, &Abackground_dust::StaticClass, TEXT("/Script/PainTrain"), TEXT("Abackground_dust"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Abackground_dust);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
