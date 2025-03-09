// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MermeladaJam2025/MermeladaJam2025Character.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMermeladaJam2025Character() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	MERMELADAJAM2025_API UClass* Z_Construct_UClass_AMermeladaJam2025Character();
	MERMELADAJAM2025_API UClass* Z_Construct_UClass_AMermeladaJam2025Character_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MermeladaJam2025();
// End Cross Module References
	void AMermeladaJam2025Character::StaticRegisterNativesAMermeladaJam2025Character()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMermeladaJam2025Character);
	UClass* Z_Construct_UClass_AMermeladaJam2025Character_NoRegister()
	{
		return AMermeladaJam2025Character::StaticClass();
	}
	struct Z_Construct_UClass_AMermeladaJam2025Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMermeladaJam2025Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MermeladaJam2025,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMermeladaJam2025Character_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MermeladaJam2025Character.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "MermeladaJam2025Character.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMermeladaJam2025Character_Statics::NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Top down camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MermeladaJam2025Character.h" },
		{ "ToolTip", "Top down camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMermeladaJam2025Character_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMermeladaJam2025Character, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMermeladaJam2025Character_Statics::NewProp_TopDownCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMermeladaJam2025Character_Statics::NewProp_TopDownCameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMermeladaJam2025Character_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MermeladaJam2025Character.h" },
		{ "ToolTip", "Camera boom positioning the camera above the character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMermeladaJam2025Character_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMermeladaJam2025Character, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMermeladaJam2025Character_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMermeladaJam2025Character_Statics::NewProp_CameraBoom_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMermeladaJam2025Character_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMermeladaJam2025Character_Statics::NewProp_TopDownCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMermeladaJam2025Character_Statics::NewProp_CameraBoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMermeladaJam2025Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMermeladaJam2025Character>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMermeladaJam2025Character_Statics::ClassParams = {
		&AMermeladaJam2025Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMermeladaJam2025Character_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMermeladaJam2025Character_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMermeladaJam2025Character_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMermeladaJam2025Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMermeladaJam2025Character()
	{
		if (!Z_Registration_Info_UClass_AMermeladaJam2025Character.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMermeladaJam2025Character.OuterSingleton, Z_Construct_UClass_AMermeladaJam2025Character_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMermeladaJam2025Character.OuterSingleton;
	}
	template<> MERMELADAJAM2025_API UClass* StaticClass<AMermeladaJam2025Character>()
	{
		return AMermeladaJam2025Character::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMermeladaJam2025Character);
	AMermeladaJam2025Character::~AMermeladaJam2025Character() {}
	struct Z_CompiledInDeferFile_FID_MermeladaJam2025_Source_MermeladaJam2025_MermeladaJam2025Character_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MermeladaJam2025_Source_MermeladaJam2025_MermeladaJam2025Character_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMermeladaJam2025Character, AMermeladaJam2025Character::StaticClass, TEXT("AMermeladaJam2025Character"), &Z_Registration_Info_UClass_AMermeladaJam2025Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMermeladaJam2025Character), 3375800379U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MermeladaJam2025_Source_MermeladaJam2025_MermeladaJam2025Character_h_2431371334(TEXT("/Script/MermeladaJam2025"),
		Z_CompiledInDeferFile_FID_MermeladaJam2025_Source_MermeladaJam2025_MermeladaJam2025Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MermeladaJam2025_Source_MermeladaJam2025_MermeladaJam2025Character_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
