// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettingsInput/Public/AutoSettingsPlayer.h"
#include "AutoSettingsInput/Public/InputMappingPreset.h"
#include "AutoSettingsInput/Public/PlayerInputMappings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoSettingsPlayer() {}

// Begin Cross Module References
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UAutoSettingsPlayer();
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UAutoSettingsPlayer_NoRegister();
AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputMappingPreset();
AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerInputMappings();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_AutoSettingsInput();
// End Cross Module References

// Begin Interface UAutoSettingsPlayer Function GetDefaultInputMappingPreset
struct AutoSettingsPlayer_eventGetDefaultInputMappingPreset_Parms
{
	FInputMappingPreset ReturnValue;
};
FInputMappingPreset IAutoSettingsPlayer::GetDefaultInputMappingPreset() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDefaultInputMappingPreset instead.");
	AutoSettingsPlayer_eventGetDefaultInputMappingPreset_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UAutoSettingsPlayer_GetDefaultInputMappingPreset = FName(TEXT("GetDefaultInputMappingPreset"));
FInputMappingPreset IAutoSettingsPlayer::Execute_GetDefaultInputMappingPreset(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAutoSettingsPlayer::StaticClass()));
	AutoSettingsPlayer_eventGetDefaultInputMappingPreset_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAutoSettingsPlayer_GetDefaultInputMappingPreset);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IAutoSettingsPlayer*)(O->GetNativeInterfaceAddress(UAutoSettingsPlayer::StaticClass())))
	{
		Parms.ReturnValue = I->GetDefaultInputMappingPreset_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UAutoSettingsPlayer_GetDefaultInputMappingPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Override to determine which preset the player should use by default\n" },
		{ "ModuleRelativePath", "Public/AutoSettingsPlayer.h" },
		{ "ToolTip", "Override to determine which preset the player should use by default" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutoSettingsPlayer_GetDefaultInputMappingPreset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoSettingsPlayer_eventGetDefaultInputMappingPreset_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputMappingPreset, METADATA_PARAMS(0, nullptr) }; // 548858416
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoSettingsPlayer_GetDefaultInputMappingPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoSettingsPlayer_GetDefaultInputMappingPreset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingsPlayer_GetDefaultInputMappingPreset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoSettingsPlayer_GetDefaultInputMappingPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoSettingsPlayer, nullptr, "GetDefaultInputMappingPreset", nullptr, nullptr, Z_Construct_UFunction_UAutoSettingsPlayer_GetDefaultInputMappingPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingsPlayer_GetDefaultInputMappingPreset_Statics::PropPointers), sizeof(AutoSettingsPlayer_eventGetDefaultInputMappingPreset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingsPlayer_GetDefaultInputMappingPreset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoSettingsPlayer_GetDefaultInputMappingPreset_Statics::Function_MetaDataParams) };
static_assert(sizeof(AutoSettingsPlayer_eventGetDefaultInputMappingPreset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutoSettingsPlayer_GetDefaultInputMappingPreset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoSettingsPlayer_GetDefaultInputMappingPreset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAutoSettingsPlayer::execGetDefaultInputMappingPreset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInputMappingPreset*)Z_Param__Result=P_THIS->GetDefaultInputMappingPreset_Implementation();
	P_NATIVE_END;
}
// End Interface UAutoSettingsPlayer Function GetDefaultInputMappingPreset

// Begin Interface UAutoSettingsPlayer Function GetInputMappings
struct AutoSettingsPlayer_eventGetInputMappings_Parms
{
	FPlayerInputMappings InputMappings;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	AutoSettingsPlayer_eventGetInputMappings_Parms()
		: ReturnValue(false)
	{
	}
};
bool IAutoSettingsPlayer::GetInputMappings(FPlayerInputMappings& InputMappings) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetInputMappings instead.");
	AutoSettingsPlayer_eventGetInputMappings_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UAutoSettingsPlayer_GetInputMappings = FName(TEXT("GetInputMappings"));
