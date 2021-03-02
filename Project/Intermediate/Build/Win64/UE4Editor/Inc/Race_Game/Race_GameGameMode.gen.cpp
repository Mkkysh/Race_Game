// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Race_Game/Race_GameGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRace_GameGameMode() {}
// Cross Module References
	RACE_GAME_API UClass* Z_Construct_UClass_ARace_GameGameMode_NoRegister();
	RACE_GAME_API UClass* Z_Construct_UClass_ARace_GameGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Race_Game();
// End Cross Module References
	void ARace_GameGameMode::StaticRegisterNativesARace_GameGameMode()
	{
	}
	UClass* Z_Construct_UClass_ARace_GameGameMode_NoRegister()
	{
		return ARace_GameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ARace_GameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARace_GameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Race_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARace_GameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Race_GameGameMode.h" },
		{ "ModuleRelativePath", "Race_GameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARace_GameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARace_GameGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARace_GameGameMode_Statics::ClassParams = {
		&ARace_GameGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ARace_GameGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARace_GameGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARace_GameGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARace_GameGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARace_GameGameMode, 4205581424);
	template<> RACE_GAME_API UClass* StaticClass<ARace_GameGameMode>()
	{
		return ARace_GameGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARace_GameGameMode(Z_Construct_UClass_ARace_GameGameMode, &ARace_GameGameMode::StaticClass, TEXT("/Script/Race_Game"), TEXT("ARace_GameGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARace_GameGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
