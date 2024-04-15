// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyDynamicLandscape/FlowParticles.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowParticles() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MYDYNAMICLANDSCAPE_API UClass* Z_Construct_UClass_AFlowParticles();
	MYDYNAMICLANDSCAPE_API UClass* Z_Construct_UClass_AFlowParticles_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyDynamicLandscape();
// End Cross Module References
	void AFlowParticles::StaticRegisterNativesAFlowParticles()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFlowParticles);
	UClass* Z_Construct_UClass_AFlowParticles_NoRegister()
	{
		return AFlowParticles::StaticClass();
	}
	struct Z_Construct_UClass_AFlowParticles_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlowParticles_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyDynamicLandscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowParticles_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FlowParticles.h" },
		{ "ModuleRelativePath", "FlowParticles.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlowParticles_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlowParticles>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFlowParticles_Statics::ClassParams = {
		&AFlowParticles::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFlowParticles_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowParticles_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFlowParticles()
	{
		if (!Z_Registration_Info_UClass_AFlowParticles.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFlowParticles.OuterSingleton, Z_Construct_UClass_AFlowParticles_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFlowParticles.OuterSingleton;
	}
	template<> MYDYNAMICLANDSCAPE_API UClass* StaticClass<AFlowParticles>()
	{
		return AFlowParticles::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlowParticles);
	AFlowParticles::~AFlowParticles() {}
	struct Z_CompiledInDeferFile_FID_Work_UE5_DynamicLandscape_Source_MyDynamicLandscape_FlowParticles_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_UE5_DynamicLandscape_Source_MyDynamicLandscape_FlowParticles_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFlowParticles, AFlowParticles::StaticClass, TEXT("AFlowParticles"), &Z_Registration_Info_UClass_AFlowParticles, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFlowParticles), 1353222986U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_UE5_DynamicLandscape_Source_MyDynamicLandscape_FlowParticles_h_2057636580(TEXT("/Script/MyDynamicLandscape"),
		Z_CompiledInDeferFile_FID_Work_UE5_DynamicLandscape_Source_MyDynamicLandscape_FlowParticles_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_UE5_DynamicLandscape_Source_MyDynamicLandscape_FlowParticles_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
