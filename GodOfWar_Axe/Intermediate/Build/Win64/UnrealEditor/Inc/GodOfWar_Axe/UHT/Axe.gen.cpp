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
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAxe_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAxe>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAxe_Statics::ClassParams = {
		&AAxe::StaticClass,
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
		{ Z_Construct_UClass_AAxe, AAxe::StaticClass, TEXT("AAxe"), &Z_Registration_Info_UClass_AAxe, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAxe), 1737078123U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ericg_OneDrive_Documentos_GitHub_GodOfWar_Axe_GodOfWar_Axe_Source_GodOfWar_Axe_Axe_h_3708667159(TEXT("/Script/GodOfWar_Axe"),
		Z_CompiledInDeferFile_FID_Users_ericg_OneDrive_Documentos_GitHub_GodOfWar_Axe_GodOfWar_Axe_Source_GodOfWar_Axe_Axe_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ericg_OneDrive_Documentos_GitHub_GodOfWar_Axe_GodOfWar_Axe_Source_GodOfWar_Axe_Axe_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
