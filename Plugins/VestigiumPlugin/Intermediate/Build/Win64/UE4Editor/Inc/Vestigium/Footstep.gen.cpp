// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Vestigium/Public/Footstep.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFootstep() {}
// Cross Module References
	VESTIGIUM_API UClass* Z_Construct_UClass_UFootstep_NoRegister();
	VESTIGIUM_API UClass* Z_Construct_UClass_UFootstep();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Vestigium();
	VESTIGIUM_API UFunction* Z_Construct_UFunction_UFootstep_GetCharacterMovement();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	VESTIGIUM_API UFunction* Z_Construct_UFunction_UFootstep_GetDecalMaterial();
	VESTIGIUM_API UScriptStruct* Z_Construct_UScriptStruct_FDecalMaterial();
	VESTIGIUM_API UFunction* Z_Construct_UFunction_UFootstep_GetParticleTemplate();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	VESTIGIUM_API UFunction* Z_Construct_UFunction_UFootstep_GetSoundBase();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	VESTIGIUM_API UFunction* Z_Construct_UFunction_UFootstep_GetSoundConcurrency();
	ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency_NoRegister();
	VESTIGIUM_API UFunction* Z_Construct_UFunction_UFootstep_SpawnAllEffects();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	VESTIGIUM_API UFunction* Z_Construct_UFunction_UFootstep_SpawnDecalEffect();
	VESTIGIUM_API UFunction* Z_Construct_UFunction_UFootstep_SpawnParticleEffect();
	VESTIGIUM_API UFunction* Z_Construct_UFunction_UFootstep_SpawnSoundEffect();
	VESTIGIUM_API UFunction* Z_Construct_UFunction_UFootstep_UseCharacterMovementInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VESTIGIUM_API UClass* Z_Construct_UClass_UFootstepData_NoRegister();