bool IAutoSettingsPlayer::Execute_GetInputMappings(const UObject* O, FPlayerInputMappings& InputMappings)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAutoSettingsPlayer::StaticClass()));
	AutoSettingsPlayer_eventGetInputMappings_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAutoSettingsPlayer_GetInputMappings);
	if (Func)
	{
		Parms.InputMappings=InputMappings;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		InputMappings=Parms.InputMappings;
	}
	else if (auto I = (const IAutoSettingsPlayer*)(O->GetNativeInterfaceAddress(UAutoSettingsPlayer::StaticClass())))
	{
		Parms.ReturnValue = I->GetInputMappings_Implementation(InputMappings);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UAutoSettingsPlayer_GetInputMappings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Override to store input mappings\n// This is called whenever AutoSettings needs to get a player's current mappings\n// e.g. Get input mappings from a user's profile\n// See SaveInputMappings()\n" },
		{ "ModuleRelativePath", "Public/AutoSettingsPlayer.h" },
		{ "ToolTip", "Override to store input mappings\nThis is called whenever AutoSettings needs to get a player's current mappings\ne.g. Get input mappings from a user's profile\nSee SaveInputMappings()" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputMappings;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutoSettingsPlayer_GetInputMappings_Statics::NewProp_InputMappings = { "InputMappings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoSettingsPlayer_eventGetInputMappings_Parms, InputMappings), Z_Construct_UScriptStruct_FPlayerInputMappings, METADATA_PARAMS(0, nullptr) }; // 4017813671
void Z_Construct_UFunction_UAutoSettingsPlayer_GetInputMappings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AutoSettingsPlayer_eventGetInputMappings_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAutoSettingsPlayer_GetInputMappings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AutoSettingsPlayer_eventGetInputMappings_Parms), &Z_Construct_UFunction_UAutoSettingsPlayer_GetInputMappings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoSettingsPlayer_GetInputMappings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoSettingsPlayer_GetInputMappings_Statics::NewProp_InputMappings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoSettingsPlayer_GetInputMappings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingsPlayer_GetInputMappings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoSettingsPlayer_GetInputMappings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoSettingsPlayer, nullptr, "GetInputMappings", nullptr, nullptr, Z_Construct_UFunction_UAutoSettingsPlayer_GetInputMappings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingsPlayer_GetInputMappings_Statics::PropPointers), sizeof(AutoSettingsPlayer_eventGetInputMappings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingsPlayer_GetInputMappings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoSettingsPlayer_GetInputMappings_Statics::Function_MetaDataParams) };
static_assert(sizeof(AutoSettingsPlayer_eventGetInputMappings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutoSettingsPlayer_GetInputMappings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoSettingsPlayer_GetInputMappings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAutoSettingsPlayer::execGetInputMappings)
{
	P_GET_STRUCT_REF(FPlayerInputMappings,Z_Param_Out_InputMappings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetInputMappings_Implementation(Z_Param_Out_InputMappings);
	P_NATIVE_END;
}
// End Interface UAutoSettingsPlayer Function GetInputMappings

// Begin Interface UAutoSettingsPlayer Function GetUniquePlayerIdentifier
struct AutoSettingsPlayer_eventGetUniquePlayerIdentifier_Parms
{
	FString ReturnValue;
};
FString IAutoSettingsPlayer::GetUniquePlayerIdentifier() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetUniquePlayerIdentifier instead.");
	AutoSettingsPlayer_eventGetUniquePlayerIdentifier_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UAutoSettingsPlayer_GetUniquePlayerIdentifier = FName(TEXT("GetUniquePlayerIdentifier"));
FString IAutoSettingsPlayer::Execute_GetUniquePlayerIdentifier(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAutoSettingsPlayer::StaticClass()));
	AutoSettingsPlayer_eventGetUniquePlayerIdentifier_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAutoSettingsPlayer_GetUniquePlayerIdentifier);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IAutoSettingsPlayer*)(O->GetNativeInterfaceAddress(UAutoSettingsPlayer::StaticClass())))
	{
		Parms.ReturnValue = I->GetUniquePlayerIdentifier_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UAutoSettingsPlayer_GetUniquePlayerIdentifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Auto Settings" },
		{ "Comment", "// This should return a unique identifier for the player that can be used as a key to store custom input overrides\n" },
		{ "ModuleRelativePath", "Public/AutoSettingsPlayer.h" },
		{ "ToolTip", "This should return a unique identifier for the player that can be used as a key to store custom input overrides" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutoSettingsPlayer_GetUniquePlayerIdentifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoSettingsPlayer_eventGetUniquePlayerIdentifier_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoSettingsPlayer_GetUniquePlayerIdentifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoSettingsPlayer_GetUniquePlayerIdentifier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingsPlayer_GetUniquePlayerIdentifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoSettingsPlayer_GetUniquePlayerIdentifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoSettingsPlayer, nullptr, "GetUniquePlayerIdentifier", nullptr, nullptr, Z_Construct_UFunction_UAutoSettingsPlayer_GetUniquePlayerIdentifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingsPlayer_GetUniquePlayerIdentifier_Statics::PropPointers), sizeof(AutoSettingsPlayer_eventGetUniquePlayerIdentifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingsPlayer_GetUniquePlayerIdentifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoSettingsPlayer_GetUniquePlayerIdentifier_Statics::Function_MetaDataParams) };
