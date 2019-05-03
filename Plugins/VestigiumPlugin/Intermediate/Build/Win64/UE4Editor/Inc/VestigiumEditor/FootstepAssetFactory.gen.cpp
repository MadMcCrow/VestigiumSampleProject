// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VestigiumEditor/Private/FootstepAssetFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFootstepAssetFactory() {}
// Cross Module References
	VESTIGIUMEDITOR_API UClass* Z_Construct_UClass_UFootstepAssetFactory_NoRegister();
	VESTIGIUMEDITOR_API UClass* Z_Construct_UClass_UFootstepAssetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_VestigiumEditor();
// End Cross Module References
	void UFootstepAssetFactory::StaticRegisterNativesUFootstepAssetFactory()
	{
	}
	UClass* Z_Construct_UClass_UFootstepAssetFactory_NoRegister()
	{
		return UFootstepAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UFootstepAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFootstepAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VestigiumEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FootstepAssetFactory.h" },
		{ "ModuleRelativePath", "Private/FootstepAssetFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "@class UFootstepAssetFactory\n   Generator for the asset to allow you to create footsteps Asset in Editor" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFootstepAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFootstepAssetFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFootstepAssetFactory_Statics::ClassParams = {
		&UFootstepAssetFactory::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFootstepAssetFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFootstepAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFootstepAssetFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFootstepAssetFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFootstepAssetFactory, 3542609916);
	template<> VESTIGIUMEDITOR_API UClass* StaticClass<UFootstepAssetFactory>()
	{
		return UFootstepAssetFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFootstepAssetFactory(Z_Construct_UClass_UFootstepAssetFactory, &UFootstepAssetFactory::StaticClass, TEXT("/Script/VestigiumEditor"), TEXT("UFootstepAssetFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFootstepAssetFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
