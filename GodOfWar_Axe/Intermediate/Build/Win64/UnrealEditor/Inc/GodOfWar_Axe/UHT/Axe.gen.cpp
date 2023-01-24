// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GodOfWar_Axe/Axe.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAxe() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GODOFWAR_AXE_API UClass* Z_Construct_UClass_AAxe();
	GODOFWAR_AXE_API UClass* Z_Construct_UClass_AAxe_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GodOfWar_Axe();
// End Cross Module References
	void AAxe::StaticRegisterNativesAAxe()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAxe);
	UClass* Z_Construct_UClass_AAxe_NoRegister()
	{
		return AAxe::StaticClass();
	}
	struct Z_Construct_UClass_AAxe_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp__bShowHitLocation_MetaData[];
#endif
		static void NewProp__bShowHitLocation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp__bShowHitLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__axeRotationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__axeRotationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__axeInitialMovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp__axeInitialMovementSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAxe_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GodOfWar_Axe,
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAxe_Statics::NewProp__bShowHitLocation_MetaData[] = {
		{ "Category", "Editor options" },
		{ "DisplayName", "Show hit location" },
		{ "ModuleRelativePath", "Axe.h" },
	};
#endif
	void Z_Construct_UClass_AAxe_Statics::NewProp__bShowHitLocation_SetBit(void* Obj)
	{
		((AAxe*)Obj)->_bShowHitLocation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAxe_Statics::NewProp__bShowHitLocation = { "_bShowHitLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AAxe), &Z_Construct_UClass_AAxe_Statics::NewProp__bShowHitLocation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAxe_Statics::NewProp__bShowHitLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAxe_Statics::NewProp__bShowHitLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAxe_Statics::NewProp__axeRotationSpeed_MetaData[] = {
		{ "Category", "Axe options" },
		{ "ClampMax", "50.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Axe.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAxe_Statics::NewProp__axeRotationSpeed = { "_axeRotationSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAxe, _axeRotationSpeed), METADATA_PARAMS(Z_Construct_UClass_AAxe_Statics::NewProp__axeRotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAxe_Statics::NewProp__axeRotationSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAxe_Statics::NewProp__axeInitialMovementSpeed_MetaData[] = {
		{ "Category", "Axe options" },
		{ "ClampMax", "100.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Axe.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAxe_Statics::NewProp__axeInitialMovementSpeed = { "_axeInitialMovementSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAxe, _axeInitialMovementSpeed), METADATA_PARAMS(Z_Construct_UClass_AAxe_Statics::NewProp__axeInitialMovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAxe_Statics::NewProp__axeInitialMovementSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAxe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAxe_Statics::NewProp__root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAxe_Statics::NewProp__arrow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAxe_Statics::NewProp__staticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAxe_Statics::NewProp__bShowHitLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAxe_Statics::NewProp__axeRotationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAxe_Statics::NewProp__axeInitialMovementSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAxe_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAxe>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAxe_Statics::ClassParams = {
		&AAxe::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAxe_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
		{ Z_Construct_UClass_AAxe, AAxe::StaticClass, TEXT("AAxe"), &Z_Registration_Info_UClass_AAxe, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAxe), 3460856336U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ericg_OneDrive_Documentos_GitHub_GodOfWar_Axe_GodOfWar_Axe_Source_GodOfWar_Axe_Axe_h_2488446715(TEXT("/Script/GodOfWar_Axe"),
		Z_CompiledInDeferFile_FID_Users_ericg_OneDrive_Documentos_GitHub_GodOfWar_Axe_GodOfWar_Axe_Source_GodOfWar_Axe_Axe_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ericg_OneDrive_Documentos_GitHub_GodOfWar_Axe_GodOfWar_Axe_Source_GodOfWar_Axe_Axe_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
