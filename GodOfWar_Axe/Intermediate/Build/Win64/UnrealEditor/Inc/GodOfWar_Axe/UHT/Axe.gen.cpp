// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GodOfWar_Axe/Axe.h"
#include "Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAxe() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URotatingMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GODOFWAR_AXE_API UClass* Z_Construct_UClass_AAxe();
	GODOFWAR_AXE_API UClass* Z_Construct_UClass_AAxe_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GodOfWar_Axe();
// End Cross Module References
	DEFINE_FUNCTION(AAxe::execStickAxe)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_sweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StickAxe(Z_Param_overlappedComponent,Z_Param_otherActor,Z_Param_otherComponent,Z_Param_otherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_sweepResult);
		P_NATIVE_END;
	}
	void AAxe::StaticRegisterNativesAAxe()
	{
		UClass* Class = AAxe::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StickAxe", &AAxe::execStickAxe },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAxe_StickAxe_Statics
	{
		struct Axe_eventStickAxe_Parms
		{
			UPrimitiveComponent* overlappedComponent;
			AActor* otherActor;
			UPrimitiveComponent* otherComponent;
			int32 otherBodyIndex;
			bool bFromSweep;
			FHitResult sweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_overlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_overlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_otherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_otherComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_otherComponent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_otherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_sweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAxe_StickAxe_Statics::NewProp_overlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAxe_StickAxe_Statics::NewProp_overlappedComponent = { "overlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Axe_eventStickAxe_Parms, overlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAxe_StickAxe_Statics::NewProp_overlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAxe_StickAxe_Statics::NewProp_overlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAxe_StickAxe_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Axe_eventStickAxe_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAxe_StickAxe_Statics::NewProp_otherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAxe_StickAxe_Statics::NewProp_otherComponent = { "otherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Axe_eventStickAxe_Parms, otherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAxe_StickAxe_Statics::NewProp_otherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAxe_StickAxe_Statics::NewProp_otherComponent_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAxe_StickAxe_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Axe_eventStickAxe_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AAxe_StickAxe_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Axe_eventStickAxe_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAxe_StickAxe_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Axe_eventStickAxe_Parms), &Z_Construct_UFunction_AAxe_StickAxe_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAxe_StickAxe_Statics::NewProp_sweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAxe_StickAxe_Statics::NewProp_sweepResult = { "sweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Axe_eventStickAxe_Parms, sweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AAxe_StickAxe_Statics::NewProp_sweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAxe_StickAxe_Statics::NewProp_sweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAxe_StickAxe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAxe_StickAxe_Statics::NewProp_overlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAxe_StickAxe_Statics::NewProp_otherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAxe_StickAxe_Statics::NewProp_otherComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAxe_StickAxe_Statics::NewProp_otherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAxe_StickAxe_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAxe_StickAxe_Statics::NewProp_sweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAxe_StickAxe_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Axe.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAxe_StickAxe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAxe, nullptr, "StickAxe", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAxe_StickAxe_Statics::Axe_eventStickAxe_Parms), Z_Construct_UFunction_AAxe_StickAxe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAxe_StickAxe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAxe_StickAxe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAxe_StickAxe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAxe_StickAxe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAxe_StickAxe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAxe);
	UClass* Z_Construct_UClass_AAxe_NoRegister()
	{
		return AAxe::StaticClass();
	}
	struct Z_Construct_UClass_AAxe_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__root_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__root;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__arrow_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__arrow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__staticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__staticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__trigger_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__trigger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__particles_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__particles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__projectileComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__projectileComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__rotatingComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__rotatingComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__rotationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__rotationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__movementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__movementSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAxe_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GodOfWar_Axe,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAxe_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAxe_StickAxe, "StickAxe" }, // 995623231
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAxe_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Axe.h" },
		{ "ModuleRelativePath", "Axe.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAxe_Statics::NewProp__root_MetaData[] = {
		{ "Category", "Axe" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Axe.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAxe_Statics::NewProp__root = { "_root", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAxe, _root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAxe_Statics::NewProp__root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAxe_Statics::NewProp__root_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAxe_Statics::NewProp__arrow_MetaData[] = {
		{ "Category", "Axe" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Axe.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAxe_Statics::NewProp__arrow = { "_arrow", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAxe, _arrow), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAxe_Statics::NewProp__arrow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAxe_Statics::NewProp__arrow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAxe_Statics::NewProp__staticMesh_MetaData[] = {
		{ "Category", "Axe" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Axe.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAxe_Statics::NewProp__staticMesh = { "_staticMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAxe, _staticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAxe_Statics::NewProp__staticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAxe_Statics::NewProp__staticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAxe_Statics::NewProp__trigger_MetaData[] = {
		{ "Category", "Axe" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Axe.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAxe_Statics::NewProp__trigger = { "_trigger", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAxe, _trigger), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAxe_Statics::NewProp__trigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAxe_Statics::NewProp__trigger_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAxe_Statics::NewProp__particles_MetaData[] = {
		{ "Category", "Axe" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Axe.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAxe_Statics::NewProp__particles = { "_particles", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAxe, _particles), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAxe_Statics::NewProp__particles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAxe_Statics::NewProp__particles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAxe_Statics::NewProp__projectileComponent_MetaData[] = {
		{ "Category", "Axe" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Axe.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAxe_Statics::NewProp__projectileComponent = { "_projectileComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAxe, _projectileComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAxe_Statics::NewProp__projectileComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAxe_Statics::NewProp__projectileComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAxe_Statics::NewProp__rotatingComponent_MetaData[] = {
		{ "Category", "Axe" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Axe.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAxe_Statics::NewProp__rotatingComponent = { "_rotatingComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAxe, _rotatingComponent), Z_Construct_UClass_URotatingMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAxe_Statics::NewProp__rotatingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAxe_Statics::NewProp__rotatingComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAxe_Statics::NewProp__rotationSpeed_MetaData[] = {
		{ "Category", "Axe Options" },
		{ "ClampMax", "5000.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Axe.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAxe_Statics::NewProp__rotationSpeed = { "_rotationSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAxe, _rotationSpeed), METADATA_PARAMS(Z_Construct_UClass_AAxe_Statics::NewProp__rotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAxe_Statics::NewProp__rotationSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAxe_Statics::NewProp__movementSpeed_MetaData[] = {
		{ "Category", "Axe Options" },
		{ "ClampMax", "5000.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Axe.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAxe_Statics::NewProp__movementSpeed = { "_movementSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAxe, _movementSpeed), METADATA_PARAMS(Z_Construct_UClass_AAxe_Statics::NewProp__movementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAxe_Statics::NewProp__movementSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAxe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAxe_Statics::NewProp__root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAxe_Statics::NewProp__arrow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAxe_Statics::NewProp__staticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAxe_Statics::NewProp__trigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAxe_Statics::NewProp__particles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAxe_Statics::NewProp__projectileComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAxe_Statics::NewProp__rotatingComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAxe_Statics::NewProp__rotationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAxe_Statics::NewProp__movementSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAxe_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAxe>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAxe_Statics::ClassParams = {
		&AAxe::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAxe_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAxe_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAxe_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAxe_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAxe()
	{
		if (!Z_Registration_Info_UClass_AAxe.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAxe.OuterSingleton, Z_Construct_UClass_AAxe_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAxe.OuterSingleton;
	}
	template<> GODOFWAR_AXE_API UClass* StaticClass<AAxe>()
	{
		return AAxe::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAxe);
	AAxe::~AAxe() {}
	struct Z_CompiledInDeferFile_FID_Users_ericg_OneDrive_Documentos_GitHub_GodOfWar_Axe_GodOfWar_Axe_Source_GodOfWar_Axe_Axe_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ericg_OneDrive_Documentos_GitHub_GodOfWar_Axe_GodOfWar_Axe_Source_GodOfWar_Axe_Axe_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAxe, AAxe::StaticClass, TEXT("AAxe"), &Z_Registration_Info_UClass_AAxe, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAxe), 2961140236U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ericg_OneDrive_Documentos_GitHub_GodOfWar_Axe_GodOfWar_Axe_Source_GodOfWar_Axe_Axe_h_3508567925(TEXT("/Script/GodOfWar_Axe"),
		Z_CompiledInDeferFile_FID_Users_ericg_OneDrive_Documentos_GitHub_GodOfWar_Axe_GodOfWar_Axe_Source_GodOfWar_Axe_Axe_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ericg_OneDrive_Documentos_GitHub_GodOfWar_Axe_GodOfWar_Axe_Source_GodOfWar_Axe_Axe_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
