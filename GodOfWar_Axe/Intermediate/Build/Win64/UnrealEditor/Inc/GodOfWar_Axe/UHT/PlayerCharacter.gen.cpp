// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GodOfWar_Axe/PlayerCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	GODOFWAR_AXE_API UClass* Z_Construct_UClass_APlayerCharacter();
	GODOFWAR_AXE_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GodOfWar_Axe();
// End Cross Module References
	void APlayerCharacter::StaticRegisterNativesAPlayerCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerCharacter);
	UClass* Z_Construct_UClass_APlayerCharacter_NoRegister()
	{
		return APlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_APlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GodOfWar_Axe,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerCharacter.h" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerCharacter_Statics::ClassParams = {
		&APlayerCharacter::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerCharacter()
	{
		if (!Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton, Z_Construct_UClass_APlayerCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton;
	}
	template<> GODOFWAR_AXE_API UClass* StaticClass<APlayerCharacter>()
	{
		return APlayerCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCharacter);
	APlayerCharacter::~APlayerCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_ericg_OneDrive_Documentos_GitHub_GodOfWar_Axe_GodOfWar_Axe_Source_GodOfWar_Axe_PlayerCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ericg_OneDrive_Documentos_GitHub_GodOfWar_Axe_GodOfWar_Axe_Source_GodOfWar_Axe_PlayerCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerCharacter, APlayerCharacter::StaticClass, TEXT("APlayerCharacter"), &Z_Registration_Info_UClass_APlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerCharacter), 1255052696U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ericg_OneDrive_Documentos_GitHub_GodOfWar_Axe_GodOfWar_Axe_Source_GodOfWar_Axe_PlayerCharacter_h_2758161399(TEXT("/Script/GodOfWar_Axe"),
		Z_CompiledInDeferFile_FID_Users_ericg_OneDrive_Documentos_GitHub_GodOfWar_Axe_GodOfWar_Axe_Source_GodOfWar_Axe_PlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ericg_OneDrive_Documentos_GitHub_GodOfWar_Axe_GodOfWar_Axe_Source_GodOfWar_Axe_PlayerCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
