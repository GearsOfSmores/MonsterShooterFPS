// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fps_Monster_Shooter/Fps_Monster_ShooterGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFps_Monster_ShooterGameMode() {}
// Cross Module References
	FPS_MONSTER_SHOOTER_API UClass* Z_Construct_UClass_AFps_Monster_ShooterGameMode_NoRegister();
	FPS_MONSTER_SHOOTER_API UClass* Z_Construct_UClass_AFps_Monster_ShooterGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Fps_Monster_Shooter();
// End Cross Module References
	void AFps_Monster_ShooterGameMode::StaticRegisterNativesAFps_Monster_ShooterGameMode()
	{
	}
	UClass* Z_Construct_UClass_AFps_Monster_ShooterGameMode_NoRegister()
	{
		return AFps_Monster_ShooterGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFps_Monster_ShooterGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFps_Monster_ShooterGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Fps_Monster_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFps_Monster_ShooterGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Fps_Monster_ShooterGameMode.h" },
		{ "ModuleRelativePath", "Fps_Monster_ShooterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFps_Monster_ShooterGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFps_Monster_ShooterGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFps_Monster_ShooterGameMode_Statics::ClassParams = {
		&AFps_Monster_ShooterGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFps_Monster_ShooterGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFps_Monster_ShooterGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFps_Monster_ShooterGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFps_Monster_ShooterGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFps_Monster_ShooterGameMode, 2363008705);
	template<> FPS_MONSTER_SHOOTER_API UClass* StaticClass<AFps_Monster_ShooterGameMode>()
	{
		return AFps_Monster_ShooterGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFps_Monster_ShooterGameMode(Z_Construct_UClass_AFps_Monster_ShooterGameMode, &AFps_Monster_ShooterGameMode::StaticClass, TEXT("/Script/Fps_Monster_Shooter"), TEXT("AFps_Monster_ShooterGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFps_Monster_ShooterGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
