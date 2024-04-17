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
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartPulsePower_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartPulsePower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberParticles_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NumberParticles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreationTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CreationTime;
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
		{ "Comment", "//TODO: https://docs.unrealengine.com/4.26/en-US/ProgrammingAndScripting/GameplayArchitecture/Properties/\n// (VisibleDefaultsOnly, Category = \"Starting Parameters\")\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CreatorLavaFlows.h" },
		{ "ToolTip", "TODO: https:docs.unrealengine.com/4.26/en-US/ProgrammingAndScripting/GameplayArchitecture/Properties/\n (VisibleDefaultsOnly, Category = \"Starting Parameters\")" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_StartFlowDirection = { "StartFlowDirection", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACreatorLavaFlows, StartFlowDirection), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_StartFlowDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_StartFlowDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "CreatorLavaFlows" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CreatorLavaFlows.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACreatorLavaFlows, Icon), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_StartPulsePower_MetaData[] = {
		{ "Category", "Starting Parameters" },
		{ "ModuleRelativePath", "Public/CreatorLavaFlows.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_StartPulsePower = { "StartPulsePower", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACreatorLavaFlows, StartPulsePower), METADATA_PARAMS(Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_StartPulsePower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_StartPulsePower_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_NumberParticles_MetaData[] = {
		{ "Category", "Starting Parameters" },
		{ "ModuleRelativePath", "Public/CreatorLavaFlows.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_NumberParticles = { "NumberParticles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACreatorLavaFlows, NumberParticles), METADATA_PARAMS(Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_NumberParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_NumberParticles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_CreationTime_MetaData[] = {
		{ "Category", "Starting Parameters" },
		{ "ModuleRelativePath", "Public/CreatorLavaFlows.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_CreationTime = { "CreationTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACreatorLavaFlows, CreationTime), METADATA_PARAMS(Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_CreationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_CreationTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACreatorLavaFlows_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_StartFlowDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_Icon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_StartPulsePower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_NumberParticles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_CreationTime,
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
		{ Z_Construct_UClass_ACreatorLavaFlows, ACreatorLavaFlows::StaticClass, TEXT("ACreatorLavaFlows"), &Z_Registration_Info_UClass_ACreatorLavaFlows, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACreatorLavaFlows), 918339702U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_UE5_DynamicLandscape_Source_MyDynamicLandscape_Public_CreatorLavaFlows_h_3963572844(TEXT("/Script/MyDynamicLandscape"),
		Z_CompiledInDeferFile_FID_Work_UE5_DynamicLandscape_Source_MyDynamicLandscape_Public_CreatorLavaFlows_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_UE5_DynamicLandscape_Source_MyDynamicLandscape_Public_CreatorLavaFlows_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
