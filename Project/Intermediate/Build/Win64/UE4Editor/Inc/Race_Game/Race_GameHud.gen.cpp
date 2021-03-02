// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Race_Game/Race_GameHud.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRace_GameHud() {}
// Cross Module References
	RACE_GAME_API UClass* Z_Construct_UClass_ARace_GameHud_NoRegister();
	RACE_GAME_API UClass* Z_Construct_UClass_ARace_GameHud();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Race_Game();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
// End Cross Module References
	void ARace_GameHud::StaticRegisterNativesARace_GameHud()
	{
	}
	UClass* Z_Construct_UClass_ARace_GameHud_NoRegister()
	{
		return ARace_GameHud::StaticClass();
	}
	struct Z_Construct_UClass_ARace_GameHud_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUDFont;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARace_GameHud_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Race_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARace_GameHud_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Race_GameHud.h" },
		{ "ModuleRelativePath", "Race_GameHud.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARace_GameHud_Statics::NewProp_HUDFont_MetaData[] = {
		{ "Comment", "/** Font used to render the vehicle info */" },
		{ "ModuleRelativePath", "Race_GameHud.h" },
		{ "ToolTip", "Font used to render the vehicle info" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARace_GameHud_Statics::NewProp_HUDFont = { "HUDFont", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARace_GameHud, HUDFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARace_GameHud_Statics::NewProp_HUDFont_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARace_GameHud_Statics::NewProp_HUDFont_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARace_GameHud_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARace_GameHud_Statics::NewProp_HUDFont,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARace_GameHud_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARace_GameHud>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARace_GameHud_Statics::ClassParams = {
		&ARace_GameHud::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARace_GameHud_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARace_GameHud_Statics::PropPointers),
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARace_GameHud_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARace_GameHud_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARace_GameHud()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARace_GameHud_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARace_GameHud, 3643655357);
	template<> RACE_GAME_API UClass* StaticClass<ARace_GameHud>()
	{
		return ARace_GameHud::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARace_GameHud(Z_Construct_UClass_ARace_GameHud, &ARace_GameHud::StaticClass, TEXT("/Script/Race_Game"), TEXT("ARace_GameHud"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARace_GameHud);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
