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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	MYDYNAMICLANDSCAPE_API UClass* Z_Construct_UClass_ALavaParticle();
	MYDYNAMICLANDSCAPE_API UClass* Z_Construct_UClass_ALavaParticle_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyDynamicLandscape();
// End Cross Module References
	DEFINE_FUNCTION(ALavaParticle::execSetMainVelocity)
	{
		P_GET_STRUCT(FVector,Z_Param_NewVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMainVelocity(Z_Param_NewVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALavaParticle::execSetMainMass)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_NewMass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMainMass(Z_Param_NewMass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALavaParticle::execSetBeginParameters)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_NewMass);
		P_GET_STRUCT(FVector,Z_Param_NewVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBeginParameters(Z_Param_NewMass,Z_Param_NewVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALavaParticle::execGetMainVelocity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetMainVelocity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALavaParticle::execGetMainMass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->GetMainMass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALavaParticle::execMovement)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Movement(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALavaParticle::execCalculateVelocity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalculateVelocity(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALavaParticle::execCalculateAcceleration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalculateAcceleration();
		P_NATIVE_END;
	}
	void ALavaParticle::StaticRegisterNativesALavaParticle()
	{
		UClass* Class = ALavaParticle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateAcceleration", &ALavaParticle::execCalculateAcceleration },
			{ "CalculateVelocity", &ALavaParticle::execCalculateVelocity },
			{ "GetMainMass", &ALavaParticle::execGetMainMass },
			{ "GetMainVelocity", &ALavaParticle::execGetMainVelocity },
			{ "Movement", &ALavaParticle::execMovement },
			{ "SetBeginParameters", &ALavaParticle::execSetBeginParameters },
			{ "SetMainMass", &ALavaParticle::execSetMainMass },
			{ "SetMainVelocity", &ALavaParticle::execSetMainVelocity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALavaParticle_CalculateAcceleration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALavaParticle_CalculateAcceleration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Update System Function" },
		{ "Comment", "// set spawn parametr\n" },
		{ "ModuleRelativePath", "Public/LavaParticle.h" },
		{ "ToolTip", "set spawn parametr" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALavaParticle_CalculateAcceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALavaParticle, nullptr, "CalculateAcceleration", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALavaParticle_CalculateAcceleration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALavaParticle_CalculateAcceleration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALavaParticle_CalculateAcceleration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALavaParticle_CalculateAcceleration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALavaParticle_CalculateVelocity_Statics
	{
		struct LavaParticle_eventCalculateVelocity_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALavaParticle_CalculateVelocity_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LavaParticle_eventCalculateVelocity_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALavaParticle_CalculateVelocity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALavaParticle_CalculateVelocity_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALavaParticle_CalculateVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Update System Function" },
		{ "ModuleRelativePath", "Public/LavaParticle.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALavaParticle_CalculateVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALavaParticle, nullptr, "CalculateVelocity", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALavaParticle_CalculateVelocity_Statics::LavaParticle_eventCalculateVelocity_Parms), Z_Construct_UFunction_ALavaParticle_CalculateVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALavaParticle_CalculateVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALavaParticle_CalculateVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALavaParticle_CalculateVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALavaParticle_CalculateVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALavaParticle_CalculateVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALavaParticle_GetMainMass_Statics
	{
		struct LavaParticle_eventGetMainMass_Parms
		{
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ALavaParticle_GetMainMass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LavaParticle_eventGetMainMass_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALavaParticle_GetMainMass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALavaParticle_GetMainMass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALavaParticle_GetMainMass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Get Particle Parameters" },
		{ "ModuleRelativePath", "Public/LavaParticle.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALavaParticle_GetMainMass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALavaParticle, nullptr, "GetMainMass", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALavaParticle_GetMainMass_Statics::LavaParticle_eventGetMainMass_Parms), Z_Construct_UFunction_ALavaParticle_GetMainMass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALavaParticle_GetMainMass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALavaParticle_GetMainMass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALavaParticle_GetMainMass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALavaParticle_GetMainMass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALavaParticle_GetMainMass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALavaParticle_GetMainVelocity_Statics
	{
		struct LavaParticle_eventGetMainVelocity_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALavaParticle_GetMainVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LavaParticle_eventGetMainVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALavaParticle_GetMainVelocity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALavaParticle_GetMainVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALavaParticle_GetMainVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Get Particle Parameters" },
		{ "ModuleRelativePath", "Public/LavaParticle.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALavaParticle_GetMainVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALavaParticle, nullptr, "GetMainVelocity", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALavaParticle_GetMainVelocity_Statics::LavaParticle_eventGetMainVelocity_Parms), Z_Construct_UFunction_ALavaParticle_GetMainVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALavaParticle_GetMainVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALavaParticle_GetMainVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALavaParticle_GetMainVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALavaParticle_GetMainVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALavaParticle_GetMainVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALavaParticle_Movement_Statics
	{
		struct LavaParticle_eventMovement_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALavaParticle_Movement_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LavaParticle_eventMovement_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALavaParticle_Movement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALavaParticle_Movement_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALavaParticle_Movement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Update System Function" },
		{ "ModuleRelativePath", "Public/LavaParticle.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALavaParticle_Movement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALavaParticle, nullptr, "Movement", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALavaParticle_Movement_Statics::LavaParticle_eventMovement_Parms), Z_Construct_UFunction_ALavaParticle_Movement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALavaParticle_Movement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALavaParticle_Movement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALavaParticle_Movement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALavaParticle_Movement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALavaParticle_Movement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALavaParticle_SetBeginParameters_Statics
	{
		struct LavaParticle_eventSetBeginParameters_Parms
		{
			double NewMass;
			FVector NewVelocity;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_NewMass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ALavaParticle_SetBeginParameters_Statics::NewProp_NewMass = { "NewMass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LavaParticle_eventSetBeginParameters_Parms, NewMass), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALavaParticle_SetBeginParameters_Statics::NewProp_NewVelocity = { "NewVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LavaParticle_eventSetBeginParameters_Parms, NewVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALavaParticle_SetBeginParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALavaParticle_SetBeginParameters_Statics::NewProp_NewMass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALavaParticle_SetBeginParameters_Statics::NewProp_NewVelocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALavaParticle_SetBeginParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Set Particle Parameters" },
		{ "Comment", "// UFUNCTION(BlueprintCallable, BlueprintPure, Category = \"Get Particle Parameters\")\n// \x09""FVector GetMainAcceleration();\n" },
		{ "ModuleRelativePath", "Public/LavaParticle.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, BlueprintPure, Category = \"Get Particle Parameters\")\n      FVector GetMainAcceleration();" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALavaParticle_SetBeginParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALavaParticle, nullptr, "SetBeginParameters", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALavaParticle_SetBeginParameters_Statics::LavaParticle_eventSetBeginParameters_Parms), Z_Construct_UFunction_ALavaParticle_SetBeginParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALavaParticle_SetBeginParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALavaParticle_SetBeginParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALavaParticle_SetBeginParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALavaParticle_SetBeginParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALavaParticle_SetBeginParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALavaParticle_SetMainMass_Statics
	{
		struct LavaParticle_eventSetMainMass_Parms
		{
			double NewMass;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_NewMass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ALavaParticle_SetMainMass_Statics::NewProp_NewMass = { "NewMass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LavaParticle_eventSetMainMass_Parms, NewMass), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALavaParticle_SetMainMass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALavaParticle_SetMainMass_Statics::NewProp_NewMass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALavaParticle_SetMainMass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Set Particle Parameters" },
		{ "ModuleRelativePath", "Public/LavaParticle.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALavaParticle_SetMainMass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALavaParticle, nullptr, "SetMainMass", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALavaParticle_SetMainMass_Statics::LavaParticle_eventSetMainMass_Parms), Z_Construct_UFunction_ALavaParticle_SetMainMass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALavaParticle_SetMainMass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALavaParticle_SetMainMass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALavaParticle_SetMainMass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALavaParticle_SetMainMass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALavaParticle_SetMainMass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALavaParticle_SetMainVelocity_Statics
	{
		struct LavaParticle_eventSetMainVelocity_Parms
		{
			FVector NewVelocity;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALavaParticle_SetMainVelocity_Statics::NewProp_NewVelocity = { "NewVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LavaParticle_eventSetMainVelocity_Parms, NewVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALavaParticle_SetMainVelocity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALavaParticle_SetMainVelocity_Statics::NewProp_NewVelocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALavaParticle_SetMainVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Set Particle Parameters" },
		{ "ModuleRelativePath", "Public/LavaParticle.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALavaParticle_SetMainVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALavaParticle, nullptr, "SetMainVelocity", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALavaParticle_SetMainVelocity_Statics::LavaParticle_eventSetMainVelocity_Parms), Z_Construct_UFunction_ALavaParticle_SetMainVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALavaParticle_SetMainVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALavaParticle_SetMainVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALavaParticle_SetMainVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALavaParticle_SetMainVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALavaParticle_SetMainVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALavaParticle);
	UClass* Z_Construct_UClass_ALavaParticle_NoRegister()
	{
		return ALavaParticle::StaticClass();
	}
	struct Z_Construct_UClass_ALavaParticle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainSumForces_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MainSumForces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainMass_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MainMass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MainAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MainVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALavaParticle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyDynamicLandscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALavaParticle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALavaParticle_CalculateAcceleration, "CalculateAcceleration" }, // 4285314622
		{ &Z_Construct_UFunction_ALavaParticle_CalculateVelocity, "CalculateVelocity" }, // 3366215232
		{ &Z_Construct_UFunction_ALavaParticle_GetMainMass, "GetMainMass" }, // 327774150
		{ &Z_Construct_UFunction_ALavaParticle_GetMainVelocity, "GetMainVelocity" }, // 506563592
		{ &Z_Construct_UFunction_ALavaParticle_Movement, "Movement" }, // 1597901205
		{ &Z_Construct_UFunction_ALavaParticle_SetBeginParameters, "SetBeginParameters" }, // 3295831658
		{ &Z_Construct_UFunction_ALavaParticle_SetMainMass, "SetMainMass" }, // 2022941385
		{ &Z_Construct_UFunction_ALavaParticle_SetMainVelocity, "SetMainVelocity" }, // 2603752766
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALavaParticle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LavaParticle.h" },
		{ "ModuleRelativePath", "Public/LavaParticle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALavaParticle_Statics::NewProp_CollisionMesh_MetaData[] = {
		{ "Category", "LavaParticle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LavaParticle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALavaParticle_Statics::NewProp_CollisionMesh = { "CollisionMesh", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALavaParticle, CollisionMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALavaParticle_Statics::NewProp_CollisionMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALavaParticle_Statics::NewProp_CollisionMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALavaParticle_Statics::NewProp_MainSumForces_MetaData[] = {
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Particle Parameters\")\n" },
		{ "ModuleRelativePath", "Public/LavaParticle.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Particle Parameters\")" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALavaParticle_Statics::NewProp_MainSumForces = { "MainSumForces", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALavaParticle, MainSumForces), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ALavaParticle_Statics::NewProp_MainSumForces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALavaParticle_Statics::NewProp_MainSumForces_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALavaParticle_Statics::NewProp_MainMass_MetaData[] = {
		{ "Comment", "// TODO: \"const double MainMass\"\n" },
		{ "ModuleRelativePath", "Public/LavaParticle.h" },
		{ "ToolTip", "TODO: \"const double MainMass\"" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ALavaParticle_Statics::NewProp_MainMass = { "MainMass", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALavaParticle, MainMass), METADATA_PARAMS(Z_Construct_UClass_ALavaParticle_Statics::NewProp_MainMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALavaParticle_Statics::NewProp_MainMass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALavaParticle_Statics::NewProp_MainAcceleration_MetaData[] = {
		{ "ModuleRelativePath", "Public/LavaParticle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALavaParticle_Statics::NewProp_MainAcceleration = { "MainAcceleration", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALavaParticle, MainAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ALavaParticle_Statics::NewProp_MainAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALavaParticle_Statics::NewProp_MainAcceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALavaParticle_Statics::NewProp_MainVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/LavaParticle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALavaParticle_Statics::NewProp_MainVelocity = { "MainVelocity", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALavaParticle, MainVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ALavaParticle_Statics::NewProp_MainVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALavaParticle_Statics::NewProp_MainVelocity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALavaParticle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALavaParticle_Statics::NewProp_CollisionMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALavaParticle_Statics::NewProp_MainSumForces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALavaParticle_Statics::NewProp_MainMass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALavaParticle_Statics::NewProp_MainAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALavaParticle_Statics::NewProp_MainVelocity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALavaParticle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALavaParticle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALavaParticle_Statics::ClassParams = {
		&ALavaParticle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALavaParticle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_ALavaParticle, ALavaParticle::StaticClass, TEXT("ALavaParticle"), &Z_Registration_Info_UClass_ALavaParticle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALavaParticle), 1822801248U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_UE5_DynamicLandscape_Source_MyDynamicLandscape_Public_LavaParticle_h_64087170(TEXT("/Script/MyDynamicLandscape"),
		Z_CompiledInDeferFile_FID_Work_UE5_DynamicLandscape_Source_MyDynamicLandscape_Public_LavaParticle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_UE5_DynamicLandscape_Source_MyDynamicLandscape_Public_LavaParticle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
