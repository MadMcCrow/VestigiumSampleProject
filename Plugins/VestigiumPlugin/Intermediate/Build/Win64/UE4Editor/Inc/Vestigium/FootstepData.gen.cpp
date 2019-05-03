// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Vestigium/Public/FootstepData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFootstepData() {}
// Cross Module References
	VESTIGIUM_API UScriptStruct* Z_Construct_UScriptStruct_FFootstepEffectData();
	UPackage* Z_Construct_UPackage__Script_Vestigium();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	VESTIGIUM_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicalParticleDataArray();
	VESTIGIUM_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicalDecalDataArray();
	ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency_NoRegister();
	VESTIGIUM_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicalSoundDataArray();
	VESTIGIUM_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicalDecalData();
	VESTIGIUM_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicalSoundData();
	VESTIGIUM_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicalParticleData();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPhysicalSurface();
	VESTIGIUM_API UScriptStruct* Z_Construct_UScriptStruct_FDecalMaterial();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	VESTIGIUM_API UClass* Z_Construct_UClass_UFootstepData_NoRegister();
	VESTIGIUM_API UClass* Z_Construct_UClass_UFootstepData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	VESTIGIUM_API UFunction* Z_Construct_UFunction_UFootstepData_GetData();
// End Cross Module References
class UScriptStruct* FFootstepEffectData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VESTIGIUM_API uint32 Get_Z_Construct_UScriptStruct_FFootstepEffectData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFootstepEffectData, Z_Construct_UPackage__Script_Vestigium(), TEXT("FootstepEffectData"), sizeof(FFootstepEffectData), Get_Z_Construct_UScriptStruct_FFootstepEffectData_Hash());
	}
	return Singleton;
}
template<> VESTIGIUM_API UScriptStruct* StaticStruct<FFootstepEffectData>()
{
	return FFootstepEffectData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFootstepEffectData(FFootstepEffectData::StaticStruct, TEXT("/Script/Vestigium"), TEXT("FootstepEffectData"), false, nullptr, nullptr);
static struct FScriptStruct_Vestigium_StaticRegisterNativesFFootstepEffectData
{
	FScriptStruct_Vestigium_StaticRegisterNativesFFootstepEffectData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FootstepEffectData")),new UScriptStruct::TCppStructOps<FFootstepEffectData>);
	}
} ScriptStruct_Vestigium_StaticRegisterNativesFFootstepEffectData;
	struct Z_Construct_UScriptStruct_FFootstepEffectData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleSystems_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParticleSystems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseParticles_MetaData[];
#endif
		static void NewProp_bUseParticles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Decals_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Decals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDecals_MetaData[];
#endif
		static void NewProp_bUseDecals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDecals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConcurrencySetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConcurrencySetting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDontUseSoundConcurrency_MetaData[];
