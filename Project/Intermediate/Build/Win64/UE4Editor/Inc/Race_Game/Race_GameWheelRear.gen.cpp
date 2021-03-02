// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Race_Game/Race_GameWheelRear.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRace_GameWheelRear() {}
// Cross Module References
	RACE_GAME_API UClass* Z_Construct_UClass_URace_GameWheelRear_NoRegister();
	RACE_GAME_API UClass* Z_Construct_UClass_URace_GameWheelRear();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_Race_Game();
// End Cross Module References
	void URace_GameWheelRear::StaticRegisterNativesURace_GameWheelRear()
	{
	}
	UClass* Z_Construct_UClass_URace_GameWheelRear_NoRegister()
	{
		return URace_GameWheelRear::StaticClass();
	}
	struct Z_Construct_UClass_URace_GameWheelRear_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URace_GameWheelRear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_Race_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URace_GameWheelRear_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Race_GameWheelRear.h" },
		{ "ModuleRelativePath", "Race_GameWheelRear.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URace_GameWheelRear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URace_GameWheelRear>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URace_GameWheelRear_Statics::ClassParams = {
		&URace_GameWheelRear::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URace_GameWheelRear_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URace_GameWheelRear_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URace_GameWheelRear()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URace_GameWheelRear_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URace_GameWheelRear, 1434329283);
	template<> RACE_GAME_API UClass* StaticClass<URace_GameWheelRear>()
	{
		return URace_GameWheelRear::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URace_GameWheelRear(Z_Construct_UClass_URace_GameWheelRear, &URace_GameWheelRear::StaticClass, TEXT("/Script/Race_Game"), TEXT("URace_GameWheelRear"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URace_GameWheelRear);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
