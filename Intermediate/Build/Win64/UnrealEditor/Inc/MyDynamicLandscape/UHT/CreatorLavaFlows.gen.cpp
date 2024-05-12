// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyDynamicLandscape/Public/CreatorLavaFlows.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreatorLavaFlows() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	MYDYNAMICLANDSCAPE_API UClass* Z_Construct_UClass_ACreatorLavaFlows();
	MYDYNAMICLANDSCAPE_API UClass* Z_Construct_UClass_ACreatorLavaFlows_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyDynamicLandscape();
// End Cross Module References
	void ACreatorLavaFlows::StaticRegisterNativesACreatorLavaFlows()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACreatorLavaFlows);
	UClass* Z_Construct_UClass_ACreatorLavaFlows_NoRegister()
	{
		return ACreatorLavaFlows::StaticClass();
	}
	struct Z_Construct_UClass_ACreatorLavaFlows_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartFlowDirection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StartFlowDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleMassRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParticleMassRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartVelocityRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartVelocityRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberParticlesCreate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberParticlesCreate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainDeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MainDeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACreatorLavaFlows_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyDynamicLandscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACreatorLavaFlows_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CreatorLavaFlows.h" },
		{ "ModuleRelativePath", "Public/CreatorLavaFlows.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_StartFlowDirection_MetaData[] = {
		{ "Category", "CreatorLavaFlows" },
		{ "Comment", "// TODO: icon for Visual\n//UPROPERTY(EditAnywhere, BlueprintReadWrite)\n//\x09UBillboardComponent* Icon;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CreatorLavaFlows.h" },
		{ "ToolTip", "TODO: icon for Visual\nUPROPERTY(EditAnywhere, BlueprintReadWrite)\n      UBillboardComponent* Icon;" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_StartFlowDirection = { "StartFlowDirection", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACreatorLavaFlows, StartFlowDirection), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_StartFlowDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_StartFlowDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_ParticleMassRange_MetaData[] = {
		{ "Category", "Spawn System Parameters" },
		{ "ModuleRelativePath", "Public/CreatorLavaFlows.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_ParticleMassRange = { "ParticleMassRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACreatorLavaFlows, ParticleMassRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_ParticleMassRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_ParticleMassRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_StartVelocityRange_MetaData[] = {
		{ "Category", "Spawn System Parameters" },
		{ "ModuleRelativePath", "Public/CreatorLavaFlows.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_StartVelocityRange = { "StartVelocityRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACreatorLavaFlows, StartVelocityRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_StartVelocityRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_StartVelocityRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_NumberParticlesCreate_MetaData[] = {
		{ "Category", "Spawn System Parameters" },
		{ "ModuleRelativePath", "Public/CreatorLavaFlows.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_NumberParticlesCreate = { "NumberParticlesCreate", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACreatorLavaFlows, NumberParticlesCreate), METADATA_PARAMS(Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_NumberParticlesCreate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_NumberParticlesCreate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_MainDeltaTime_MetaData[] = {
		{ "Category", "Spawn System Parameters" },
		{ "ModuleRelativePath", "Public/CreatorLavaFlows.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_MainDeltaTime = { "MainDeltaTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACreatorLavaFlows, MainDeltaTime), METADATA_PARAMS(Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_MainDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_MainDeltaTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACreatorLavaFlows_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_StartFlowDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_ParticleMassRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_StartVelocityRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_NumberParticlesCreate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_MainDeltaTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACreatorLavaFlows_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACreatorLavaFlows>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACreatorLavaFlows_Statics::ClassParams = {
		&ACreatorLavaFlows::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACreatorLavaFlows_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACreatorLavaFlows_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACreatorLavaFlows_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACreatorLavaFlows_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACreatorLavaFlows()
	{
		if (!Z_Registration_Info_UClass_ACreatorLavaFlows.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACreatorLavaFlows.OuterSingleton, Z_Construct_UClass_ACreatorLavaFlows_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACreatorLavaFlows.OuterSingleton;
	}
	template<> MYDYNAMICLANDSCAPE_API UClass* StaticClass<ACreatorLavaFlows>()
	{
		return ACreatorLavaFlows::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACreatorLavaFlows);
	ACreatorLavaFlows::~ACreatorLavaFlows() {}
	struct Z_CompiledInDeferFile_FID_Work_UE5_DynamicLandscape_Source_MyDynamicLandscape_Public_CreatorLavaFlows_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_UE5_DynamicLandscape_Source_MyDynamicLandscape_Public_CreatorLavaFlows_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACreatorLavaFlows, ACreatorLavaFlows::StaticClass, TEXT("ACreatorLavaFlows"), &Z_Registration_Info_UClass_ACreatorLavaFlows, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACreatorLavaFlows), 3257236469U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_UE5_DynamicLandscape_Source_MyDynamicLandscape_Public_CreatorLavaFlows_h_844425698(TEXT("/Script/MyDynamicLandscape"),
		Z_CompiledInDeferFile_FID_Work_UE5_DynamicLandscape_Source_MyDynamicLandscape_Public_CreatorLavaFlows_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_UE5_DynamicLandscape_Source_MyDynamicLandscape_Public_CreatorLavaFlows_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
