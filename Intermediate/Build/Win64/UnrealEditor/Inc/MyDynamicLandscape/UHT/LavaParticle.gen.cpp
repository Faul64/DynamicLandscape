// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyDynamicLandscape/Public/LavaParticle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLavaParticle() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	MYDYNAMICLANDSCAPE_API UClass* Z_Construct_UClass_ALavaParticle();
	MYDYNAMICLANDSCAPE_API UClass* Z_Construct_UClass_ALavaParticle_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyDynamicLandscape();
// End Cross Module References
	void ALavaParticle::StaticRegisterNativesALavaParticle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALavaParticle);
	UClass* Z_Construct_UClass_ALavaParticle_NoRegister()
	{
		return ALavaParticle::StaticClass();
	}
	struct Z_Construct_UClass_ALavaParticle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALavaParticle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyDynamicLandscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALavaParticle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LavaParticle.h" },
		{ "ModuleRelativePath", "Public/LavaParticle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALavaParticle_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "LavaParticle" },
		{ "Comment", "// TODO: 1 \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LavaParticle.h" },
		{ "ToolTip", "TODO: 1" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALavaParticle_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALavaParticle, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALavaParticle_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALavaParticle_Statics::NewProp_Mesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALavaParticle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALavaParticle_Statics::NewProp_Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALavaParticle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALavaParticle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALavaParticle_Statics::ClassParams = {
		&ALavaParticle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALavaParticle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALavaParticle_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALavaParticle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALavaParticle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALavaParticle()
	{
		if (!Z_Registration_Info_UClass_ALavaParticle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALavaParticle.OuterSingleton, Z_Construct_UClass_ALavaParticle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALavaParticle.OuterSingleton;
	}
	template<> MYDYNAMICLANDSCAPE_API UClass* StaticClass<ALavaParticle>()
	{
		return ALavaParticle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALavaParticle);
	ALavaParticle::~ALavaParticle() {}
	struct Z_CompiledInDeferFile_FID_Work_UE5_DynamicLandscape_Source_MyDynamicLandscape_Public_LavaParticle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_UE5_DynamicLandscape_Source_MyDynamicLandscape_Public_LavaParticle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALavaParticle, ALavaParticle::StaticClass, TEXT("ALavaParticle"), &Z_Registration_Info_UClass_ALavaParticle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALavaParticle), 2903012387U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_UE5_DynamicLandscape_Source_MyDynamicLandscape_Public_LavaParticle_h_4272144896(TEXT("/Script/MyDynamicLandscape"),
		Z_CompiledInDeferFile_FID_Work_UE5_DynamicLandscape_Source_MyDynamicLandscape_Public_LavaParticle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_UE5_DynamicLandscape_Source_MyDynamicLandscape_Public_LavaParticle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
