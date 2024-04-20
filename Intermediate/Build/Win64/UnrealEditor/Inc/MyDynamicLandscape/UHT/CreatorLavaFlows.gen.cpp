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
	MYDYNAMICLANDSCAPE_API UClass* Z_Construct_UClass_ALavaParticle_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyDynamicLandscape();
// End Cross Module References
	DEFINE_FUNCTION(ACreatorLavaFlows::execUpdateLocation)
	{
		P_GET_OBJECT(ALavaParticle,Z_Param_Particle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateLocation(Z_Param_Particle,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACreatorLavaFlows::execUpdateVelocity)
	{
		P_GET_OBJECT(ALavaParticle,Z_Param_Particle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateVelocity(Z_Param_Particle,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACreatorLavaFlows::execUpdateAcceleration)
	{
		P_GET_OBJECT(ALavaParticle,Z_Param_Particle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAcceleration(Z_Param_Particle);
		P_NATIVE_END;
	}
	void ACreatorLavaFlows::StaticRegisterNativesACreatorLavaFlows()
	{
		UClass* Class = ACreatorLavaFlows::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateAcceleration", &ACreatorLavaFlows::execUpdateAcceleration },
			{ "UpdateLocation", &ACreatorLavaFlows::execUpdateLocation },
			{ "UpdateVelocity", &ACreatorLavaFlows::execUpdateVelocity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACreatorLavaFlows_UpdateAcceleration_Statics
	{
		struct CreatorLavaFlows_eventUpdateAcceleration_Parms
		{
			ALavaParticle* Particle;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Particle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACreatorLavaFlows_UpdateAcceleration_Statics::NewProp_Particle = { "Particle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CreatorLavaFlows_eventUpdateAcceleration_Parms, Particle), Z_Construct_UClass_ALavaParticle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACreatorLavaFlows_UpdateAcceleration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACreatorLavaFlows_UpdateAcceleration_Statics::NewProp_Particle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACreatorLavaFlows_UpdateAcceleration_Statics::Function_MetaDataParams[] = {
		{ "Category", "LavaFlows" },
		{ "Comment", "//#pragma region CalculateAllParameters\n" },
		{ "ModuleRelativePath", "Public/CreatorLavaFlows.h" },
		{ "ToolTip", "#pragma region CalculateAllParameters" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACreatorLavaFlows_UpdateAcceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACreatorLavaFlows, nullptr, "UpdateAcceleration", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACreatorLavaFlows_UpdateAcceleration_Statics::CreatorLavaFlows_eventUpdateAcceleration_Parms), Z_Construct_UFunction_ACreatorLavaFlows_UpdateAcceleration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACreatorLavaFlows_UpdateAcceleration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACreatorLavaFlows_UpdateAcceleration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACreatorLavaFlows_UpdateAcceleration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACreatorLavaFlows_UpdateAcceleration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACreatorLavaFlows_UpdateAcceleration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACreatorLavaFlows_UpdateLocation_Statics
	{
		struct CreatorLavaFlows_eventUpdateLocation_Parms
		{
			ALavaParticle* Particle;
			float DeltaTime;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Particle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACreatorLavaFlows_UpdateLocation_Statics::NewProp_Particle = { "Particle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CreatorLavaFlows_eventUpdateLocation_Parms, Particle), Z_Construct_UClass_ALavaParticle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACreatorLavaFlows_UpdateLocation_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CreatorLavaFlows_eventUpdateLocation_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACreatorLavaFlows_UpdateLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CreatorLavaFlows_eventUpdateLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACreatorLavaFlows_UpdateLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CreatorLavaFlows_eventUpdateLocation_Parms), &Z_Construct_UFunction_ACreatorLavaFlows_UpdateLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACreatorLavaFlows_UpdateLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACreatorLavaFlows_UpdateLocation_Statics::NewProp_Particle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACreatorLavaFlows_UpdateLocation_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACreatorLavaFlows_UpdateLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACreatorLavaFlows_UpdateLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "LavaFlows" },
		{ "ModuleRelativePath", "Public/CreatorLavaFlows.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACreatorLavaFlows_UpdateLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACreatorLavaFlows, nullptr, "UpdateLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACreatorLavaFlows_UpdateLocation_Statics::CreatorLavaFlows_eventUpdateLocation_Parms), Z_Construct_UFunction_ACreatorLavaFlows_UpdateLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACreatorLavaFlows_UpdateLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACreatorLavaFlows_UpdateLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACreatorLavaFlows_UpdateLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACreatorLavaFlows_UpdateLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACreatorLavaFlows_UpdateLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACreatorLavaFlows_UpdateVelocity_Statics
	{
		struct CreatorLavaFlows_eventUpdateVelocity_Parms
		{
			ALavaParticle* Particle;
			float DeltaTime;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Particle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACreatorLavaFlows_UpdateVelocity_Statics::NewProp_Particle = { "Particle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CreatorLavaFlows_eventUpdateVelocity_Parms, Particle), Z_Construct_UClass_ALavaParticle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACreatorLavaFlows_UpdateVelocity_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CreatorLavaFlows_eventUpdateVelocity_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACreatorLavaFlows_UpdateVelocity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACreatorLavaFlows_UpdateVelocity_Statics::NewProp_Particle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACreatorLavaFlows_UpdateVelocity_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACreatorLavaFlows_UpdateVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "LavaFlows" },
		{ "ModuleRelativePath", "Public/CreatorLavaFlows.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACreatorLavaFlows_UpdateVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACreatorLavaFlows, nullptr, "UpdateVelocity", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACreatorLavaFlows_UpdateVelocity_Statics::CreatorLavaFlows_eventUpdateVelocity_Parms), Z_Construct_UFunction_ACreatorLavaFlows_UpdateVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACreatorLavaFlows_UpdateVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACreatorLavaFlows_UpdateVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACreatorLavaFlows_UpdateVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACreatorLavaFlows_UpdateVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACreatorLavaFlows_UpdateVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACreatorLavaFlows);
	UClass* Z_Construct_UClass_ACreatorLavaFlows_NoRegister()
	{
		return ACreatorLavaFlows::StaticClass();
	}
	struct Z_Construct_UClass_ACreatorLavaFlows_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACreatorLavaFlows_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyDynamicLandscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACreatorLavaFlows_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACreatorLavaFlows_UpdateAcceleration, "UpdateAcceleration" }, // 4220221777
		{ &Z_Construct_UFunction_ACreatorLavaFlows_UpdateLocation, "UpdateLocation" }, // 1031478423
		{ &Z_Construct_UFunction_ACreatorLavaFlows_UpdateVelocity, "UpdateVelocity" }, // 2478596130
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACreatorLavaFlows_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CreatorLavaFlows.h" },
		{ "ModuleRelativePath", "Public/CreatorLavaFlows.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_StartFlowDirection_MetaData[] = {
		{ "Category", "Starting System Parameters" },
		{ "Comment", "//TODO: https://docs.unrealengine.com/4.26/en-US/ProgrammingAndScripting/GameplayArchitecture/Properties/\n//UPROPERTY(EditAnywhere, BlueprintReadWrite)\n//\x09UBillboardComponent* Icon;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CreatorLavaFlows.h" },
		{ "ToolTip", "TODO: https:docs.unrealengine.com/4.26/en-US/ProgrammingAndScripting/GameplayArchitecture/Properties/\nUPROPERTY(EditAnywhere, BlueprintReadWrite)\n       UBillboardComponent* Icon;" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_StartFlowDirection = { "StartFlowDirection", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACreatorLavaFlows, StartFlowDirection), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_StartFlowDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_StartFlowDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_ParticleMassRange_MetaData[] = {
		{ "Category", "Starting System Parameters" },
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite)\n//TArray<ALavaParticle> ParticlArray; //int32 \n" },
		{ "ModuleRelativePath", "Public/CreatorLavaFlows.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite)\nTArray<ALavaParticle> ParticlArray; int32" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_ParticleMassRange = { "ParticleMassRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACreatorLavaFlows, ParticleMassRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_ParticleMassRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_ParticleMassRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_StartVelocityRange_MetaData[] = {
		{ "Category", "Starting System Parameters" },
		{ "ModuleRelativePath", "Public/CreatorLavaFlows.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_StartVelocityRange = { "StartVelocityRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACreatorLavaFlows, StartVelocityRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_StartVelocityRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_StartVelocityRange_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACreatorLavaFlows_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_StartFlowDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_ParticleMassRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreatorLavaFlows_Statics::NewProp_StartVelocityRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACreatorLavaFlows_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACreatorLavaFlows>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACreatorLavaFlows_Statics::ClassParams = {
		&ACreatorLavaFlows::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACreatorLavaFlows_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_ACreatorLavaFlows, ACreatorLavaFlows::StaticClass, TEXT("ACreatorLavaFlows"), &Z_Registration_Info_UClass_ACreatorLavaFlows, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACreatorLavaFlows), 2449180297U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_UE5_DynamicLandscape_Source_MyDynamicLandscape_Public_CreatorLavaFlows_h_3253727972(TEXT("/Script/MyDynamicLandscape"),
		Z_CompiledInDeferFile_FID_Work_UE5_DynamicLandscape_Source_MyDynamicLandscape_Public_CreatorLavaFlows_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_UE5_DynamicLandscape_Source_MyDynamicLandscape_Public_CreatorLavaFlows_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
