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
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GODOFWAR_AXE_API UClass* Z_Construct_UClass_APlayerCharacter();
	GODOFWAR_AXE_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GodOfWar_Axe();
// End Cross Module References
	DEFINE_FUNCTION(APlayerCharacter::execMakeHandAxeAppearDisappear)
	{
		P_GET_UBOOL(Z_Param_bMakeDisappear);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MakeHandAxeAppearDisappear(Z_Param_bMakeDisappear);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execEquipAxe)
	{
		P_GET_UBOOL(Z_Param_bIsArmed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EquipAxe(Z_Param_bIsArmed);
		P_NATIVE_END;
	}
	void APlayerCharacter::StaticRegisterNativesAPlayerCharacter()
	{
		UClass* Class = APlayerCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EquipAxe", &APlayerCharacter::execEquipAxe },
			{ "MakeHandAxeAppearDisappear", &APlayerCharacter::execMakeHandAxeAppearDisappear },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerCharacter_EquipAxe_Statics
	{
		struct PlayerCharacter_eventEquipAxe_Parms
		{
			bool bIsArmed;
		};
		static void NewProp_bIsArmed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsArmed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerCharacter_EquipAxe_Statics::NewProp_bIsArmed_SetBit(void* Obj)
	{
		((PlayerCharacter_eventEquipAxe_Parms*)Obj)->bIsArmed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerCharacter_EquipAxe_Statics::NewProp_bIsArmed = { "bIsArmed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayerCharacter_eventEquipAxe_Parms), &Z_Construct_UFunction_APlayerCharacter_EquipAxe_Statics::NewProp_bIsArmed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_EquipAxe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_EquipAxe_Statics::NewProp_bIsArmed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_EquipAxe_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_EquipAxe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "EquipAxe", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCharacter_EquipAxe_Statics::PlayerCharacter_eventEquipAxe_Parms), Z_Construct_UFunction_APlayerCharacter_EquipAxe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_EquipAxe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacter_EquipAxe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_EquipAxe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_EquipAxe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_EquipAxe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_MakeHandAxeAppearDisappear_Statics
	{
		struct PlayerCharacter_eventMakeHandAxeAppearDisappear_Parms
		{
			bool bMakeDisappear;
		};
		static void NewProp_bMakeDisappear_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMakeDisappear;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerCharacter_MakeHandAxeAppearDisappear_Statics::NewProp_bMakeDisappear_SetBit(void* Obj)
	{
		((PlayerCharacter_eventMakeHandAxeAppearDisappear_Parms*)Obj)->bMakeDisappear = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerCharacter_MakeHandAxeAppearDisappear_Statics::NewProp_bMakeDisappear = { "bMakeDisappear", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayerCharacter_eventMakeHandAxeAppearDisappear_Parms), &Z_Construct_UFunction_APlayerCharacter_MakeHandAxeAppearDisappear_Statics::NewProp_bMakeDisappear_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_MakeHandAxeAppearDisappear_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_MakeHandAxeAppearDisappear_Statics::NewProp_bMakeDisappear,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_MakeHandAxeAppearDisappear_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_MakeHandAxeAppearDisappear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "MakeHandAxeAppearDisappear", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCharacter_MakeHandAxeAppearDisappear_Statics::PlayerCharacter_eventMakeHandAxeAppearDisappear_Parms), Z_Construct_UFunction_APlayerCharacter_MakeHandAxeAppearDisappear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_MakeHandAxeAppearDisappear_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacter_MakeHandAxeAppearDisappear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_MakeHandAxeAppearDisappear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_MakeHandAxeAppearDisappear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_MakeHandAxeAppearDisappear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerCharacter);
	UClass* Z_Construct_UClass_APlayerCharacter_NoRegister()
	{
		return APlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_APlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__gamepadSensivity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__gamepadSensivity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__springArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__springArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__rightHandAxe_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__rightHandAxe;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__spineAxe_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__spineAxe;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__armAxeAnimMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__armAxeAnimMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__disarmAxeAnimMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__disarmAxeAnimMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__throwAxeAnimMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__throwAxeAnimMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__initialTargetArmLenght_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__initialTargetArmLenght;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__initialSocketOffsetY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__initialSocketOffsetY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__pointingTargetArmLenght_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__pointingTargetArmLenght;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__pointingSocketOffsetY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__pointingSocketOffsetY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__bIsArmed_MetaData[];
#endif
		static void NewProp__bIsArmed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp__bIsArmed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__bIsWalking_MetaData[];
#endif
		static void NewProp__bIsWalking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp__bIsWalking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__bIsPointing_MetaData[];
#endif
		static void NewProp__bIsPointing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp__bIsPointing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__bJustThrowAxe_MetaData[];
#endif
		static void NewProp__bJustThrowAxe_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp__bJustThrowAxe;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GodOfWar_Axe,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerCharacter_EquipAxe, "EquipAxe" }, // 4078495515
		{ &Z_Construct_UFunction_APlayerCharacter_MakeHandAxeAppearDisappear, "MakeHandAxeAppearDisappear" }, // 2131863942
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerCharacter.h" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp__gamepadSensivity_MetaData[] = {
		{ "Category", "Gamepad" },
		{ "ClampMax", "120" },
		{ "ClampMin", "10" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp__gamepadSensivity = { "_gamepadSensivity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacter, _gamepadSensivity), METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp__gamepadSensivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp__gamepadSensivity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp__camera_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp__camera = { "_camera", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacter, _camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp__camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp__camera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp__springArm_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp__springArm = { "_springArm", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacter, _springArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp__springArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp__springArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp__rightHandAxe_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp__rightHandAxe = { "_rightHandAxe", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacter, _rightHandAxe), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp__rightHandAxe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp__rightHandAxe_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp__spineAxe_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp__spineAxe = { "_spineAxe", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacter, _spineAxe), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp__spineAxe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp__spineAxe_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp__armAxeAnimMontage_MetaData[] = {
		{ "Category", "Animation Montages" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp__armAxeAnimMontage = { "_armAxeAnimMontage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacter, _armAxeAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp__armAxeAnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp__armAxeAnimMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp__disarmAxeAnimMontage_MetaData[] = {
		{ "Category", "Animation Montages" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp__disarmAxeAnimMontage = { "_disarmAxeAnimMontage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacter, _disarmAxeAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp__disarmAxeAnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp__disarmAxeAnimMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp__throwAxeAnimMontage_MetaData[] = {
		{ "Category", "Animation Montages" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp__throwAxeAnimMontage = { "_throwAxeAnimMontage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacter, _throwAxeAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp__throwAxeAnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp__throwAxeAnimMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp__initialTargetArmLenght_MetaData[] = {
		{ "Category", "Point Options" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp__initialTargetArmLenght = { "_initialTargetArmLenght", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacter, _initialTargetArmLenght), METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp__initialTargetArmLenght_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp__initialTargetArmLenght_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp__initialSocketOffsetY_MetaData[] = {
		{ "Category", "Point Options" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp__initialSocketOffsetY = { "_initialSocketOffsetY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacter, _initialSocketOffsetY), METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp__initialSocketOffsetY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp__initialSocketOffsetY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp__pointingTargetArmLenght_MetaData[] = {
		{ "Category", "Point Options" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp__pointingTargetArmLenght = { "_pointingTargetArmLenght", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacter, _pointingTargetArmLenght), METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp__pointingTargetArmLenght_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp__pointingTargetArmLenght_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp__pointingSocketOffsetY_MetaData[] = {
		{ "Category", "Point Options" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp__pointingSocketOffsetY = { "_pointingSocketOffsetY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacter, _pointingSocketOffsetY), METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp__pointingSocketOffsetY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp__pointingSocketOffsetY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp__bIsArmed_MetaData[] = {
		{ "Category", "Player Status" },
		{ "DisplayName", "Is Armed" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	void Z_Construct_UClass_APlayerCharacter_Statics::NewProp__bIsArmed_SetBit(void* Obj)
	{
		((APlayerCharacter*)Obj)->_bIsArmed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp__bIsArmed = { "_bIsArmed", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APlayerCharacter), &Z_Construct_UClass_APlayerCharacter_Statics::NewProp__bIsArmed_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp__bIsArmed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp__bIsArmed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp__bIsWalking_MetaData[] = {
		{ "Category", "Player Status" },
		{ "DisplayName", "Is Walking" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	void Z_Construct_UClass_APlayerCharacter_Statics::NewProp__bIsWalking_SetBit(void* Obj)
	{
		((APlayerCharacter*)Obj)->_bIsWalking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp__bIsWalking = { "_bIsWalking", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APlayerCharacter), &Z_Construct_UClass_APlayerCharacter_Statics::NewProp__bIsWalking_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp__bIsWalking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp__bIsWalking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp__bIsPointing_MetaData[] = {
		{ "Category", "Player Status" },
		{ "DisplayName", "Is Pointing" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	void Z_Construct_UClass_APlayerCharacter_Statics::NewProp__bIsPointing_SetBit(void* Obj)
	{
		((APlayerCharacter*)Obj)->_bIsPointing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp__bIsPointing = { "_bIsPointing", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APlayerCharacter), &Z_Construct_UClass_APlayerCharacter_Statics::NewProp__bIsPointing_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp__bIsPointing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp__bIsPointing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp__bJustThrowAxe_MetaData[] = {
		{ "Category", "Player Status" },
		{ "DisplayName", "Just Throw Axe" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	void Z_Construct_UClass_APlayerCharacter_Statics::NewProp__bJustThrowAxe_SetBit(void* Obj)
	{
		((APlayerCharacter*)Obj)->_bJustThrowAxe = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp__bJustThrowAxe = { "_bJustThrowAxe", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APlayerCharacter), &Z_Construct_UClass_APlayerCharacter_Statics::NewProp__bJustThrowAxe_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp__bJustThrowAxe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp__bJustThrowAxe_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp__gamepadSensivity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp__camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp__springArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp__rightHandAxe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp__spineAxe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp__armAxeAnimMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp__disarmAxeAnimMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp__throwAxeAnimMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp__initialTargetArmLenght,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp__initialSocketOffsetY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp__pointingTargetArmLenght,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp__pointingSocketOffsetY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp__bIsArmed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp__bIsWalking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp__bIsPointing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp__bJustThrowAxe,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerCharacter_Statics::ClassParams = {
		&APlayerCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::PropPointers),
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
		{ Z_Construct_UClass_APlayerCharacter, APlayerCharacter::StaticClass, TEXT("APlayerCharacter"), &Z_Registration_Info_UClass_APlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerCharacter), 3549188959U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ericg_OneDrive_Documentos_GitHub_GodOfWar_Axe_GodOfWar_Axe_Source_GodOfWar_Axe_PlayerCharacter_h_2527680968(TEXT("/Script/GodOfWar_Axe"),
		Z_CompiledInDeferFile_FID_Users_ericg_OneDrive_Documentos_GitHub_GodOfWar_Axe_GodOfWar_Axe_Source_GodOfWar_Axe_PlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ericg_OneDrive_Documentos_GitHub_GodOfWar_Axe_GodOfWar_Axe_Source_GodOfWar_Axe_PlayerCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