static_assert(sizeof(AutoSettingsPlayer_eventGetUniquePlayerIdentifier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutoSettingsPlayer_GetUniquePlayerIdentifier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoSettingsPlayer_GetUniquePlayerIdentifier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAutoSettingsPlayer::execGetUniquePlayerIdentifier)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetUniquePlayerIdentifier_Implementation();
	P_NATIVE_END;
}
// End Interface UAutoSettingsPlayer Function GetUniquePlayerIdentifier

// Begin Interface UAutoSettingsPlayer Function SaveInputMappings
struct AutoSettingsPlayer_eventSaveInputMappings_Parms
{
	FPlayerInputMappings InputMappings;
};
void IAutoSettingsPlayer::SaveInputMappings(FPlayerInputMappings InputMappings)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SaveInputMappings instead.");
}
static FName NAME_UAutoSettingsPlayer_SaveInputMappings = FName(TEXT("SaveInputMappings"));
void IAutoSettingsPlayer::Execute_SaveInputMappings(UObject* O, FPlayerInputMappings InputMappings)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAutoSettingsPlayer::StaticClass()));
	AutoSettingsPlayer_eventSaveInputMappings_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAutoSettingsPlayer_SaveInputMappings);
	if (Func)
	{
		Parms.InputMappings=InputMappings;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IAutoSettingsPlayer*)(O->GetNativeInterfaceAddress(UAutoSettingsPlayer::StaticClass())))
	{
		I->SaveInputMappings_Implementation(InputMappings);
	}
}
struct Z_Construct_UFunction_UAutoSettingsPlayer_SaveInputMappings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Override to implement custom saving logic\n// This is called whenever the user's input mappings are modified\n// e.g. Save input mappings in a user's save file\n// See GetInputMappings()\n" },
		{ "ModuleRelativePath", "Public/AutoSettingsPlayer.h" },
		{ "ToolTip", "Override to implement custom saving logic\nThis is called whenever the user's input mappings are modified\ne.g. Save input mappings in a user's save file\nSee GetInputMappings()" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputMappings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutoSettingsPlayer_SaveInputMappings_Statics::NewProp_InputMappings = { "InputMappings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoSettingsPlayer_eventSaveInputMappings_Parms, InputMappings), Z_Construct_UScriptStruct_FPlayerInputMappings, METADATA_PARAMS(0, nullptr) }; // 4017813671
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoSettingsPlayer_SaveInputMappings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoSettingsPlayer_SaveInputMappings_Statics::NewProp_InputMappings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingsPlayer_SaveInputMappings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoSettingsPlayer_SaveInputMappings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoSettingsPlayer, nullptr, "SaveInputMappings", nullptr, nullptr, Z_Construct_UFunction_UAutoSettingsPlayer_SaveInputMappings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingsPlayer_SaveInputMappings_Statics::PropPointers), sizeof(AutoSettingsPlayer_eventSaveInputMappings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingsPlayer_SaveInputMappings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoSettingsPlayer_SaveInputMappings_Statics::Function_MetaDataParams) };
static_assert(sizeof(AutoSettingsPlayer_eventSaveInputMappings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutoSettingsPlayer_SaveInputMappings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoSettingsPlayer_SaveInputMappings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAutoSettingsPlayer::execSaveInputMappings)
{
	P_GET_STRUCT(FPlayerInputMappings,Z_Param_InputMappings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveInputMappings_Implementation(Z_Param_InputMappings);
	P_NATIVE_END;
}
// End Interface UAutoSettingsPlayer Function SaveInputMappings

// Begin Interface UAutoSettingsPlayer
void UAutoSettingsPlayer::StaticRegisterNativesUAutoSettingsPlayer()
{
	UClass* Class = UAutoSettingsPlayer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDefaultInputMappingPreset", &IAutoSettingsPlayer::execGetDefaultInputMappingPreset },
		{ "GetInputMappings", &IAutoSettingsPlayer::execGetInputMappings },
		{ "GetUniquePlayerIdentifier", &IAutoSettingsPlayer::execGetUniquePlayerIdentifier },
		{ "SaveInputMappings", &IAutoSettingsPlayer::execSaveInputMappings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutoSettingsPlayer);
UClass* Z_Construct_UClass_UAutoSettingsPlayer_NoRegister()
{
	return UAutoSettingsPlayer::StaticClass();
}
struct Z_Construct_UClass_UAutoSettingsPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutoSettingsPlayer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAutoSettingsPlayer_GetDefaultInputMappingPreset, "GetDefaultInputMappingPreset" }, // 261298306
		{ &Z_Construct_UFunction_UAutoSettingsPlayer_GetInputMappings, "GetInputMappings" }, // 2877578622
		{ &Z_Construct_UFunction_UAutoSettingsPlayer_GetUniquePlayerIdentifier, "GetUniquePlayerIdentifier" }, // 2551062815
		{ &Z_Construct_UFunction_UAutoSettingsPlayer_SaveInputMappings, "SaveInputMappings" }, // 1897754266
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAutoSettingsPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAutoSettingsPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutoSettingsPlayer_Statics::ClassParams = {
	&UAutoSettingsPlayer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutoSettingsPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutoSettingsPlayer()
{
	if (!Z_Registration_Info_UClass_UAutoSettingsPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutoSettingsPlayer.OuterSingleton, Z_Construct_UClass_UAutoSettingsPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutoSettingsPlayer.OuterSingleton;
}
template<> AUTOSETTINGSINPUT_API UClass* StaticClass<UAutoSettingsPlayer>()
{
	return UAutoSettingsPlayer::StaticClass();
}
UAutoSettingsPlayer::UAutoSettingsPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoSettingsPlayer);
UAutoSettingsPlayer::~UAutoSettingsPlayer() {}
// End Interface UAutoSettingsPlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_AutoSettingsPlayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAutoSettingsPlayer, UAutoSettingsPlayer::StaticClass, TEXT("UAutoSettingsPlayer"), &Z_Registration_Info_UClass_UAutoSettingsPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutoSettingsPlayer), 1156574657U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_AutoSettingsPlayer_h_4050136424(TEXT("/Script/AutoSettingsInput"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_AutoSettingsPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_AutoSettingsPlayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
