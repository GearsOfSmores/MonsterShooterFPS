// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fps_Monster_Shooter/Fps_Monster_ShooterHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFps_Monster_ShooterHUD() {}
// Cross Module References
	FPS_MONSTER_SHOOTER_API UClass* Z_Construct_UClass_AFps_Monster_ShooterHUD_NoRegister();
	FPS_MONSTER_SHOOTER_API UClass* Z_Construct_UClass_AFps_Monster_ShooterHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Fps_Monster_Shooter();
// End Cross Module References
	void AFps_Monster_ShooterHUD::StaticRegisterNativesAFps_Monster_ShooterHUD()
	{
	}
	UClass* Z_Construct_UClass_AFps_Monster_ShooterHUD_NoRegister()
	{
		return AFps_Monster_ShooterHUD::StaticClass();
	}
	struct Z_Construct_UClass_AFps_Monster_ShooterHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFps_Monster_ShooterHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Fps_Monster_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFps_Monster_ShooterHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Fps_Monster_ShooterHUD.h" },
		{ "ModuleRelativePath", "Fps_Monster_ShooterHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFps_Monster_ShooterHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFps_Monster_ShooterHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFps_Monster_ShooterHUD_Statics::ClassParams = {
		&AFps_Monster_ShooterHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFps_Monster_ShooterHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFps_Monster_ShooterHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFps_Monster_ShooterHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFps_Monster_ShooterHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFps_Monster_ShooterHUD, 1139387832);
	template<> FPS_MONSTER_SHOOTER_API UClass* StaticClass<AFps_Monster_ShooterHUD>()
	{
		return AFps_Monster_ShooterHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFps_Monster_ShooterHUD(Z_Construct_UClass_AFps_Monster_ShooterHUD, &AFps_Monster_ShooterHUD::StaticClass, TEXT("/Script/Fps_Monster_Shooter"), TEXT("AFps_Monster_ShooterHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFps_Monster_ShooterHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
