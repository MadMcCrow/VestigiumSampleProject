// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDecalMaterial;
class UParticleSystem;
class USoundConcurrency;
class USoundBase;
class UObject;
struct FTransform;
class UCharacterMovementComponent;
class USkeletalMeshComponent;
#ifdef VESTIGIUM_Footstep_generated_h
#error "Footstep.generated.h already included, missing '#pragma once' in Footstep.h"
#endif
#define VESTIGIUM_Footstep_generated_h

#define FootstepPluginSample_Plugins_VestigiumPlugin_Source_Vestigium_Public_Footstep_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDecalMaterial) \
	{ \
		P_GET_PROPERTY(UUInt32Property,Z_Param_PhysicalSurfaceIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDecalMaterial*)Z_Param__Result=P_THIS->GetDecalMaterial(Z_Param_PhysicalSurfaceIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetParticleTemplate) \
	{ \
		P_GET_PROPERTY(UUInt32Property,Z_Param_PhysicalSurfaceIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UParticleSystem**)Z_Param__Result=P_THIS->GetParticleTemplate(Z_Param_PhysicalSurfaceIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSoundConcurrency) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USoundConcurrency**)Z_Param__Result=P_THIS->GetSoundConcurrency(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSoundBase) \
	{ \
		P_GET_PROPERTY(UUInt32Property,Z_Param_PhysicalSurfaceIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USoundBase**)Z_Param__Result=P_THIS->GetSoundBase(Z_Param_PhysicalSurfaceIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnDecalEffect) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_ToWorld); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_PhysicalSurfaceIndex); \
		P_GET_OBJECT(UObject,Z_Param_Outer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnDecalEffect(Z_Param_WorldContextObject,Z_Param_Out_ToWorld,Z_Param_PhysicalSurfaceIndex,Z_Param_Outer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnParticleEffect) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_ToWorld); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_PhysicalSurfaceIndex); \
		P_GET_OBJECT(UObject,Z_Param_Outer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnParticleEffect(Z_Param_WorldContextObject,Z_Param_Out_ToWorld,Z_Param_PhysicalSurfaceIndex,Z_Param_Outer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnSoundEffect) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_ToWorld); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_PhysicalSurfaceIndex); \
		P_GET_OBJECT(UObject,Z_Param_Outer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnSoundEffect(Z_Param_WorldContextObject,Z_Param_Out_ToWorld,Z_Param_PhysicalSurfaceIndex,Z_Param_Outer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnAllEffects) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_ToWorld); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_PhysicalSurfaceIndex); \
		P_GET_OBJECT(UObject,Z_Param_Outer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnAllEffects(Z_Param_WorldContextObject,Z_Param_Out_ToWorld,Z_Param_PhysicalSurfaceIndex,Z_Param_Outer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUseCharacterMovementInfo) \
	{ \
		P_GET_OBJECT(UCharacterMovementComponent,Z_Param_CharacterMovementComponent); \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_MeshComp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UseCharacterMovementInfo(Z_Param_CharacterMovementComponent,Z_Param_MeshComp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCharacterMovement) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_MeshComp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCharacterMovementComponent**)Z_Param__Result=P_THIS->GetCharacterMovement(Z_Param_MeshComp); \
		P_NATIVE_END; \
	}


#define FootstepPluginSample_Plugins_VestigiumPlugin_Source_Vestigium_Public_Footstep_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDecalMaterial) \
	{ \
		P_GET_PROPERTY(UUInt32Property,Z_Param_PhysicalSurfaceIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDecalMaterial*)Z_Param__Result=P_THIS->GetDecalMaterial(Z_Param_PhysicalSurfaceIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetParticleTemplate) \
	{ \
		P_GET_PROPERTY(UUInt32Property,Z_Param_PhysicalSurfaceIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UParticleSystem**)Z_Param__Result=P_THIS->GetParticleTemplate(Z_Param_PhysicalSurfaceIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSoundConcurrency) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USoundConcurrency**)Z_Param__Result=P_THIS->GetSoundConcurrency(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSoundBase) \
	{ \
		P_GET_PROPERTY(UUInt32Property,Z_Param_PhysicalSurfaceIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USoundBase**)Z_Param__Result=P_THIS->GetSoundBase(Z_Param_PhysicalSurfaceIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnDecalEffect) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_ToWorld); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_PhysicalSurfaceIndex); \
		P_GET_OBJECT(UObject,Z_Param_Outer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnDecalEffect(Z_Param_WorldContextObject,Z_Param_Out_ToWorld,Z_Param_PhysicalSurfaceIndex,Z_Param_Outer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnParticleEffect) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_ToWorld); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_PhysicalSurfaceIndex); \
		P_GET_OBJECT(UObject,Z_Param_Outer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnParticleEffect(Z_Param_WorldContextObject,Z_Param_Out_ToWorld,Z_Param_PhysicalSurfaceIndex,Z_Param_Outer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnSoundEffect) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_ToWorld); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_PhysicalSurfaceIndex); \
		P_GET_OBJECT(UObject,Z_Param_Outer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnSoundEffect(Z_Param_WorldContextObject,Z_Param_Out_ToWorld,Z_Param_PhysicalSurfaceIndex,Z_Param_Outer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnAllEffects) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_ToWorld); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_PhysicalSurfaceIndex); \
		P_GET_OBJECT(UObject,Z_Param_Outer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnAllEffects(Z_Param_WorldContextObject,Z_Param_Out_ToWorld,Z_Param_PhysicalSurfaceIndex,Z_Param_Outer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUseCharacterMovementInfo) \
	{ \
		P_GET_OBJECT(UCharacterMovementComponent,Z_Param_CharacterMovementComponent); \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_MeshComp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UseCharacterMovementInfo(Z_Param_CharacterMovementComponent,Z_Param_MeshComp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCharacterMovement) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_MeshComp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCharacterMovementComponent**)Z_Param__Result=P_THIS->GetCharacterMovement(Z_Param_MeshComp); \
		P_NATIVE_END; \
	}


