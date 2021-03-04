// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RACE_GAME_Race_GamePawn_generated_h
#error "Race_GamePawn.generated.h already included, missing '#pragma once' in Race_GamePawn.h"
#endif
#define RACE_GAME_Race_GamePawn_generated_h

#define Project_Source_Race_Game_Race_GamePawn_h_19_SPARSE_DATA
#define Project_Source_Race_Game_Race_GamePawn_h_19_RPC_WRAPPERS
#define Project_Source_Race_Game_Race_GamePawn_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define Project_Source_Race_Game_Race_GamePawn_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARace_GamePawn(); \
	friend struct Z_Construct_UClass_ARace_GamePawn_Statics; \
public: \
	DECLARE_CLASS(ARace_GamePawn, AWheeledVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Race_Game"), NO_API) \
	DECLARE_SERIALIZER(ARace_GamePawn)


#define Project_Source_Race_Game_Race_GamePawn_h_19_INCLASS \
private: \
	static void StaticRegisterNativesARace_GamePawn(); \
	friend struct Z_Construct_UClass_ARace_GamePawn_Statics; \
public: \
	DECLARE_CLASS(ARace_GamePawn, AWheeledVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Race_Game"), NO_API) \
	DECLARE_SERIALIZER(ARace_GamePawn)


#define Project_Source_Race_Game_Race_GamePawn_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARace_GamePawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARace_GamePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARace_GamePawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARace_GamePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARace_GamePawn(ARace_GamePawn&&); \
	NO_API ARace_GamePawn(const ARace_GamePawn&); \
public:


#define Project_Source_Race_Game_Race_GamePawn_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARace_GamePawn(ARace_GamePawn&&); \
	NO_API ARace_GamePawn(const ARace_GamePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARace_GamePawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARace_GamePawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARace_GamePawn)


#define Project_Source_Race_Game_Race_GamePawn_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(ARace_GamePawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ARace_GamePawn, Camera); } \
	FORCEINLINE static uint32 __PPO__InternalCameraBase() { return STRUCT_OFFSET(ARace_GamePawn, InternalCameraBase); } \
	FORCEINLINE static uint32 __PPO__InternalCamera() { return STRUCT_OFFSET(ARace_GamePawn, InternalCamera); } \
	FORCEINLINE static uint32 __PPO__InCarSpeed() { return STRUCT_OFFSET(ARace_GamePawn, InCarSpeed); } \
	FORCEINLINE static uint32 __PPO__InCarGear() { return STRUCT_OFFSET(ARace_GamePawn, InCarGear); }


#define Project_Source_Race_Game_Race_GamePawn_h_16_PROLOG
#define Project_Source_Race_Game_Race_GamePawn_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Source_Race_Game_Race_GamePawn_h_19_PRIVATE_PROPERTY_OFFSET \
	Project_Source_Race_Game_Race_GamePawn_h_19_SPARSE_DATA \
	Project_Source_Race_Game_Race_GamePawn_h_19_RPC_WRAPPERS \
	Project_Source_Race_Game_Race_GamePawn_h_19_INCLASS \
	Project_Source_Race_Game_Race_GamePawn_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Source_Race_Game_Race_GamePawn_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Source_Race_Game_Race_GamePawn_h_19_PRIVATE_PROPERTY_OFFSET \
	Project_Source_Race_Game_Race_GamePawn_h_19_SPARSE_DATA \
	Project_Source_Race_Game_Race_GamePawn_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Source_Race_Game_Race_GamePawn_h_19_INCLASS_NO_PURE_DECLS \
	Project_Source_Race_Game_Race_GamePawn_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RACE_GAME_API UClass* StaticClass<class ARace_GamePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Source_Race_Game_Race_GamePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
