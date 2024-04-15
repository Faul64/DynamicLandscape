// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyDynamicLandscape/MyDynamicLandscapeGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyDynamicLandscapeGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	MYDYNAMICLANDSCAPE_API UClass* Z_Construct_UClass_AMyDynamicLandscapeGameModeBase();
	MYDYNAMICLANDSCAPE_API UClass* Z_Construct_UClass_AMyDynamicLandscapeGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyDynamicLandscape();
// End Cross Module References
	void AMyDynamicLandscapeGameModeBase::StaticRegisterNativesAMyDynamicLandscapeGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyDynamicLandscapeGameModeBase);
	UClass* Z_Construct_UClass_AMyDynamicLandscapeGameModeBase_NoRegister()
	{
		return AMyDynamicLandscapeGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMyDynamicLandscapeGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyDynamicLandscapeGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyDynamicLandscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDynamicLandscapeGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyDynamicLandscapeGameModeBase.h" },
		{ "ModuleRelativePath", "MyDynamicLandscapeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyDynamicLandscapeGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyDynamicLandscapeGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyDynamicLandscapeGameModeBase_Statics::ClassParams = {
		&AMyDynamicLandscapeGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyDynamicLandscapeGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyDynamicLandscapeGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyDynamicLandscapeGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AMyDynamicLandscapeGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyDynamicLandscapeGameModeBase.OuterSingleton, Z_Construct_UClass_AMyDynamicLandscapeGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyDynamicLandscapeGameModeBase.OuterSingleton;
	}
	template<> MYDYNAMICLANDSCAPE_API UClass* StaticClass<AMyDynamicLandscapeGameModeBase>()
	{
		return AMyDynamicLandscapeGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyDynamicLandscapeGameModeBase);
	AMyDynamicLandscapeGameModeBase::~AMyDynamicLandscapeGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Work_UE5_DynamicLandscape_Source_MyDynamicLandscape_MyDynamicLandscapeGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_UE5_DynamicLandscape_Source_MyDynamicLandscape_MyDynamicLandscapeGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyDynamicLandscapeGameModeBase, AMyDynamicLandscapeGameModeBase::StaticClass, TEXT("AMyDynamicLandscapeGameModeBase"), &Z_Registration_Info_UClass_AMyDynamicLandscapeGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyDynamicLandscapeGameModeBase), 3149173262U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_UE5_DynamicLandscape_Source_MyDynamicLandscape_MyDynamicLandscapeGameModeBase_h_1869935658(TEXT("/Script/MyDynamicLandscape"),
		Z_CompiledInDeferFile_FID_Work_UE5_DynamicLandscape_Source_MyDynamicLandscape_MyDynamicLandscapeGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_UE5_DynamicLandscape_Source_MyDynamicLandscape_MyDynamicLandscapeGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
