// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_Momentum/Project_MomentumGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProject_MomentumGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	PROJECT_MOMENTUM_API UClass* Z_Construct_UClass_AProject_MomentumGameMode();
	PROJECT_MOMENTUM_API UClass* Z_Construct_UClass_AProject_MomentumGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Project_Momentum();
// End Cross Module References
	void AProject_MomentumGameMode::StaticRegisterNativesAProject_MomentumGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProject_MomentumGameMode);
	UClass* Z_Construct_UClass_AProject_MomentumGameMode_NoRegister()
	{
		return AProject_MomentumGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AProject_MomentumGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProject_MomentumGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Momentum,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProject_MomentumGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProject_MomentumGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Project_MomentumGameMode.h" },
		{ "ModuleRelativePath", "Project_MomentumGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProject_MomentumGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProject_MomentumGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProject_MomentumGameMode_Statics::ClassParams = {
		&AProject_MomentumGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProject_MomentumGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AProject_MomentumGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AProject_MomentumGameMode()
	{
		if (!Z_Registration_Info_UClass_AProject_MomentumGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProject_MomentumGameMode.OuterSingleton, Z_Construct_UClass_AProject_MomentumGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProject_MomentumGameMode.OuterSingleton;
	}
	template<> PROJECT_MOMENTUM_API UClass* StaticClass<AProject_MomentumGameMode>()
	{
		return AProject_MomentumGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProject_MomentumGameMode);
	AProject_MomentumGameMode::~AProject_MomentumGameMode() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Project_Momentum_Project_Momentum_Source_Project_Momentum_Project_MomentumGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Project_Momentum_Project_Momentum_Source_Project_Momentum_Project_MomentumGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProject_MomentumGameMode, AProject_MomentumGameMode::StaticClass, TEXT("AProject_MomentumGameMode"), &Z_Registration_Info_UClass_AProject_MomentumGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProject_MomentumGameMode), 1273941447U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Project_Momentum_Project_Momentum_Source_Project_Momentum_Project_MomentumGameMode_h_1289105759(TEXT("/Script/Project_Momentum"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Project_Momentum_Project_Momentum_Source_Project_Momentum_Project_MomentumGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Project_Momentum_Project_Momentum_Source_Project_Momentum_Project_MomentumGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