#define FootstepPluginSample_Plugins_VestigiumPlugin_Source_Vestigium_Public_Footstep_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFootstep(); \
	friend struct Z_Construct_UClass_UFootstep_Statics; \
public: \
	DECLARE_CLASS(UFootstep, UAnimNotify, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Vestigium"), NO_API) \
	DECLARE_SERIALIZER(UFootstep)


#define FootstepPluginSample_Plugins_VestigiumPlugin_Source_Vestigium_Public_Footstep_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUFootstep(); \
	friend struct Z_Construct_UClass_UFootstep_Statics; \
public: \
	DECLARE_CLASS(UFootstep, UAnimNotify, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Vestigium"), NO_API) \
	DECLARE_SERIALIZER(UFootstep)


#define FootstepPluginSample_Plugins_VestigiumPlugin_Source_Vestigium_Public_Footstep_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFootstep(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFootstep) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFootstep); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFootstep); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFootstep(UFootstep&&); \
	NO_API UFootstep(const UFootstep&); \
public:


#define FootstepPluginSample_Plugins_VestigiumPlugin_Source_Vestigium_Public_Footstep_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFootstep(UFootstep&&); \
	NO_API UFootstep(const UFootstep&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFootstep); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFootstep); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFootstep)


#define FootstepPluginSample_Plugins_VestigiumPlugin_Source_Vestigium_Public_Footstep_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bUseRayTrace() { return STRUCT_OFFSET(UFootstep, bUseRayTrace); } \
	FORCEINLINE static uint32 __PPO__TraceLength() { return STRUCT_OFFSET(UFootstep, TraceLength); } \
	FORCEINLINE static uint32 __PPO__Intensity() { return STRUCT_OFFSET(UFootstep, Intensity); } \
	FORCEINLINE static uint32 __PPO__FootBoneName() { return STRUCT_OFFSET(UFootstep, FootBoneName); } \
	FORCEINLINE static uint32 __PPO__FootstepAsset() { return STRUCT_OFFSET(UFootstep, FootstepAsset); } \
	FORCEINLINE static uint32 __PPO__bOverrideSound() { return STRUCT_OFFSET(UFootstep, bOverrideSound); } \
	FORCEINLINE static uint32 __PPO__SoundCueOverride() { return STRUCT_OFFSET(UFootstep, SoundCueOverride); } \
	FORCEINLINE static uint32 __PPO__OverrideSoundConcurrencySettings() { return STRUCT_OFFSET(UFootstep, OverrideSoundConcurrencySettings); } \
	FORCEINLINE static uint32 __PPO__bUsesParticles() { return STRUCT_OFFSET(UFootstep, bUsesParticles); } \
	FORCEINLINE static uint32 __PPO__bOverrideParticles() { return STRUCT_OFFSET(UFootstep, bOverrideParticles); } \
	FORCEINLINE static uint32 __PPO__ParticleSystemOverride() { return STRUCT_OFFSET(UFootstep, ParticleSystemOverride); } \
	FORCEINLINE static uint32 __PPO__bUsesDecals() { return STRUCT_OFFSET(UFootstep, bUsesDecals); } \
	FORCEINLINE static uint32 __PPO__bOverrideDecals() { return STRUCT_OFFSET(UFootstep, bOverrideDecals); } \
	FORCEINLINE static uint32 __PPO__DecalOverride() { return STRUCT_OFFSET(UFootstep, DecalOverride); } \
	FORCEINLINE static uint32 __PPO__GroundHeight() { return STRUCT_OFFSET(UFootstep, GroundHeight); } \
	FORCEINLINE static uint32 __PPO__GroundNormal() { return STRUCT_OFFSET(UFootstep, GroundNormal); } \
	FORCEINLINE static uint32 __PPO__bDebug() { return STRUCT_OFFSET(UFootstep, bDebug); }


#define FootstepPluginSample_Plugins_VestigiumPlugin_Source_Vestigium_Public_Footstep_h_15_PROLOG
#define FootstepPluginSample_Plugins_VestigiumPlugin_Source_Vestigium_Public_Footstep_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FootstepPluginSample_Plugins_VestigiumPlugin_Source_Vestigium_Public_Footstep_h_18_PRIVATE_PROPERTY_OFFSET \
	FootstepPluginSample_Plugins_VestigiumPlugin_Source_Vestigium_Public_Footstep_h_18_RPC_WRAPPERS \
	FootstepPluginSample_Plugins_VestigiumPlugin_Source_Vestigium_Public_Footstep_h_18_INCLASS \
	FootstepPluginSample_Plugins_VestigiumPlugin_Source_Vestigium_Public_Footstep_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FootstepPluginSample_Plugins_VestigiumPlugin_Source_Vestigium_Public_Footstep_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FootstepPluginSample_Plugins_VestigiumPlugin_Source_Vestigium_Public_Footstep_h_18_PRIVATE_PROPERTY_OFFSET \
	FootstepPluginSample_Plugins_VestigiumPlugin_Source_Vestigium_Public_Footstep_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FootstepPluginSample_Plugins_VestigiumPlugin_Source_Vestigium_Public_Footstep_h_18_INCLASS_NO_PURE_DECLS \
	FootstepPluginSample_Plugins_VestigiumPlugin_Source_Vestigium_Public_Footstep_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VESTIGIUM_API UClass* StaticClass<class UFootstep>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FootstepPluginSample_Plugins_VestigiumPlugin_Source_Vestigium_Public_Footstep_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