#endif
		static void NewProp_bDontUseSoundConcurrency_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDontUseSoundConcurrency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Sounds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootstepEffectData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FootstepData.h" },
		{ "ToolTip", "@brief FFootstepEffectData Asset Struct\nStore all valid information about a footstep" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFootstepEffectData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_ParticleSystems_MetaData[] = {
		{ "Category", "Particles" },
		{ "EditCondition", "bUseParticles" },
		{ "ModuleRelativePath", "Public/FootstepData.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "@brief ParticleSystem Footstep particle system\nfor now only one system is supported so you will need to combine all your emitters in one" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_ParticleSystems = { "ParticleSystems", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFootstepEffectData, ParticleSystems), Z_Construct_UScriptStruct_FPhysicalParticleDataArray, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_ParticleSystems_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_ParticleSystems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_bUseParticles_MetaData[] = {
		{ "Category", "Particles" },
		{ "DisplayName", "Use Particle system" },
		{ "ModuleRelativePath", "Public/FootstepData.h" },
		{ "ToolTip", "@brief bUseParticles boolean flag to avoid using particles\nSet to true to use particles" },
	};
#endif
	void Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_bUseParticles_SetBit(void* Obj)
	{
		((FFootstepEffectData*)Obj)->bUseParticles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_bUseParticles = { "bUseParticles", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFootstepEffectData), &Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_bUseParticles_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_bUseParticles_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_bUseParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_Decals_MetaData[] = {
		{ "Category", "Decals" },
		{ "EditCondition", "bUseDecals" },
		{ "ModuleRelativePath", "Public/FootstepData.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "@brief Footprints decal\nArray of all the decals, one for each Physical Surface type" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_Decals = { "Decals", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFootstepEffectData, Decals), Z_Construct_UScriptStruct_FPhysicalDecalDataArray, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_Decals_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_Decals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_bUseDecals_MetaData[] = {
		{ "Category", "Decals" },
		{ "DisplayName", "Use Decals" },
		{ "ModuleRelativePath", "Public/FootstepData.h" },
		{ "ToolTip", "@brief bUseParticles boolean flag to avoid using particles\nSet to true to use particles" },
	};
#endif
	void Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_bUseDecals_SetBit(void* Obj)
	{
		((FFootstepEffectData*)Obj)->bUseDecals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_bUseDecals = { "bUseDecals", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFootstepEffectData), &Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_bUseDecals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_bUseDecals_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_bUseDecals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_ConcurrencySetting_MetaData[] = {
		{ "Category", "Sound" },
		{ "EditCondition", "!bDontUseSoundConcurrency" },
		{ "ModuleRelativePath", "Public/FootstepData.h" },
		{ "ToolTip", "@brief ConcurrencySetting\nConcurrency setting override for this sound to play" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_ConcurrencySetting = { "ConcurrencySetting", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFootstepEffectData, ConcurrencySetting), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_ConcurrencySetting_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_ConcurrencySetting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_bDontUseSoundConcurrency_MetaData[] = {
		{ "Category", "Sound" },
		{ "DisplayName", "Use Default Sound Concurrency Settings" },
		{ "ModuleRelativePath", "Public/FootstepData.h" },
		{ "ToolTip", "@brief boolean flag to avoid using ConcurrencySetting\nInstead we use default sound concurrency" },
	};
#endif
	void Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_bDontUseSoundConcurrency_SetBit(void* Obj)
	{
		((FFootstepEffectData*)Obj)->bDontUseSoundConcurrency = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_bDontUseSoundConcurrency = { "bDontUseSoundConcurrency", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFootstepEffectData), &Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_bDontUseSoundConcurrency_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_bDontUseSoundConcurrency_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_bDontUseSoundConcurrency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_Sounds_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/FootstepData.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "@brief Footsteps sounds\nArray of all the sounds, one for each Physical Surface type" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_Sounds = { "Sounds", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFootstepEffectData, Sounds), Z_Construct_UScriptStruct_FPhysicalSoundDataArray, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_Sounds_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_Sounds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFootstepEffectData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_ParticleSystems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_bUseParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_Decals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_bUseDecals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_ConcurrencySetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_bDontUseSoundConcurrency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_Sounds,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFootstepEffectData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Vestigium,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"FootstepEffectData",
		sizeof(FFootstepEffectData),
		alignof(FFootstepEffectData),
		Z_Construct_UScriptStruct_FFootstepEffectData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FFootstepEffectData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFootstepEffectData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFootstepEffectData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFootstepEffectData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFootstepEffectData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Vestigium();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FootstepEffectData"), sizeof(FFootstepEffectData), Get_Z_Construct_UScriptStruct_FFootstepEffectData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFootstepEffectData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFootstepEffectData_Hash() { return 4159443283U; }
class UScriptStruct* FPhysicalDecalDataArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VESTIGIUM_API uint32 Get_Z_Construct_UScriptStruct_FPhysicalDecalDataArray_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicalDecalDataArray, Z_Construct_UPackage__Script_Vestigium(), TEXT("PhysicalDecalDataArray"), sizeof(FPhysicalDecalDataArray), Get_Z_Construct_UScriptStruct_FPhysicalDecalDataArray_Hash());
	}
	return Singleton;
}
template<> VESTIGIUM_API UScriptStruct* StaticStruct<FPhysicalDecalDataArray>()
{
	return FPhysicalDecalDataArray::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPhysicalDecalDataArray(FPhysicalDecalDataArray::StaticStruct, TEXT("/Script/Vestigium"), TEXT("PhysicalDecalDataArray"), false, nullptr, nullptr);
static struct FScriptStruct_Vestigium_StaticRegisterNativesFPhysicalDecalDataArray
{
	FScriptStruct_Vestigium_StaticRegisterNativesFPhysicalDecalDataArray()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PhysicalDecalDataArray")),new UScriptStruct::TCppStructOps<FPhysicalDecalDataArray>);
	}
} ScriptStruct_Vestigium_StaticRegisterNativesFPhysicalDecalDataArray;
	struct Z_Construct_UScriptStruct_FPhysicalDecalDataArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalDecals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PhysicalDecals;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PhysicalDecals_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalDecalDataArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FootstepData.h" },
		{ "ToolTip", "@brief FFootstepEffectData Asset Struct\nStore all valid information about a footstep\n// : public FPhysicalDataArray<FPhysicalParticleData>" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhysicalDecalDataArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicalDecalDataArray>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalDecalDataArray_Statics::NewProp_PhysicalDecals_MetaData[] = {
		{ "Category", "Decals" },
		{ "EditFixedOrder", "" },
		{ "ModuleRelativePath", "Public/FootstepData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPhysicalDecalDataArray_Statics::NewProp_PhysicalDecals = { "PhysicalDecals", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicalDecalDataArray, PhysicalDecals), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalDecalDataArray_Statics::NewProp_PhysicalDecals_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalDecalDataArray_Statics::NewProp_PhysicalDecals_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicalDecalDataArray_Statics::NewProp_PhysicalDecals_Inner = { "PhysicalDecals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPhysicalDecalData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicalDecalDataArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalDecalDataArray_Statics::NewProp_PhysicalDecals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalDecalDataArray_Statics::NewProp_PhysicalDecals_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicalDecalDataArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Vestigium,
		nullptr,
		&NewStructOps,
		"PhysicalDecalDataArray",
		sizeof(FPhysicalDecalDataArray),
		alignof(FPhysicalDecalDataArray),
		Z_Construct_UScriptStruct_FPhysicalDecalDataArray_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalDecalDataArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalDecalDataArray_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalDecalDataArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhysicalDecalDataArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPhysicalDecalDataArray_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Vestigium();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PhysicalDecalDataArray"), sizeof(FPhysicalDecalDataArray), Get_Z_Construct_UScriptStruct_FPhysicalDecalDataArray_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPhysicalDecalDataArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPhysicalDecalDataArray_Hash() { return 3849412008U; }
class UScriptStruct* FPhysicalSoundDataArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VESTIGIUM_API uint32 Get_Z_Construct_UScriptStruct_FPhysicalSoundDataArray_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicalSoundDataArray, Z_Construct_UPackage__Script_Vestigium(), TEXT("PhysicalSoundDataArray"), sizeof(FPhysicalSoundDataArray), Get_Z_Construct_UScriptStruct_FPhysicalSoundDataArray_Hash());
	}
	return Singleton;
}
template<> VESTIGIUM_API UScriptStruct* StaticStruct<FPhysicalSoundDataArray>()
{
	return FPhysicalSoundDataArray::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPhysicalSoundDataArray(FPhysicalSoundDataArray::StaticStruct, TEXT("/Script/Vestigium"), TEXT("PhysicalSoundDataArray"), false, nullptr, nullptr);
static struct FScriptStruct_Vestigium_StaticRegisterNativesFPhysicalSoundDataArray
{
	FScriptStruct_Vestigium_StaticRegisterNativesFPhysicalSoundDataArray()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PhysicalSoundDataArray")),new UScriptStruct::TCppStructOps<FPhysicalSoundDataArray>);
	}
} ScriptStruct_Vestigium_StaticRegisterNativesFPhysicalSoundDataArray;
	struct Z_Construct_UScriptStruct_FPhysicalSoundDataArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalSounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PhysicalSounds;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PhysicalSounds_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalSoundDataArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FootstepData.h" },
		{ "ToolTip", "@brief FFootstepEffectData Asset Struct\nStore all valid information about a footstep\n// : public FPhysicalDataArray<FPhysicalSoundData>" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhysicalSoundDataArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicalSoundDataArray>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalSoundDataArray_Statics::NewProp_PhysicalSounds_MetaData[] = {
		{ "Category", "PhysicalSoundDataArray" },
		{ "EditFixedOrder", "" },
		{ "ModuleRelativePath", "Public/FootstepData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPhysicalSoundDataArray_Statics::NewProp_PhysicalSounds = { "PhysicalSounds", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicalSoundDataArray, PhysicalSounds), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalSoundDataArray_Statics::NewProp_PhysicalSounds_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalSoundDataArray_Statics::NewProp_PhysicalSounds_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicalSoundDataArray_Statics::NewProp_PhysicalSounds_Inner = { "PhysicalSounds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPhysicalSoundData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicalSoundDataArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalSoundDataArray_Statics::NewProp_PhysicalSounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalSoundDataArray_Statics::NewProp_PhysicalSounds_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicalSoundDataArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Vestigium,
		nullptr,
		&NewStructOps,
		"PhysicalSoundDataArray",
		sizeof(FPhysicalSoundDataArray),
		alignof(FPhysicalSoundDataArray),
		Z_Construct_UScriptStruct_FPhysicalSoundDataArray_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalSoundDataArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalSoundDataArray_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalSoundDataArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhysicalSoundDataArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPhysicalSoundDataArray_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Vestigium();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PhysicalSoundDataArray"), sizeof(FPhysicalSoundDataArray), Get_Z_Construct_UScriptStruct_FPhysicalSoundDataArray_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPhysicalSoundDataArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPhysicalSoundDataArray_Hash() { return 1705903006U; }
class UScriptStruct* FPhysicalParticleDataArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VESTIGIUM_API uint32 Get_Z_Construct_UScriptStruct_FPhysicalParticleDataArray_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicalParticleDataArray, Z_Construct_UPackage__Script_Vestigium(), TEXT("PhysicalParticleDataArray"), sizeof(FPhysicalParticleDataArray), Get_Z_Construct_UScriptStruct_FPhysicalParticleDataArray_Hash());
	}
	return Singleton;
}
template<> VESTIGIUM_API UScriptStruct* StaticStruct<FPhysicalParticleDataArray>()
{
	return FPhysicalParticleDataArray::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPhysicalParticleDataArray(FPhysicalParticleDataArray::StaticStruct, TEXT("/Script/Vestigium"), TEXT("PhysicalParticleDataArray"), false, nullptr, nullptr);
static struct FScriptStruct_Vestigium_StaticRegisterNativesFPhysicalParticleDataArray
{
	FScriptStruct_Vestigium_StaticRegisterNativesFPhysicalParticleDataArray()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PhysicalParticleDataArray")),new UScriptStruct::TCppStructOps<FPhysicalParticleDataArray>);
	}
} ScriptStruct_Vestigium_StaticRegisterNativesFPhysicalParticleDataArray;
	struct Z_Construct_UScriptStruct_FPhysicalParticleDataArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalParticleSystems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PhysicalParticleSystems;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PhysicalParticleSystems_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalParticleDataArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FootstepData.h" },
		{ "ToolTip", "@brief FFootstepEffectData Asset Struct\nStore all valid information about a footstep\n// : public FPhysicalDataArray<FPhysicalParticleData>" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhysicalParticleDataArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicalParticleDataArray>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalParticleDataArray_Statics::NewProp_PhysicalParticleSystems_MetaData[] = {
		{ "Category", "PhysicalParticleDataArray" },
		{ "EditFixedOrder", "" },
		{ "ModuleRelativePath", "Public/FootstepData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPhysicalParticleDataArray_Statics::NewProp_PhysicalParticleSystems = { "PhysicalParticleSystems", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicalParticleDataArray, PhysicalParticleSystems), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalParticleDataArray_Statics::NewProp_PhysicalParticleSystems_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalParticleDataArray_Statics::NewProp_PhysicalParticleSystems_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicalParticleDataArray_Statics::NewProp_PhysicalParticleSystems_Inner = { "PhysicalParticleSystems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPhysicalParticleData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicalParticleDataArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalParticleDataArray_Statics::NewProp_PhysicalParticleSystems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalParticleDataArray_Statics::NewProp_PhysicalParticleSystems_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicalParticleDataArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Vestigium,
		nullptr,
		&NewStructOps,
		"PhysicalParticleDataArray",
		sizeof(FPhysicalParticleDataArray),
		alignof(FPhysicalParticleDataArray),
		Z_Construct_UScriptStruct_FPhysicalParticleDataArray_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalParticleDataArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalParticleDataArray_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalParticleDataArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhysicalParticleDataArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPhysicalParticleDataArray_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Vestigium();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PhysicalParticleDataArray"), sizeof(FPhysicalParticleDataArray), Get_Z_Construct_UScriptStruct_FPhysicalParticleDataArray_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPhysicalParticleDataArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPhysicalParticleDataArray_Hash() { return 3994169465U; }
class UScriptStruct* FPhysicalSoundData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VESTIGIUM_API uint32 Get_Z_Construct_UScriptStruct_FPhysicalSoundData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicalSoundData, Z_Construct_UPackage__Script_Vestigium(), TEXT("PhysicalSoundData"), sizeof(FPhysicalSoundData), Get_Z_Construct_UScriptStruct_FPhysicalSoundData_Hash());
	}
	return Singleton;
}
template<> VESTIGIUM_API UScriptStruct* StaticStruct<FPhysicalSoundData>()
{
	return FPhysicalSoundData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPhysicalSoundData(FPhysicalSoundData::StaticStruct, TEXT("/Script/Vestigium"), TEXT("PhysicalSoundData"), false, nullptr, nullptr);
static struct FScriptStruct_Vestigium_StaticRegisterNativesFPhysicalSoundData
{
	FScriptStruct_Vestigium_StaticRegisterNativesFPhysicalSoundData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PhysicalSoundData")),new UScriptStruct::TCppStructOps<FPhysicalSoundData>);
	}
} ScriptStruct_Vestigium_StaticRegisterNativesFPhysicalSoundData;
	struct Z_Construct_UScriptStruct_FPhysicalSoundData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SurfaceType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SurfaceName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalSoundData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FootstepData.h" },
		{ "ToolTip", "@brief FFootstepEffectData Asset Struct\nStore all valid information about a footstep" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhysicalSoundData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicalSoundData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalSoundData_Statics::NewProp_SoundBase_MetaData[] = {
		{ "Category", "PhysicalSoundData" },
		{ "ModuleRelativePath", "Public/FootstepData.h" },
		{ "ToolTip", "@brief SurfaceName PhysicalSurface name found on Engine settings" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPhysicalSoundData_Statics::NewProp_SoundBase = { "SoundBase", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicalSoundData, SoundBase), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalSoundData_Statics::NewProp_SoundBase_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalSoundData_Statics::NewProp_SoundBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalSoundData_Statics::NewProp_SurfaceType_MetaData[] = {
		{ "Category", "PhysicalSoundData" },
		{ "ModuleRelativePath", "Public/FootstepData.h" },
		{ "ToolTip", "@brief SurfaceType  PhysicalSurface enum for comparison" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPhysicalSoundData_Statics::NewProp_SurfaceType = { "SurfaceType", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicalSoundData, SurfaceType), Z_Construct_UEnum_Engine_EPhysicalSurface, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalSoundData_Statics::NewProp_SurfaceType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalSoundData_Statics::NewProp_SurfaceType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalSoundData_Statics::NewProp_SurfaceName_MetaData[] = {
		{ "Category", "PhysicalSoundData" },
		{ "ModuleRelativePath", "Public/FootstepData.h" },
		{ "ToolTip", "@brief SurfaceName PhysicalSurface name found on Engine settings" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPhysicalSoundData_Statics::NewProp_SurfaceName = { "SurfaceName", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicalSoundData, SurfaceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalSoundData_Statics::NewProp_SurfaceName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalSoundData_Statics::NewProp_SurfaceName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicalSoundData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalSoundData_Statics::NewProp_SoundBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalSoundData_Statics::NewProp_SurfaceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalSoundData_Statics::NewProp_SurfaceName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicalSoundData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Vestigium,
		nullptr,
		&NewStructOps,
		"PhysicalSoundData",
		sizeof(FPhysicalSoundData),
		alignof(FPhysicalSoundData),
		Z_Construct_UScriptStruct_FPhysicalSoundData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalSoundData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000211),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalSoundData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalSoundData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhysicalSoundData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPhysicalSoundData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Vestigium();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PhysicalSoundData"), sizeof(FPhysicalSoundData), Get_Z_Construct_UScriptStruct_FPhysicalSoundData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPhysicalSoundData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPhysicalSoundData_Hash() { return 877898264U; }
class UScriptStruct* FPhysicalDecalData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VESTIGIUM_API uint32 Get_Z_Construct_UScriptStruct_FPhysicalDecalData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicalDecalData, Z_Construct_UPackage__Script_Vestigium(), TEXT("PhysicalDecalData"), sizeof(FPhysicalDecalData), Get_Z_Construct_UScriptStruct_FPhysicalDecalData_Hash());
	}
	return Singleton;
}
template<> VESTIGIUM_API UScriptStruct* StaticStruct<FPhysicalDecalData>()
{
	return FPhysicalDecalData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPhysicalDecalData(FPhysicalDecalData::StaticStruct, TEXT("/Script/Vestigium"), TEXT("PhysicalDecalData"), false, nullptr, nullptr);
static struct FScriptStruct_Vestigium_StaticRegisterNativesFPhysicalDecalData
{
	FScriptStruct_Vestigium_StaticRegisterNativesFPhysicalDecalData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PhysicalDecalData")),new UScriptStruct::TCppStructOps<FPhysicalDecalData>);
	}
} ScriptStruct_Vestigium_StaticRegisterNativesFPhysicalDecalData;
	struct Z_Construct_UScriptStruct_FPhysicalDecalData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DecalMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SurfaceType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SurfaceName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalDecalData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FootstepData.h" },
		{ "ToolTip", "@brief FFootstepEffectData Asset Struct\nStore all valid information about a footstep" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhysicalDecalData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicalDecalData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalDecalData_Statics::NewProp_DecalMaterial_MetaData[] = {
		{ "Category", "PhysicalDecalData" },
		{ "ModuleRelativePath", "Public/FootstepData.h" },
		{ "ToolTip", "@brief DecalMaterial MaterialInterface for Decal associated" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicalDecalData_Statics::NewProp_DecalMaterial = { "DecalMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicalDecalData, DecalMaterial), Z_Construct_UScriptStruct_FDecalMaterial, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalDecalData_Statics::NewProp_DecalMaterial_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalDecalData_Statics::NewProp_DecalMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalDecalData_Statics::NewProp_SurfaceType_MetaData[] = {
		{ "Category", "PhysicalDecalData" },
		{ "ModuleRelativePath", "Public/FootstepData.h" },
		{ "ToolTip", "@brief SurfaceType  PhysicalSurface enum for comparison" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPhysicalDecalData_Statics::NewProp_SurfaceType = { "SurfaceType", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicalDecalData, SurfaceType), Z_Construct_UEnum_Engine_EPhysicalSurface, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalDecalData_Statics::NewProp_SurfaceType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalDecalData_Statics::NewProp_SurfaceType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalDecalData_Statics::NewProp_SurfaceName_MetaData[] = {
		{ "Category", "PhysicalDecalData" },
		{ "ModuleRelativePath", "Public/FootstepData.h" },
		{ "ToolTip", "@brief SurfaceName PhysicalSurface name found on Engine settings" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPhysicalDecalData_Statics::NewProp_SurfaceName = { "SurfaceName", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicalDecalData, SurfaceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalDecalData_Statics::NewProp_SurfaceName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalDecalData_Statics::NewProp_SurfaceName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicalDecalData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalDecalData_Statics::NewProp_DecalMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalDecalData_Statics::NewProp_SurfaceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalDecalData_Statics::NewProp_SurfaceName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicalDecalData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Vestigium,
		nullptr,
		&NewStructOps,
		"PhysicalDecalData",
		sizeof(FPhysicalDecalData),
		alignof(FPhysicalDecalData),
		Z_Construct_UScriptStruct_FPhysicalDecalData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalDecalData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000211),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalDecalData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalDecalData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhysicalDecalData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPhysicalDecalData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Vestigium();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PhysicalDecalData"), sizeof(FPhysicalDecalData), Get_Z_Construct_UScriptStruct_FPhysicalDecalData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPhysicalDecalData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPhysicalDecalData_Hash() { return 1742105491U; }
class UScriptStruct* FDecalMaterial::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VESTIGIUM_API uint32 Get_Z_Construct_UScriptStruct_FDecalMaterial_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDecalMaterial, Z_Construct_UPackage__Script_Vestigium(), TEXT("DecalMaterial"), sizeof(FDecalMaterial), Get_Z_Construct_UScriptStruct_FDecalMaterial_Hash());
	}
	return Singleton;
}
template<> VESTIGIUM_API UScriptStruct* StaticStruct<FDecalMaterial>()
{
	return FDecalMaterial::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDecalMaterial(FDecalMaterial::StaticStruct, TEXT("/Script/Vestigium"), TEXT("DecalMaterial"), false, nullptr, nullptr);
static struct FScriptStruct_Vestigium_StaticRegisterNativesFDecalMaterial
{
	FScriptStruct_Vestigium_StaticRegisterNativesFDecalMaterial()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DecalMaterial")),new UScriptStruct::TCppStructOps<FDecalMaterial>);
	}
} ScriptStruct_Vestigium_StaticRegisterNativesFDecalMaterial;
	struct Z_Construct_UScriptStruct_FDecalMaterial_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lifetime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Lifetime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DecalMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecalMaterial_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FootstepData.h" },
		{ "ToolTip", "@brief FFootstepEffectData Asset Struct\nStore all valid information about a footstep" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDecalMaterial_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDecalMaterial>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecalMaterial_Statics::NewProp_Lifetime_MetaData[] = {
		{ "Category", "DecalMaterial" },
		{ "ModuleRelativePath", "Public/FootstepData.h" },
		{ "ToolTip", "@brief Lifetime float time in seconds for Decal to exist" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDecalMaterial_Statics::NewProp_Lifetime = { "Lifetime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDecalMaterial, Lifetime), METADATA_PARAMS(Z_Construct_UScriptStruct_FDecalMaterial_Statics::NewProp_Lifetime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDecalMaterial_Statics::NewProp_Lifetime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecalMaterial_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "DecalMaterial" },
		{ "ModuleRelativePath", "Public/FootstepData.h" },
		{ "ToolTip", "@brief Size FVector scale size of Decal" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDecalMaterial_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDecalMaterial, Size), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDecalMaterial_Statics::NewProp_Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDecalMaterial_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecalMaterial_Statics::NewProp_DecalMaterial_MetaData[] = {
		{ "Category", "DecalMaterial" },
		{ "ModuleRelativePath", "Public/FootstepData.h" },
		{ "ToolTip", "@brief DecalMaterial MaterialInterface for Decal" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDecalMaterial_Statics::NewProp_DecalMaterial = { "DecalMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDecalMaterial, DecalMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDecalMaterial_Statics::NewProp_DecalMaterial_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDecalMaterial_Statics::NewProp_DecalMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDecalMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecalMaterial_Statics::NewProp_Lifetime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecalMaterial_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecalMaterial_Statics::NewProp_DecalMaterial,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDecalMaterial_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Vestigium,
		nullptr,
		&NewStructOps,
		"DecalMaterial",
		sizeof(FDecalMaterial),
		alignof(FDecalMaterial),
		Z_Construct_UScriptStruct_FDecalMaterial_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FDecalMaterial_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000211),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDecalMaterial_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDecalMaterial_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDecalMaterial()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDecalMaterial_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Vestigium();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DecalMaterial"), sizeof(FDecalMaterial), Get_Z_Construct_UScriptStruct_FDecalMaterial_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDecalMaterial_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDecalMaterial_Hash() { return 513534414U; }
class UScriptStruct* FPhysicalParticleData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VESTIGIUM_API uint32 Get_Z_Construct_UScriptStruct_FPhysicalParticleData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicalParticleData, Z_Construct_UPackage__Script_Vestigium(), TEXT("PhysicalParticleData"), sizeof(FPhysicalParticleData), Get_Z_Construct_UScriptStruct_FPhysicalParticleData_Hash());
	}
	return Singleton;
}
template<> VESTIGIUM_API UScriptStruct* StaticStruct<FPhysicalParticleData>()
{
	return FPhysicalParticleData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPhysicalParticleData(FPhysicalParticleData::StaticStruct, TEXT("/Script/Vestigium"), TEXT("PhysicalParticleData"), false, nullptr, nullptr);
static struct FScriptStruct_Vestigium_StaticRegisterNativesFPhysicalParticleData
{
	FScriptStruct_Vestigium_StaticRegisterNativesFPhysicalParticleData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PhysicalParticleData")),new UScriptStruct::TCppStructOps<FPhysicalParticleData>);
	}
} ScriptStruct_Vestigium_StaticRegisterNativesFPhysicalParticleData;
	struct Z_Construct_UScriptStruct_FPhysicalParticleData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticleSystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SurfaceType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SurfaceName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalParticleData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FootstepData.h" },
		{ "ToolTip", "@brief FFootstepEffectData Asset Struct\nStore all valid information about a footstep" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhysicalParticleData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicalParticleData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalParticleData_Statics::NewProp_ParticleSystem_MetaData[] = {
		{ "Category", "PhysicalParticleData" },
		{ "ModuleRelativePath", "Public/FootstepData.h" },
		{ "ToolTip", "@brief ParticleSystem UParticleSystem Particle effect associated" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPhysicalParticleData_Statics::NewProp_ParticleSystem = { "ParticleSystem", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicalParticleData, ParticleSystem), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalParticleData_Statics::NewProp_ParticleSystem_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalParticleData_Statics::NewProp_ParticleSystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalParticleData_Statics::NewProp_SurfaceType_MetaData[] = {
		{ "Category", "PhysicalParticleData" },
		{ "ModuleRelativePath", "Public/FootstepData.h" },
		{ "ToolTip", "@brief SurfaceType  PhysicalSurface enum for comparison" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPhysicalParticleData_Statics::NewProp_SurfaceType = { "SurfaceType", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicalParticleData, SurfaceType), Z_Construct_UEnum_Engine_EPhysicalSurface, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalParticleData_Statics::NewProp_SurfaceType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalParticleData_Statics::NewProp_SurfaceType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalParticleData_Statics::NewProp_SurfaceName_MetaData[] = {
		{ "Category", "PhysicalParticleData" },
		{ "ModuleRelativePath", "Public/FootstepData.h" },
		{ "ToolTip", "@brief SurfaceName PhysicalSurface name found on Engine settings" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPhysicalParticleData_Statics::NewProp_SurfaceName = { "SurfaceName", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicalParticleData, SurfaceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalParticleData_Statics::NewProp_SurfaceName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalParticleData_Statics::NewProp_SurfaceName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicalParticleData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalParticleData_Statics::NewProp_ParticleSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalParticleData_Statics::NewProp_SurfaceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalParticleData_Statics::NewProp_SurfaceName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicalParticleData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Vestigium,
		nullptr,
		&NewStructOps,
		"PhysicalParticleData",
		sizeof(FPhysicalParticleData),
		alignof(FPhysicalParticleData),
		Z_Construct_UScriptStruct_FPhysicalParticleData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalParticleData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000211),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalParticleData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalParticleData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhysicalParticleData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPhysicalParticleData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Vestigium();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PhysicalParticleData"), sizeof(FPhysicalParticleData), Get_Z_Construct_UScriptStruct_FPhysicalParticleData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPhysicalParticleData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPhysicalParticleData_Hash() { return 2132383288U; }
	void UFootstepData::StaticRegisterNativesUFootstepData()
	{
		UClass* Class = UFootstepData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetData", &UFootstepData::execGetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFootstepData_GetData_Statics
	{
		struct FootstepData_eventGetData_Parms
		{
			FFootstepEffectData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFootstepData_GetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FootstepData_eventGetData_Parms, ReturnValue), Z_Construct_UScriptStruct_FFootstepEffectData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstepData_GetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepData_GetData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstepData_GetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FootstepData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstepData_GetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstepData, nullptr, "GetData", sizeof(FootstepData_eventGetData_Parms), Z_Construct_UFunction_UFootstepData_GetData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFootstepData_GetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFootstepData_GetData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFootstepData_GetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFootstepData_GetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFootstepData_GetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFootstepData_NoRegister()
	{
		return UFootstepData::StaticClass();
	}
	struct Z_Construct_UClass_UFootstepData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFootstepData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Vestigium,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFootstepData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFootstepData_GetData, "GetData" }, // 1350396326
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepData_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "FootstepData PhysicalSoundData FootstepEffectData Sound Particles Decals" },
		{ "BlueprintType", "true" },
		{ "Category", "Vestigium" },
		{ "DisplayName", "FootstepData" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "FootstepData.h" },
		{ "ModuleRelativePath", "Public/FootstepData.h" },
		{ "ToolTip", "@class UFootstepData\nStorage class for  @see FFootstepEffectData struct;" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepData_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "FootstepData" },
		{ "ModuleRelativePath", "Public/FootstepData.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFootstepData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootstepData, Data), Z_Construct_UScriptStruct_FFootstepEffectData, METADATA_PARAMS(Z_Construct_UClass_UFootstepData_Statics::NewProp_Data_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFootstepData_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFootstepData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepData_Statics::NewProp_Data,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFootstepData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFootstepData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFootstepData_Statics::ClassParams = {
		&UFootstepData::StaticClass,
		"FootSteps",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFootstepData_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFootstepData_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFootstepData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFootstepData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFootstepData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFootstepData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFootstepData, 3528450231);
	template<> VESTIGIUM_API UClass* StaticClass<UFootstepData>()
	{
		return UFootstepData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFootstepData(Z_Construct_UClass_UFootstepData, &UFootstepData::StaticClass, TEXT("/Script/Vestigium"), TEXT("UFootstepData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFootstepData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
