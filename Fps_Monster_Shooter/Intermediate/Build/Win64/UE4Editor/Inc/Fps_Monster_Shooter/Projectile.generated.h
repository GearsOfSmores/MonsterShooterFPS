// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef FPS_MONSTER_SHOOTER_Projectile_generated_h
#error "Projectile.generated.h already included, missing '#pragma once' in Projectile.h"
#endif
#define FPS_MONSTER_SHOOTER_Projectile_generated_h

#define Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Projectile_h_12_SPARSE_DATA
#define Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Projectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Projectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend struct Z_Construct_UClass_AProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Fps_Monster_Shooter"), NO_API) \
	DECLARE_SERIALIZER(AProjectile)


#define Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Projectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend struct Z_Construct_UClass_AProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Fps_Monster_Shooter"), NO_API) \
	DECLARE_SERIALIZER(AProjectile)


#define Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Projectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public:


#define Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectile)


#define Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Projectile_h_12_PRIVATE_PROPERTY_OFFSET
#define Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Projectile_h_9_PROLOG
#define Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Projectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Projectile_h_12_SPARSE_DATA \
	Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Projectile_h_12_RPC_WRAPPERS \
	Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Projectile_h_12_INCLASS \
	Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Projectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Projectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Projectile_h_12_SPARSE_DATA \
	Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Projectile_h_12_INCLASS_NO_PURE_DECLS \
	Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_MONSTER_SHOOTER_API UClass* StaticClass<class AProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
