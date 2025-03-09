// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MermeladaJam2025/MermeladaJam2025GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMermeladaJam2025GameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	MERMELADAJAM2025_API UClass* Z_Construct_UClass_AMermeladaJam2025GameMode();
	MERMELADAJAM2025_API UClass* Z_Construct_UClass_AMermeladaJam2025GameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MermeladaJam2025();
// End Cross Module References
	void AMermeladaJam2025GameMode::StaticRegisterNativesAMermeladaJam2025GameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMermeladaJam2025GameMode);
	UClass* Z_Construct_UClass_AMermeladaJam2025GameMode_NoRegister()
	{
		return AMermeladaJam2025GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMermeladaJam2025GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMermeladaJam2025GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MermeladaJam2025,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMermeladaJam2025GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MermeladaJam2025GameMode.h" },
		{ "ModuleRelativePath", "MermeladaJam2025GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMermeladaJam2025GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMermeladaJam2025GameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMermeladaJam2025GameMode_Statics::ClassParams = {
		&AMermeladaJam2025GameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMermeladaJam2025GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMermeladaJam2025GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMermeladaJam2025GameMode()
	{
		if (!Z_Registration_Info_UClass_AMermeladaJam2025GameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMermeladaJam2025GameMode.OuterSingleton, Z_Construct_UClass_AMermeladaJam2025GameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMermeladaJam2025GameMode.OuterSingleton;
	}
	template<> MERMELADAJAM2025_API UClass* StaticClass<AMermeladaJam2025GameMode>()
	{
		return AMermeladaJam2025GameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMermeladaJam2025GameMode);
	AMermeladaJam2025GameMode::~AMermeladaJam2025GameMode() {}
	struct Z_CompiledInDeferFile_FID_MermeladaJam2025_Source_MermeladaJam2025_MermeladaJam2025GameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MermeladaJam2025_Source_MermeladaJam2025_MermeladaJam2025GameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMermeladaJam2025GameMode, AMermeladaJam2025GameMode::StaticClass, TEXT("AMermeladaJam2025GameMode"), &Z_Registration_Info_UClass_AMermeladaJam2025GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMermeladaJam2025GameMode), 40555785U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MermeladaJam2025_Source_MermeladaJam2025_MermeladaJam2025GameMode_h_3595093257(TEXT("/Script/MermeladaJam2025"),
		Z_CompiledInDeferFile_FID_MermeladaJam2025_Source_MermeladaJam2025_MermeladaJam2025GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MermeladaJam2025_Source_MermeladaJam2025_MermeladaJam2025GameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
