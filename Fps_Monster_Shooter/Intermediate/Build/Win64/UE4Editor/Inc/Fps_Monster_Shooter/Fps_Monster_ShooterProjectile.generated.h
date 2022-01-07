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
struct FVector;
struct FHitResult;
#ifdef FPS_MONSTER_SHOOTER_Fps_Monster_ShooterProjectile_generated_h
#error "Fps_Monster_ShooterProjectile.generated.h already included, missing '#pragma once' in Fps_Monster_ShooterProjectile.h"
#endif
#define FPS_MONSTER_SHOOTER_Fps_Monster_ShooterProjectile_generated_h

#define Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Fps_Monster_ShooterProjectile_h_15_SPARSE_DATA
#define Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Fps_Monster_ShooterProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Fps_Monster_ShooterProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Fps_Monster_ShooterProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFps_Monster_ShooterProjectile(); \
	friend struct Z_Construct_UClass_AFps_Monster_ShooterProjectile_Statics; \
public: \
	DECLARE_CLASS(AFps_Monster_ShooterProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Fps_Monster_Shooter"), NO_API) \
	DECLARE_SERIALIZER(AFps_Monster_ShooterProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Fps_Monster_ShooterProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFps_Monster_ShooterProjectile(); \
	friend struct Z_Construct_UClass_AFps_Monster_ShooterProjectile_Statics; \
public: \
	DECLARE_CLASS(AFps_Monster_ShooterProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Fps_Monster_Shooter"), NO_API) \
	DECLARE_SERIALIZER(AFps_Monster_ShooterProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Fps_Monster_ShooterProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFps_Monster_ShooterProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFps_Monster_ShooterProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFps_Monster_ShooterProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFps_Monster_ShooterProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFps_Monster_ShooterProjectile(AFps_Monster_ShooterProjectile&&); \
	NO_API AFps_Monster_ShooterProjectile(const AFps_Monster_ShooterProjectile&); \
public:


#define Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Fps_Monster_ShooterProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFps_Monster_ShooterProjectile(AFps_Monster_ShooterProjectile&&); \
	NO_API AFps_Monster_ShooterProjectile(const AFps_Monster_ShooterProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFps_Monster_ShooterProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFps_Monster_ShooterProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFps_Monster_ShooterProjectile)


#define Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Fps_Monster_ShooterProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AFps_Monster_ShooterProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AFps_Monster_ShooterProjectile, ProjectileMovement); }


#define Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Fps_Monster_ShooterProjectile_h_12_PROLOG
#define Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Fps_Monster_ShooterProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Fps_Monster_ShooterProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Fps_Monster_ShooterProjectile_h_15_SPARSE_DATA \
	Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Fps_Monster_ShooterProjectile_h_15_RPC_WRAPPERS \
	Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Fps_Monster_ShooterProjectile_h_15_INCLASS \
	Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Fps_Monster_ShooterProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Fps_Monster_ShooterProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Fps_Monster_ShooterProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Fps_Monster_ShooterProjectile_h_15_SPARSE_DATA \
	Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Fps_Monster_ShooterProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Fps_Monster_ShooterProjectile_h_15_INCLASS_NO_PURE_DECLS \
	Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Fps_Monster_ShooterProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_MONSTER_SHOOTER_API UClass* StaticClass<class AFps_Monster_ShooterProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Fps_Monster_ShooterProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
