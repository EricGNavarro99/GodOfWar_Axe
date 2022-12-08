// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GodOfWar_Axe/GodOfWar_AxeGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGodOfWar_AxeGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	GODOFWAR_AXE_API UClass* Z_Construct_UClass_AGodOfWar_AxeGameModeBase();
	GODOFWAR_AXE_API UClass* Z_Construct_UClass_AGodOfWar_AxeGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GodOfWar_Axe();
// End Cross Module References
	void AGodOfWar_AxeGameModeBase::StaticRegisterNativesAGodOfWar_AxeGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGodOfWar_AxeGameModeBase);
	UClass* Z_Construct_UClass_AGodOfWar_AxeGameModeBase_NoRegister()
	{
		return AGodOfWar_AxeGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AGodOfWar_AxeGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGodOfWar_AxeGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GodOfWar_Axe,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGodOfWar_AxeGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GodOfWar_AxeGameModeBase.h" },
		{ "ModuleRelativePath", "GodOfWar_AxeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGodOfWar_AxeGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGodOfWar_AxeGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGodOfWar_AxeGameModeBase_Statics::ClassParams = {
		&AGodOfWar_AxeGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGodOfWar_AxeGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGodOfWar_AxeGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGodOfWar_AxeGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AGodOfWar_AxeGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGodOfWar_AxeGameModeBase.OuterSingleton, Z_Construct_UClass_AGodOfWar_AxeGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGodOfWar_AxeGameModeBase.OuterSingleton;
	}
	template<> GODOFWAR_AXE_API UClass* StaticClass<AGodOfWar_AxeGameModeBase>()
	{
		return AGodOfWar_AxeGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGodOfWar_AxeGameModeBase);
	AGodOfWar_AxeGameModeBase::~AGodOfWar_AxeGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_ericg_OneDrive_Documentos_GitHub_GodOfWar_Axe_GodOfWar_Axe_Source_GodOfWar_Axe_GodOfWar_AxeGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ericg_OneDrive_Documentos_GitHub_GodOfWar_Axe_GodOfWar_Axe_Source_GodOfWar_Axe_GodOfWar_AxeGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGodOfWar_AxeGameModeBase, AGodOfWar_AxeGameModeBase::StaticClass, TEXT("AGodOfWar_AxeGameModeBase"), &Z_Registration_Info_UClass_AGodOfWar_AxeGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGodOfWar_AxeGameModeBase), 4182651928U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ericg_OneDrive_Documentos_GitHub_GodOfWar_Axe_GodOfWar_Axe_Source_GodOfWar_Axe_GodOfWar_AxeGameModeBase_h_2626203354(TEXT("/Script/GodOfWar_Axe"),
		Z_CompiledInDeferFile_FID_Users_ericg_OneDrive_Documentos_GitHub_GodOfWar_Axe_GodOfWar_Axe_Source_GodOfWar_Axe_GodOfWar_AxeGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ericg_OneDrive_Documentos_GitHub_GodOfWar_Axe_GodOfWar_Axe_Source_GodOfWar_Axe_GodOfWar_AxeGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