// End Cross Module References
	void UFootstep::StaticRegisterNativesUFootstep()
	{
		UClass* Class = UFootstep::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCharacterMovement", &UFootstep::execGetCharacterMovement },
			{ "GetDecalMaterial", &UFootstep::execGetDecalMaterial },
			{ "GetParticleTemplate", &UFootstep::execGetParticleTemplate },
			{ "GetSoundBase", &UFootstep::execGetSoundBase },
			{ "GetSoundConcurrency", &UFootstep::execGetSoundConcurrency },
			{ "SpawnAllEffects", &UFootstep::execSpawnAllEffects },
			{ "SpawnDecalEffect", &UFootstep::execSpawnDecalEffect },
			{ "SpawnParticleEffect", &UFootstep::execSpawnParticleEffect },
			{ "SpawnSoundEffect", &UFootstep::execSpawnSoundEffect },
			{ "UseCharacterMovementInfo", &UFootstep::execUseCharacterMovementInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFootstep_GetCharacterMovement_Statics
	{
		struct Footstep_eventGetCharacterMovement_Parms
		{
			const USkeletalMeshComponent* MeshComp;
			UCharacterMovementComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstep_GetCharacterMovement_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFootstep_GetCharacterMovement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Footstep_eventGetCharacterMovement_Parms, ReturnValue), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFootstep_GetCharacterMovement_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFootstep_GetCharacterMovement_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstep_GetCharacterMovement_Statics::NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFootstep_GetCharacterMovement_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Footstep_eventGetCharacterMovement_Parms, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFootstep_GetCharacterMovement_Statics::NewProp_MeshComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFootstep_GetCharacterMovement_Statics::NewProp_MeshComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstep_GetCharacterMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstep_GetCharacterMovement_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstep_GetCharacterMovement_Statics::NewProp_MeshComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstep_GetCharacterMovement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Footstep|Character" },
		{ "ModuleRelativePath", "Public/Footstep.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstep_GetCharacterMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstep, nullptr, "GetCharacterMovement", sizeof(Footstep_eventGetCharacterMovement_Parms), Z_Construct_UFunction_UFootstep_GetCharacterMovement_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFootstep_GetCharacterMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFootstep_GetCharacterMovement_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFootstep_GetCharacterMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFootstep_GetCharacterMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFootstep_GetCharacterMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFootstep_GetDecalMaterial_Statics
	{
		struct Footstep_eventGetDecalMaterial_Parms
		{
			uint32 PhysicalSurfaceIndex;
			FDecalMaterial ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PhysicalSurfaceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFootstep_GetDecalMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Footstep_eventGetDecalMaterial_Parms, ReturnValue), Z_Construct_UScriptStruct_FDecalMaterial, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UFootstep_GetDecalMaterial_Statics::NewProp_PhysicalSurfaceIndex = { "PhysicalSurfaceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Footstep_eventGetDecalMaterial_Parms, PhysicalSurfaceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstep_GetDecalMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstep_GetDecalMaterial_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstep_GetDecalMaterial_Statics::NewProp_PhysicalSurfaceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstep_GetDecalMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Footstep.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstep_GetDecalMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstep, nullptr, "GetDecalMaterial", sizeof(Footstep_eventGetDecalMaterial_Parms), Z_Construct_UFunction_UFootstep_GetDecalMaterial_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFootstep_GetDecalMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFootstep_GetDecalMaterial_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFootstep_GetDecalMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFootstep_GetDecalMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFootstep_GetDecalMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFootstep_GetParticleTemplate_Statics
	{
		struct Footstep_eventGetParticleTemplate_Parms
		{
			uint32 PhysicalSurfaceIndex;
			UParticleSystem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PhysicalSurfaceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFootstep_GetParticleTemplate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Footstep_eventGetParticleTemplate_Parms, ReturnValue), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UFootstep_GetParticleTemplate_Statics::NewProp_PhysicalSurfaceIndex = { "PhysicalSurfaceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Footstep_eventGetParticleTemplate_Parms, PhysicalSurfaceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstep_GetParticleTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstep_GetParticleTemplate_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstep_GetParticleTemplate_Statics::NewProp_PhysicalSurfaceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstep_GetParticleTemplate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Footstep.h" },
		{ "ToolTip", "@brief GetParticleTemplate()\nGets the correct Particle template to play" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstep_GetParticleTemplate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstep, nullptr, "GetParticleTemplate", sizeof(Footstep_eventGetParticleTemplate_Parms), Z_Construct_UFunction_UFootstep_GetParticleTemplate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFootstep_GetParticleTemplate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFootstep_GetParticleTemplate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFootstep_GetParticleTemplate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFootstep_GetParticleTemplate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFootstep_GetParticleTemplate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFootstep_GetSoundBase_Statics
	{
		struct Footstep_eventGetSoundBase_Parms
		{
			uint32 PhysicalSurfaceIndex;
			USoundBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PhysicalSurfaceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFootstep_GetSoundBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Footstep_eventGetSoundBase_Parms, ReturnValue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UFootstep_GetSoundBase_Statics::NewProp_PhysicalSurfaceIndex = { "PhysicalSurfaceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Footstep_eventGetSoundBase_Parms, PhysicalSurfaceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstep_GetSoundBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstep_GetSoundBase_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstep_GetSoundBase_Statics::NewProp_PhysicalSurfaceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstep_GetSoundBase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Footstep.h" },
		{ "ToolTip", "@brief GetSoundBase()\nGets the sound to play based on bOverrideSound, OverrrideSoundCue and FootstepAsset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstep_GetSoundBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstep, nullptr, "GetSoundBase", sizeof(Footstep_eventGetSoundBase_Parms), Z_Construct_UFunction_UFootstep_GetSoundBase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFootstep_GetSoundBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFootstep_GetSoundBase_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFootstep_GetSoundBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFootstep_GetSoundBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFootstep_GetSoundBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFootstep_GetSoundConcurrency_Statics
	{
		struct Footstep_eventGetSoundConcurrency_Parms
		{
			USoundConcurrency* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFootstep_GetSoundConcurrency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Footstep_eventGetSoundConcurrency_Parms, ReturnValue), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstep_GetSoundConcurrency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstep_GetSoundConcurrency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstep_GetSoundConcurrency_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Footstep.h" },
		{ "ToolTip", "@brief GetSoundConcurrency()\nGets the correct sound concurrency to play" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstep_GetSoundConcurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstep, nullptr, "GetSoundConcurrency", sizeof(Footstep_eventGetSoundConcurrency_Parms), Z_Construct_UFunction_UFootstep_GetSoundConcurrency_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFootstep_GetSoundConcurrency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFootstep_GetSoundConcurrency_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFootstep_GetSoundConcurrency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFootstep_GetSoundConcurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFootstep_GetSoundConcurrency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFootstep_SpawnAllEffects_Statics
	{
		struct Footstep_eventSpawnAllEffects_Parms
		{
			const UObject* WorldContextObject;
			FTransform ToWorld;
			uint32 PhysicalSurfaceIndex;
			UObject* Outer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Outer;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PhysicalSurfaceIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToWorld_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ToWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFootstep_SpawnAllEffects_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Footstep_eventSpawnAllEffects_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UFootstep_SpawnAllEffects_Statics::NewProp_PhysicalSurfaceIndex = { "PhysicalSurfaceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Footstep_eventSpawnAllEffects_Parms, PhysicalSurfaceIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstep_SpawnAllEffects_Statics::NewProp_ToWorld_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFootstep_SpawnAllEffects_Statics::NewProp_ToWorld = { "ToWorld", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Footstep_eventSpawnAllEffects_Parms, ToWorld), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UFootstep_SpawnAllEffects_Statics::NewProp_ToWorld_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFootstep_SpawnAllEffects_Statics::NewProp_ToWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstep_SpawnAllEffects_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFootstep_SpawnAllEffects_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Footstep_eventSpawnAllEffects_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFootstep_SpawnAllEffects_Statics::NewProp_WorldContextObject_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFootstep_SpawnAllEffects_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstep_SpawnAllEffects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstep_SpawnAllEffects_Statics::NewProp_Outer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstep_SpawnAllEffects_Statics::NewProp_PhysicalSurfaceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstep_SpawnAllEffects_Statics::NewProp_ToWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstep_SpawnAllEffects_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstep_SpawnAllEffects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Footstep.h" },
		{ "ToolTip", "@brief SpawnParticleEffect() function\ndo all the necessary operations to spawn particles\n   //BlueprintCallable, Category = \"Particles\", meta = (Keywords = \"particle system\", WorldContext = \"WorldContextObject\", UnsafeDuringActorConstruction = \"true\"))" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstep_SpawnAllEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstep, nullptr, "SpawnAllEffects", sizeof(Footstep_eventSpawnAllEffects_Parms), Z_Construct_UFunction_UFootstep_SpawnAllEffects_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFootstep_SpawnAllEffects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40C80400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFootstep_SpawnAllEffects_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFootstep_SpawnAllEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFootstep_SpawnAllEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFootstep_SpawnAllEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFootstep_SpawnDecalEffect_Statics
	{
		struct Footstep_eventSpawnDecalEffect_Parms
		{
			const UObject* WorldContextObject;
			FTransform ToWorld;
			uint32 PhysicalSurfaceIndex;
			UObject* Outer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Outer;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PhysicalSurfaceIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToWorld_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ToWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFootstep_SpawnDecalEffect_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Footstep_eventSpawnDecalEffect_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UFootstep_SpawnDecalEffect_Statics::NewProp_PhysicalSurfaceIndex = { "PhysicalSurfaceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Footstep_eventSpawnDecalEffect_Parms, PhysicalSurfaceIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstep_SpawnDecalEffect_Statics::NewProp_ToWorld_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFootstep_SpawnDecalEffect_Statics::NewProp_ToWorld = { "ToWorld", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Footstep_eventSpawnDecalEffect_Parms, ToWorld), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UFootstep_SpawnDecalEffect_Statics::NewProp_ToWorld_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFootstep_SpawnDecalEffect_Statics::NewProp_ToWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstep_SpawnDecalEffect_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFootstep_SpawnDecalEffect_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Footstep_eventSpawnDecalEffect_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFootstep_SpawnDecalEffect_Statics::NewProp_WorldContextObject_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFootstep_SpawnDecalEffect_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstep_SpawnDecalEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstep_SpawnDecalEffect_Statics::NewProp_Outer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstep_SpawnDecalEffect_Statics::NewProp_PhysicalSurfaceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstep_SpawnDecalEffect_Statics::NewProp_ToWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstep_SpawnDecalEffect_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstep_SpawnDecalEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Footstep.h" },
		{ "ToolTip", "@brief SpawnParticleEffect() function\ndo all the necessary operations to spawn particles\n   //BlueprintCallable, Category = \"Particles\", meta = (Keywords = \"particle system\", WorldContext = \"WorldContextObject\", UnsafeDuringActorConstruction = \"true\"))" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstep_SpawnDecalEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstep, nullptr, "SpawnDecalEffect", sizeof(Footstep_eventSpawnDecalEffect_Parms), Z_Construct_UFunction_UFootstep_SpawnDecalEffect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFootstep_SpawnDecalEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40C80400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFootstep_SpawnDecalEffect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFootstep_SpawnDecalEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFootstep_SpawnDecalEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFootstep_SpawnDecalEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFootstep_SpawnParticleEffect_Statics
	{
		struct Footstep_eventSpawnParticleEffect_Parms
		{
			const UObject* WorldContextObject;
			FTransform ToWorld;
			uint32 PhysicalSurfaceIndex;
			UObject* Outer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Outer;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PhysicalSurfaceIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToWorld_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ToWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFootstep_SpawnParticleEffect_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Footstep_eventSpawnParticleEffect_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UFootstep_SpawnParticleEffect_Statics::NewProp_PhysicalSurfaceIndex = { "PhysicalSurfaceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Footstep_eventSpawnParticleEffect_Parms, PhysicalSurfaceIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstep_SpawnParticleEffect_Statics::NewProp_ToWorld_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFootstep_SpawnParticleEffect_Statics::NewProp_ToWorld = { "ToWorld", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Footstep_eventSpawnParticleEffect_Parms, ToWorld), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UFootstep_SpawnParticleEffect_Statics::NewProp_ToWorld_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFootstep_SpawnParticleEffect_Statics::NewProp_ToWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstep_SpawnParticleEffect_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFootstep_SpawnParticleEffect_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Footstep_eventSpawnParticleEffect_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFootstep_SpawnParticleEffect_Statics::NewProp_WorldContextObject_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFootstep_SpawnParticleEffect_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstep_SpawnParticleEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstep_SpawnParticleEffect_Statics::NewProp_Outer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstep_SpawnParticleEffect_Statics::NewProp_PhysicalSurfaceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstep_SpawnParticleEffect_Statics::NewProp_ToWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstep_SpawnParticleEffect_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstep_SpawnParticleEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Footstep.h" },
		{ "ToolTip", "@brief SpawnParticleEffect() function\ndo all the necessary operations to spawn particles\n   //BlueprintCallable, Category = \"Particles\", meta = (Keywords = \"particle system\", WorldContext = \"WorldContextObject\", UnsafeDuringActorConstruction = \"true\"))" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstep_SpawnParticleEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstep, nullptr, "SpawnParticleEffect", sizeof(Footstep_eventSpawnParticleEffect_Parms), Z_Construct_UFunction_UFootstep_SpawnParticleEffect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFootstep_SpawnParticleEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40C80400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFootstep_SpawnParticleEffect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFootstep_SpawnParticleEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFootstep_SpawnParticleEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFootstep_SpawnParticleEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFootstep_SpawnSoundEffect_Statics
	{
		struct Footstep_eventSpawnSoundEffect_Parms
		{
			const UObject* WorldContextObject;
			FTransform ToWorld;
			uint32 PhysicalSurfaceIndex;
			UObject* Outer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Outer;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PhysicalSurfaceIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToWorld_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ToWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFootstep_SpawnSoundEffect_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Footstep_eventSpawnSoundEffect_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UFootstep_SpawnSoundEffect_Statics::NewProp_PhysicalSurfaceIndex = { "PhysicalSurfaceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Footstep_eventSpawnSoundEffect_Parms, PhysicalSurfaceIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstep_SpawnSoundEffect_Statics::NewProp_ToWorld_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFootstep_SpawnSoundEffect_Statics::NewProp_ToWorld = { "ToWorld", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Footstep_eventSpawnSoundEffect_Parms, ToWorld), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UFootstep_SpawnSoundEffect_Statics::NewProp_ToWorld_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFootstep_SpawnSoundEffect_Statics::NewProp_ToWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstep_SpawnSoundEffect_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFootstep_SpawnSoundEffect_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Footstep_eventSpawnSoundEffect_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFootstep_SpawnSoundEffect_Statics::NewProp_WorldContextObject_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFootstep_SpawnSoundEffect_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstep_SpawnSoundEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstep_SpawnSoundEffect_Statics::NewProp_Outer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstep_SpawnSoundEffect_Statics::NewProp_PhysicalSurfaceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstep_SpawnSoundEffect_Statics::NewProp_ToWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstep_SpawnSoundEffect_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstep_SpawnSoundEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Footstep.h" },
		{ "ToolTip", "@brief SpawnParticleEffect() function\ndo all the necessary operations to spawn particles\n   //BlueprintCallable, Category = \"Particles\", meta = (Keywords = \"particle system\", WorldContext = \"WorldContextObject\", UnsafeDuringActorConstruction = \"true\"))" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstep_SpawnSoundEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstep, nullptr, "SpawnSoundEffect", sizeof(Footstep_eventSpawnSoundEffect_Parms), Z_Construct_UFunction_UFootstep_SpawnSoundEffect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFootstep_SpawnSoundEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40C80400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFootstep_SpawnSoundEffect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFootstep_SpawnSoundEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFootstep_SpawnSoundEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFootstep_SpawnSoundEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFootstep_UseCharacterMovementInfo_Statics
	{
		struct Footstep_eventUseCharacterMovementInfo_Parms
		{
			UCharacterMovementComponent* CharacterMovementComponent;
			USkeletalMeshComponent* MeshComp;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterMovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterMovementComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstep_UseCharacterMovementInfo_Statics::NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFootstep_UseCharacterMovementInfo_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Footstep_eventUseCharacterMovementInfo_Parms, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFootstep_UseCharacterMovementInfo_Statics::NewProp_MeshComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFootstep_UseCharacterMovementInfo_Statics::NewProp_MeshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstep_UseCharacterMovementInfo_Statics::NewProp_CharacterMovementComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFootstep_UseCharacterMovementInfo_Statics::NewProp_CharacterMovementComponent = { "CharacterMovementComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Footstep_eventUseCharacterMovementInfo_Parms, CharacterMovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFootstep_UseCharacterMovementInfo_Statics::NewProp_CharacterMovementComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFootstep_UseCharacterMovementInfo_Statics::NewProp_CharacterMovementComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstep_UseCharacterMovementInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstep_UseCharacterMovementInfo_Statics::NewProp_MeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstep_UseCharacterMovementInfo_Statics::NewProp_CharacterMovementComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstep_UseCharacterMovementInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Footstep.h" },
		{ "ToolTip", "@brief UseCharacterMovementInfo function\nRetrieve All the necessary information and spawn effects" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstep_UseCharacterMovementInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstep, nullptr, "UseCharacterMovementInfo", sizeof(Footstep_eventUseCharacterMovementInfo_Parms), Z_Construct_UFunction_UFootstep_UseCharacterMovementInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFootstep_UseCharacterMovementInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFootstep_UseCharacterMovementInfo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFootstep_UseCharacterMovementInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFootstep_UseCharacterMovementInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFootstep_UseCharacterMovementInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFootstep_NoRegister()
	{
		return UFootstep::StaticClass();
	}
	struct Z_Construct_UClass_UFootstep_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[];
#endif
		static void NewProp_bDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGroundInfoIsValid_MetaData[];
#endif
		static void NewProp_bGroundInfoIsValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGroundInfoIsValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroundNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GroundNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroundHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GroundHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bwantPosition_MetaData[];
#endif
		static void NewProp_bwantPosition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bwantPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DecalOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideDecals_MetaData[];
#endif
		static void NewProp_bOverrideDecals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideDecals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsesDecals_MetaData[];
#endif
		static void NewProp_bUsesDecals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsesDecals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleSystemOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticleSystemOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideParticles_MetaData[];
#endif
		static void NewProp_bOverrideParticles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsesParticles_MetaData[];
#endif
		static void NewProp_bUsesParticles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsesParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideSoundConcurrencySettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverrideSoundConcurrencySettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundCueOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundCueOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideSound_MetaData[];
#endif
		static void NewProp_bOverrideSound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootstepAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FootstepAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FootBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRayTrace_MetaData[];
#endif
		static void NewProp_bUseRayTrace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRayTrace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFootstep_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Vestigium,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFootstep_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFootstep_GetCharacterMovement, "GetCharacterMovement" }, // 2410057076
		{ &Z_Construct_UFunction_UFootstep_GetDecalMaterial, "GetDecalMaterial" }, // 3676686999
		{ &Z_Construct_UFunction_UFootstep_GetParticleTemplate, "GetParticleTemplate" }, // 1746919670
		{ &Z_Construct_UFunction_UFootstep_GetSoundBase, "GetSoundBase" }, // 3115350739
		{ &Z_Construct_UFunction_UFootstep_GetSoundConcurrency, "GetSoundConcurrency" }, // 3166194311
		{ &Z_Construct_UFunction_UFootstep_SpawnAllEffects, "SpawnAllEffects" }, // 2981076094
		{ &Z_Construct_UFunction_UFootstep_SpawnDecalEffect, "SpawnDecalEffect" }, // 772260760
		{ &Z_Construct_UFunction_UFootstep_SpawnParticleEffect, "SpawnParticleEffect" }, // 1142793476
		{ &Z_Construct_UFunction_UFootstep_SpawnSoundEffect, "SpawnSoundEffect" }, // 2234255311
		{ &Z_Construct_UFunction_UFootstep_UseCharacterMovementInfo, "UseCharacterMovementInfo" }, // 261974831
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstep_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Character" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Footstep.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Footstep.h" },
		{ "ToolTip", "@class UFootstep\n@brief an AnimNotify specifically done to do calculation for footsteps sounds and footprints" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstep_Statics::NewProp_bDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Footstep.h" },
	};
#endif
	void Z_Construct_UClass_UFootstep_Statics::NewProp_bDebug_SetBit(void* Obj)
	{
		((UFootstep*)Obj)->bDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFootstep_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0020080000000011, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFootstep), &Z_Construct_UClass_UFootstep_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFootstep_Statics::NewProp_bDebug_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFootstep_Statics::NewProp_bDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstep_Statics::NewProp_bGroundInfoIsValid_MetaData[] = {
		{ "ModuleRelativePath", "Public/Footstep.h" },
		{ "ToolTip", "@brief bGroundHeigthIsValid boolean flag\nTells if GroundHeight has been updated recently" },
	};
#endif
	void Z_Construct_UClass_UFootstep_Statics::NewProp_bGroundInfoIsValid_SetBit(void* Obj)
	{
		((UFootstep*)Obj)->bGroundInfoIsValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFootstep_Statics::NewProp_bGroundInfoIsValid = { "bGroundInfoIsValid", nullptr, (EPropertyFlags)0x0040000000000010, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFootstep), &Z_Construct_UClass_UFootstep_Statics::NewProp_bGroundInfoIsValid_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFootstep_Statics::NewProp_bGroundInfoIsValid_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFootstep_Statics::NewProp_bGroundInfoIsValid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstep_Statics::NewProp_GroundNormal_MetaData[] = {
		{ "ModuleRelativePath", "Public/Footstep.h" },
		{ "ToolTip", "@brief GroundNormal Ground orientation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFootstep_Statics::NewProp_GroundNormal = { "GroundNormal", nullptr, (EPropertyFlags)0x0040000000000010, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootstep, GroundNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFootstep_Statics::NewProp_GroundNormal_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFootstep_Statics::NewProp_GroundNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstep_Statics::NewProp_GroundHeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/Footstep.h" },
		{ "ToolTip", "@brief GroundHeight Ground Z position" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFootstep_Statics::NewProp_GroundHeight = { "GroundHeight", nullptr, (EPropertyFlags)0x0040000000000010, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootstep, GroundHeight), METADATA_PARAMS(Z_Construct_UClass_UFootstep_Statics::NewProp_GroundHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFootstep_Statics::NewProp_GroundHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstep_Statics::NewProp_bwantPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/Footstep.h" },
		{ "ToolTip", "@brief bwantPosition boolean flag\n do we have reasons to find exact position ? ie : valid bone name and particle system to use" },
	};
#endif
	void Z_Construct_UClass_UFootstep_Statics::NewProp_bwantPosition_SetBit(void* Obj)
	{
		((UFootstep*)Obj)->bwantPosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFootstep_Statics::NewProp_bwantPosition = { "bwantPosition", nullptr, (EPropertyFlags)0x0040000000000010, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFootstep), &Z_Construct_UClass_UFootstep_Statics::NewProp_bwantPosition_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFootstep_Statics::NewProp_bwantPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFootstep_Statics::NewProp_bwantPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstep_Statics::NewProp_DecalOverride_MetaData[] = {
		{ "Category", "Footstep|Decals" },
		{ "EditCondition", "bUsesDecals && bOverrideDecals" },
		{ "ModuleRelativePath", "Public/Footstep.h" },
		{ "ToolTip", "@brief DecalOverride\nThe decal to Use if you override" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFootstep_Statics::NewProp_DecalOverride = { "DecalOverride", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootstep, DecalOverride), Z_Construct_UScriptStruct_FDecalMaterial, METADATA_PARAMS(Z_Construct_UClass_UFootstep_Statics::NewProp_DecalOverride_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFootstep_Statics::NewProp_DecalOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstep_Statics::NewProp_bOverrideDecals_MetaData[] = {
		{ "Category", "Footstep|Decals" },
		{ "EditCondition", "bUsesDecals" },
		{ "ModuleRelativePath", "Public/Footstep.h" },
		{ "ToolTip", "@brief bOverrideParticles\noverride foot asset  and replace them by @see OverrideParticleSystem" },
	};
#endif
	void Z_Construct_UClass_UFootstep_Statics::NewProp_bOverrideDecals_SetBit(void* Obj)
	{
		((UFootstep*)Obj)->bOverrideDecals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFootstep_Statics::NewProp_bOverrideDecals = { "bOverrideDecals", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFootstep), &Z_Construct_UClass_UFootstep_Statics::NewProp_bOverrideDecals_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFootstep_Statics::NewProp_bOverrideDecals_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFootstep_Statics::NewProp_bOverrideDecals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstep_Statics::NewProp_bUsesDecals_MetaData[] = {
		{ "Category", "Footstep|Decals" },
		{ "ModuleRelativePath", "Public/Footstep.h" },
		{ "ToolTip", "@brief bOverrideSound\noverride asset sounds and replace them by @see OverrrideSoundCue" },
	};
#endif
	void Z_Construct_UClass_UFootstep_Statics::NewProp_bUsesDecals_SetBit(void* Obj)
	{
		((UFootstep*)Obj)->bUsesDecals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFootstep_Statics::NewProp_bUsesDecals = { "bUsesDecals", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFootstep), &Z_Construct_UClass_UFootstep_Statics::NewProp_bUsesDecals_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFootstep_Statics::NewProp_bUsesDecals_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFootstep_Statics::NewProp_bUsesDecals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstep_Statics::NewProp_ParticleSystemOverride_MetaData[] = {
		{ "Category", "Footstep|Particles" },
		{ "EditCondition", "bUsesParticles && bOverrideParticles" },
		{ "ModuleRelativePath", "Public/Footstep.h" },
		{ "ToolTip", "@brief OverrideParticleSystem\nThe Particle to play if bOverrideParticles is true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFootstep_Statics::NewProp_ParticleSystemOverride = { "ParticleSystemOverride", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootstep, ParticleSystemOverride), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFootstep_Statics::NewProp_ParticleSystemOverride_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFootstep_Statics::NewProp_ParticleSystemOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstep_Statics::NewProp_bOverrideParticles_MetaData[] = {
		{ "Category", "Footstep|Particles" },
		{ "EditCondition", "bUsesParticles" },
		{ "ModuleRelativePath", "Public/Footstep.h" },
		{ "ToolTip", "@brief bOverrideParticles\noverride foot asset  and replace them by @see OverrideParticleSystem" },
	};
#endif
	void Z_Construct_UClass_UFootstep_Statics::NewProp_bOverrideParticles_SetBit(void* Obj)
	{
		((UFootstep*)Obj)->bOverrideParticles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFootstep_Statics::NewProp_bOverrideParticles = { "bOverrideParticles", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFootstep), &Z_Construct_UClass_UFootstep_Statics::NewProp_bOverrideParticles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFootstep_Statics::NewProp_bOverrideParticles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFootstep_Statics::NewProp_bOverrideParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstep_Statics::NewProp_bUsesParticles_MetaData[] = {
		{ "Category", "Footstep|Particles" },
		{ "ModuleRelativePath", "Public/Footstep.h" },
		{ "ToolTip", "@brief bOverrideSound\noverride asset sounds and replace them by @see OverrrideSoundCue" },
	};
#endif
	void Z_Construct_UClass_UFootstep_Statics::NewProp_bUsesParticles_SetBit(void* Obj)
	{
		((UFootstep*)Obj)->bUsesParticles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFootstep_Statics::NewProp_bUsesParticles = { "bUsesParticles", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFootstep), &Z_Construct_UClass_UFootstep_Statics::NewProp_bUsesParticles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFootstep_Statics::NewProp_bUsesParticles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFootstep_Statics::NewProp_bUsesParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstep_Statics::NewProp_OverrideSoundConcurrencySettings_MetaData[] = {
		{ "Category", "Footstep|Sound" },
		{ "EditCondition", "bOverrideSound" },
		{ "ModuleRelativePath", "Public/Footstep.h" },
		{ "ToolTip", "@brief OverrideSoundConcurrencySettings\n The sound concurency to use if bOverrideSound is setS" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFootstep_Statics::NewProp_OverrideSoundConcurrencySettings = { "OverrideSoundConcurrencySettings", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootstep, OverrideSoundConcurrencySettings), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFootstep_Statics::NewProp_OverrideSoundConcurrencySettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFootstep_Statics::NewProp_OverrideSoundConcurrencySettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstep_Statics::NewProp_SoundCueOverride_MetaData[] = {
		{ "Category", "Footstep|Sound" },
		{ "EditCondition", "bOverrideSound" },
		{ "ModuleRelativePath", "Public/Footstep.h" },
		{ "ToolTip", "@brief OverrrideSoundCue\n The sound to play if bOverrideSound is true or if no asset is specified" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFootstep_Statics::NewProp_SoundCueOverride = { "SoundCueOverride", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootstep, SoundCueOverride), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFootstep_Statics::NewProp_SoundCueOverride_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFootstep_Statics::NewProp_SoundCueOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstep_Statics::NewProp_bOverrideSound_MetaData[] = {
		{ "Category", "Footstep|Sound" },
		{ "ModuleRelativePath", "Public/Footstep.h" },
		{ "ToolTip", "@brief bOverrideSound\n override asset sounds and replace them by @see OverrideSoundCue" },
	};
#endif
	void Z_Construct_UClass_UFootstep_Statics::NewProp_bOverrideSound_SetBit(void* Obj)
	{
		((UFootstep*)Obj)->bOverrideSound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFootstep_Statics::NewProp_bOverrideSound = { "bOverrideSound", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFootstep), &Z_Construct_UClass_UFootstep_Statics::NewProp_bOverrideSound_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFootstep_Statics::NewProp_bOverrideSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFootstep_Statics::NewProp_bOverrideSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstep_Statics::NewProp_FootstepAsset_MetaData[] = {
		{ "Category", "Footstep" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Footstep.h" },
		{ "ToolTip", "@brief FootstepAsset\n an asset describing all the asset parameter. they can be overriden directly in the anim notify" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFootstep_Statics::NewProp_FootstepAsset = { "FootstepAsset", nullptr, (EPropertyFlags)0x0021080000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootstep, FootstepAsset), Z_Construct_UClass_UFootstepData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFootstep_Statics::NewProp_FootstepAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFootstep_Statics::NewProp_FootstepAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstep_Statics::NewProp_FootBoneName_MetaData[] = {
		{ "Category", "Footstep" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Footstep.h" },
		{ "ToolTip", "@brief FootBoneName\n Name of the bone hitting the ground" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFootstep_Statics::NewProp_FootBoneName = { "FootBoneName", nullptr, (EPropertyFlags)0x0021080000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootstep, FootBoneName), METADATA_PARAMS(Z_Construct_UClass_UFootstep_Statics::NewProp_FootBoneName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFootstep_Statics::NewProp_FootBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstep_Statics::NewProp_Intensity_MetaData[] = {
		{ "Category", "Footstep" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Footstep.h" },
		{ "ToolTip", "@brief Intensity\n how strongly this footstep happens" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFootstep_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0021080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootstep, Intensity), METADATA_PARAMS(Z_Construct_UClass_UFootstep_Statics::NewProp_Intensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFootstep_Statics::NewProp_Intensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstep_Statics::NewProp_TraceLength_MetaData[] = {
		{ "Category", "Footstep|Optimisation" },
		{ "EditCondition", "bUseRayTrace" },
		{ "ModuleRelativePath", "Public/Footstep.h" },
		{ "ToolTip", "@brief TraceLength\nThe Length of the raytrace to use for footsteps" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFootstep_Statics::NewProp_TraceLength = { "TraceLength", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootstep, TraceLength), METADATA_PARAMS(Z_Construct_UClass_UFootstep_Statics::NewProp_TraceLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFootstep_Statics::NewProp_TraceLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstep_Statics::NewProp_bUseRayTrace_MetaData[] = {
		{ "Category", "Footstep|Optimisation" },
		{ "ModuleRelativePath", "Public/Footstep.h" },
		{ "ToolTip", "@brief bUseRayTrace\n if we should prefer raytracing to Character movement component" },
	};
#endif
	void Z_Construct_UClass_UFootstep_Statics::NewProp_bUseRayTrace_SetBit(void* Obj)
	{
		((UFootstep*)Obj)->bUseRayTrace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFootstep_Statics::NewProp_bUseRayTrace = { "bUseRayTrace", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFootstep), &Z_Construct_UClass_UFootstep_Statics::NewProp_bUseRayTrace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFootstep_Statics::NewProp_bUseRayTrace_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFootstep_Statics::NewProp_bUseRayTrace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFootstep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstep_Statics::NewProp_bDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstep_Statics::NewProp_bGroundInfoIsValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstep_Statics::NewProp_GroundNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstep_Statics::NewProp_GroundHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstep_Statics::NewProp_bwantPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstep_Statics::NewProp_DecalOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstep_Statics::NewProp_bOverrideDecals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstep_Statics::NewProp_bUsesDecals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstep_Statics::NewProp_ParticleSystemOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstep_Statics::NewProp_bOverrideParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstep_Statics::NewProp_bUsesParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstep_Statics::NewProp_OverrideSoundConcurrencySettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstep_Statics::NewProp_SoundCueOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstep_Statics::NewProp_bOverrideSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstep_Statics::NewProp_FootstepAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstep_Statics::NewProp_FootBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstep_Statics::NewProp_Intensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstep_Statics::NewProp_TraceLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstep_Statics::NewProp_bUseRayTrace,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFootstep_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFootstep>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFootstep_Statics::ClassParams = {
		&UFootstep::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFootstep_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFootstep_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFootstep_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFootstep_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFootstep()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFootstep_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFootstep, 722967091);
	template<> VESTIGIUM_API UClass* StaticClass<UFootstep>()
	{
		return UFootstep::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFootstep(Z_Construct_UClass_UFootstep, &UFootstep::StaticClass, TEXT("/Script/Vestigium"), TEXT("UFootstep"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFootstep);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
