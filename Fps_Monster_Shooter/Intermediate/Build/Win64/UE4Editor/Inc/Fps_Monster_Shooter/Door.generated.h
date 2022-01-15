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
#ifdef FPS_MONSTER_SHOOTER_Door_generated_h
#error "Door.generated.h already included, missing '#pragma once' in Door.h"
#endif
#define FPS_MONSTER_SHOOTER_Door_generated_h

#define Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Door_h_12_SPARSE_DATA
#define Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Door_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Door_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Door_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADoor(); \
	friend struct Z_Construct_UClass_ADoor_Statics; \
public: \
	DECLARE_CLASS(ADoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Fps_Monster_Shooter"), NO_API) \
	DECLARE_SERIALIZER(ADoor)


#define Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Door_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADoor(); \
	friend struct Z_Construct_UClass_ADoor_Statics; \
public: \
	DECLARE_CLASS(ADoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Fps_Monster_Shooter"), NO_API) \
	DECLARE_SERIALIZER(ADoor)


#define Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Door_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoor(ADoor&&); \
	NO_API ADoor(const ADoor&); \
public:


#define Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Door_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoor(ADoor&&); \
	NO_API ADoor(const ADoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADoor)


#define Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Door_h_12_PRIVATE_PROPERTY_OFFSET
#define Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Door_h_9_PROLOG
#define Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Door_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Door_h_12_PRIVATE_PROPERTY_OFFSET \
	Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Door_h_12_SPARSE_DATA \
	Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Door_h_12_RPC_WRAPPERS \
	Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Door_h_12_INCLASS \
	Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Door_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Door_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Door_h_12_PRIVATE_PROPERTY_OFFSET \
	Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Door_h_12_SPARSE_DATA \
	Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Door_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Door_h_12_INCLASS_NO_PURE_DECLS \
	Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Door_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_MONSTER_SHOOTER_API UClass* StaticClass<class ADoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Fps_Monster_Shooter_Source_Fps_Monster_Shooter_Door_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
