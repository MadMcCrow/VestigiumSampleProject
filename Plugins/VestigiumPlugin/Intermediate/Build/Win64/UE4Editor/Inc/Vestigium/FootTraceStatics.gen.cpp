// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Vestigium/Public/FootTraceStatics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFootTraceStatics() {}
// Cross Module References
	VESTIGIUM_API UClass* Z_Construct_UClass_UFootTraceStatics_NoRegister();
	VESTIGIUM_API UClass* Z_Construct_UClass_UFootTraceStatics();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Vestigium();
// End Cross Module References
	void UFootTraceStatics::StaticRegisterNativesUFootTraceStatics()
	{
	}
	UClass* Z_Construct_UClass_UFootTraceStatics_NoRegister()
	{
		return UFootTraceStatics::StaticClass();
	}
	struct Z_Construct_UClass_UFootTraceStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFootTraceStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Vestigium,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootTraceStatics_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FootTraceStatics.h" },
		{ "ModuleRelativePath", "Public/FootTraceStatics.h" },
		{ "ToolTip", "Static Class for doing Async traces without" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFootTraceStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFootTraceStatics>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFootTraceStatics_Statics::ClassParams = {
		&UFootTraceStatics::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFootTraceStatics_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFootTraceStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFootTraceStatics()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFootTraceStatics_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFootTraceStatics, 1404371616);
	template<> VESTIGIUM_API UClass* StaticClass<UFootTraceStatics>()
	{
		return UFootTraceStatics::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFootTraceStatics(Z_Construct_UClass_UFootTraceStatics, &UFootTraceStatics::StaticClass, TEXT("/Script/Vestigium"), TEXT("UFootTraceStatics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFootTraceStatics);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
