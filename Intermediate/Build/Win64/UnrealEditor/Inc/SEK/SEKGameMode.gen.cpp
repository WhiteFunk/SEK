// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SEK/SEKGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSEKGameMode() {}
// Cross Module References
	SEK_API UClass* Z_Construct_UClass_ASEKGameMode_NoRegister();
	SEK_API UClass* Z_Construct_UClass_ASEKGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SEK();
// End Cross Module References
	void ASEKGameMode::StaticRegisterNativesASEKGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASEKGameMode);
	UClass* Z_Construct_UClass_ASEKGameMode_NoRegister()
	{
		return ASEKGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASEKGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASEKGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SEK,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASEKGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SEKGameMode.h" },
		{ "ModuleRelativePath", "SEKGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASEKGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASEKGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASEKGameMode_Statics::ClassParams = {
		&ASEKGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASEKGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASEKGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASEKGameMode()
	{
		if (!Z_Registration_Info_UClass_ASEKGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASEKGameMode.OuterSingleton, Z_Construct_UClass_ASEKGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASEKGameMode.OuterSingleton;
	}
	template<> SEK_API UClass* StaticClass<ASEKGameMode>()
	{
		return ASEKGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASEKGameMode);
	struct Z_CompiledInDeferFile_FID_SEK_Source_SEK_SEKGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SEK_Source_SEK_SEKGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASEKGameMode, ASEKGameMode::StaticClass, TEXT("ASEKGameMode"), &Z_Registration_Info_UClass_ASEKGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASEKGameMode), 2289645213U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SEK_Source_SEK_SEKGameMode_h_3147814552(TEXT("/Script/SEK"),
		Z_CompiledInDeferFile_FID_SEK_Source_SEK_SEKGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SEK_Source_SEK_SEKGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
