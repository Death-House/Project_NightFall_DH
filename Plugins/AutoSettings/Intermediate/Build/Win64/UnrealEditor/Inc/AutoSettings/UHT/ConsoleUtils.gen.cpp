// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/Console/ConsoleUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConsoleUtils() {}

// Begin Cross Module References
AUTOSETTINGS_API UClass* Z_Construct_UClass_UConsoleUtils();
AUTOSETTINGS_API UClass* Z_Construct_UClass_UConsoleUtils_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_AutoSettings();
// End Cross Module References

// Begin Class UConsoleUtils Function GetBoolCVar
struct Z_Construct_UFunction_UConsoleUtils_GetBoolCVar_Statics
{
	struct ConsoleUtils_eventGetBoolCVar_Parms
	{
		FName Name;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Console" },
		{ "Comment", "// Get current value of int CVar as bool\n" },
		{ "ModuleRelativePath", "Public/Console/ConsoleUtils.h" },
		{ "ToolTip", "Get current value of int CVar as bool" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UConsoleUtils_GetBoolCVar_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConsoleUtils_eventGetBoolCVar_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UConsoleUtils_GetBoolCVar_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ConsoleUtils_eventGetBoolCVar_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConsoleUtils_GetBoolCVar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ConsoleUtils_eventGetBoolCVar_Parms), &Z_Construct_UFunction_UConsoleUtils_GetBoolCVar_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleUtils_GetBoolCVar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleUtils_GetBoolCVar_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleUtils_GetBoolCVar_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_GetBoolCVar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleUtils_GetBoolCVar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleUtils, nullptr, "GetBoolCVar", nullptr, nullptr, Z_Construct_UFunction_UConsoleUtils_GetBoolCVar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_GetBoolCVar_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConsoleUtils_GetBoolCVar_Statics::ConsoleUtils_eventGetBoolCVar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_GetBoolCVar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConsoleUtils_GetBoolCVar_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UConsoleUtils_GetBoolCVar_Statics::ConsoleUtils_eventGetBoolCVar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UConsoleUtils_GetBoolCVar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConsoleUtils_GetBoolCVar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConsoleUtils::execGetBoolCVar)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UConsoleUtils::GetBoolCVar(Z_Param_Name);
	P_NATIVE_END;
}
// End Class UConsoleUtils Function GetBoolCVar

// Begin Class UConsoleUtils Function GetFloatCVar
struct Z_Construct_UFunction_UConsoleUtils_GetFloatCVar_Statics
{
	struct ConsoleUtils_eventGetFloatCVar_Parms
	{
		FName Name;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Console" },
		{ "Comment", "// Get current value of CVar\n" },
		{ "ModuleRelativePath", "Public/Console/ConsoleUtils.h" },
		{ "ToolTip", "Get current value of CVar" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UConsoleUtils_GetFloatCVar_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConsoleUtils_eventGetFloatCVar_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConsoleUtils_GetFloatCVar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConsoleUtils_eventGetFloatCVar_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleUtils_GetFloatCVar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleUtils_GetFloatCVar_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleUtils_GetFloatCVar_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_GetFloatCVar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleUtils_GetFloatCVar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleUtils, nullptr, "GetFloatCVar", nullptr, nullptr, Z_Construct_UFunction_UConsoleUtils_GetFloatCVar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_GetFloatCVar_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConsoleUtils_GetFloatCVar_Statics::ConsoleUtils_eventGetFloatCVar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_GetFloatCVar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConsoleUtils_GetFloatCVar_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UConsoleUtils_GetFloatCVar_Statics::ConsoleUtils_eventGetFloatCVar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UConsoleUtils_GetFloatCVar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConsoleUtils_GetFloatCVar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConsoleUtils::execGetFloatCVar)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UConsoleUtils::GetFloatCVar(Z_Param_Name);
	P_NATIVE_END;
}
// End Class UConsoleUtils Function GetFloatCVar

// Begin Class UConsoleUtils Function GetIntCVar
struct Z_Construct_UFunction_UConsoleUtils_GetIntCVar_Statics
{
	struct ConsoleUtils_eventGetIntCVar_Parms
	{
		FName Name;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Console" },
		{ "Comment", "// Get current value of CVar\n" },
		{ "ModuleRelativePath", "Public/Console/ConsoleUtils.h" },
		{ "ToolTip", "Get current value of CVar" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UConsoleUtils_GetIntCVar_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConsoleUtils_eventGetIntCVar_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConsoleUtils_GetIntCVar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConsoleUtils_eventGetIntCVar_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleUtils_GetIntCVar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleUtils_GetIntCVar_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleUtils_GetIntCVar_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_GetIntCVar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleUtils_GetIntCVar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleUtils, nullptr, "GetIntCVar", nullptr, nullptr, Z_Construct_UFunction_UConsoleUtils_GetIntCVar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_GetIntCVar_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConsoleUtils_GetIntCVar_Statics::ConsoleUtils_eventGetIntCVar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_GetIntCVar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConsoleUtils_GetIntCVar_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UConsoleUtils_GetIntCVar_Statics::ConsoleUtils_eventGetIntCVar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UConsoleUtils_GetIntCVar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConsoleUtils_GetIntCVar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConsoleUtils::execGetIntCVar)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UConsoleUtils::GetIntCVar(Z_Param_Name);
	P_NATIVE_END;
}
// End Class UConsoleUtils Function GetIntCVar

// Begin Class UConsoleUtils Function GetStringCVar
struct Z_Construct_UFunction_UConsoleUtils_GetStringCVar_Statics
{
	struct ConsoleUtils_eventGetStringCVar_Parms
	{
		FName Name;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Console" },
		{ "Comment", "// Get current value of CVar\n" },
		{ "ModuleRelativePath", "Public/Console/ConsoleUtils.h" },
		{ "ToolTip", "Get current value of CVar" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UConsoleUtils_GetStringCVar_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConsoleUtils_eventGetStringCVar_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleUtils_GetStringCVar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConsoleUtils_eventGetStringCVar_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleUtils_GetStringCVar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleUtils_GetStringCVar_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleUtils_GetStringCVar_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_GetStringCVar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleUtils_GetStringCVar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleUtils, nullptr, "GetStringCVar", nullptr, nullptr, Z_Construct_UFunction_UConsoleUtils_GetStringCVar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_GetStringCVar_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConsoleUtils_GetStringCVar_Statics::ConsoleUtils_eventGetStringCVar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_GetStringCVar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConsoleUtils_GetStringCVar_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UConsoleUtils_GetStringCVar_Statics::ConsoleUtils_eventGetStringCVar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UConsoleUtils_GetStringCVar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConsoleUtils_GetStringCVar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConsoleUtils::execGetStringCVar)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UConsoleUtils::GetStringCVar(Z_Param_Name);
	P_NATIVE_END;
}
// End Class UConsoleUtils Function GetStringCVar

// Begin Class UConsoleUtils Function IsCVarRegistered
struct Z_Construct_UFunction_UConsoleUtils_IsCVarRegistered_Statics
{
	struct ConsoleUtils_eventIsCVarRegistered_Parms
	{
		FName Name;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Console" },
		{ "Comment", "// True if the CVar with the specified name is registered\n" },
		{ "ModuleRelativePath", "Public/Console/ConsoleUtils.h" },
		{ "ToolTip", "True if the CVar with the specified name is registered" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UConsoleUtils_IsCVarRegistered_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConsoleUtils_eventIsCVarRegistered_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UConsoleUtils_IsCVarRegistered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ConsoleUtils_eventIsCVarRegistered_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConsoleUtils_IsCVarRegistered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ConsoleUtils_eventIsCVarRegistered_Parms), &Z_Construct_UFunction_UConsoleUtils_IsCVarRegistered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleUtils_IsCVarRegistered_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleUtils_IsCVarRegistered_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleUtils_IsCVarRegistered_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_IsCVarRegistered_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleUtils_IsCVarRegistered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleUtils, nullptr, "IsCVarRegistered", nullptr, nullptr, Z_Construct_UFunction_UConsoleUtils_IsCVarRegistered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_IsCVarRegistered_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConsoleUtils_IsCVarRegistered_Statics::ConsoleUtils_eventIsCVarRegistered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_IsCVarRegistered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConsoleUtils_IsCVarRegistered_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UConsoleUtils_IsCVarRegistered_Statics::ConsoleUtils_eventIsCVarRegistered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UConsoleUtils_IsCVarRegistered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConsoleUtils_IsCVarRegistered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConsoleUtils::execIsCVarRegistered)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UConsoleUtils::IsCVarRegistered(Z_Param_Name);
	P_NATIVE_END;
}
// End Class UConsoleUtils Function IsCVarRegistered

// Begin Class UConsoleUtils Function SetBoolCVar
struct Z_Construct_UFunction_UConsoleUtils_SetBoolCVar_Statics
{
	struct ConsoleUtils_eventSetBoolCVar_Parms
	{
		FName Name;
		bool Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Console" },
		{ "Comment", "// Set value of int CVar as bool\n" },
		{ "ModuleRelativePath", "Public/Console/ConsoleUtils.h" },
		{ "ToolTip", "Set value of int CVar as bool" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UConsoleUtils_SetBoolCVar_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConsoleUtils_eventSetBoolCVar_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UConsoleUtils_SetBoolCVar_Statics::NewProp_Value_SetBit(void* Obj)
{
	((ConsoleUtils_eventSetBoolCVar_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConsoleUtils_SetBoolCVar_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ConsoleUtils_eventSetBoolCVar_Parms), &Z_Construct_UFunction_UConsoleUtils_SetBoolCVar_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleUtils_SetBoolCVar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleUtils_SetBoolCVar_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleUtils_SetBoolCVar_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_SetBoolCVar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleUtils_SetBoolCVar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleUtils, nullptr, "SetBoolCVar", nullptr, nullptr, Z_Construct_UFunction_UConsoleUtils_SetBoolCVar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_SetBoolCVar_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConsoleUtils_SetBoolCVar_Statics::ConsoleUtils_eventSetBoolCVar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_SetBoolCVar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConsoleUtils_SetBoolCVar_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UConsoleUtils_SetBoolCVar_Statics::ConsoleUtils_eventSetBoolCVar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UConsoleUtils_SetBoolCVar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConsoleUtils_SetBoolCVar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConsoleUtils::execSetBoolCVar)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_UBOOL(Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UConsoleUtils::SetBoolCVar(Z_Param_Name,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UConsoleUtils Function SetBoolCVar

// Begin Class UConsoleUtils Function SetFloatCVar
struct Z_Construct_UFunction_UConsoleUtils_SetFloatCVar_Statics
{
	struct ConsoleUtils_eventSetFloatCVar_Parms
	{
		FName Name;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Console" },
		{ "Comment", "// Set value of CVar\n" },
		{ "ModuleRelativePath", "Public/Console/ConsoleUtils.h" },
		{ "ToolTip", "Set value of CVar" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UConsoleUtils_SetFloatCVar_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConsoleUtils_eventSetFloatCVar_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConsoleUtils_SetFloatCVar_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConsoleUtils_eventSetFloatCVar_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleUtils_SetFloatCVar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleUtils_SetFloatCVar_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleUtils_SetFloatCVar_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_SetFloatCVar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleUtils_SetFloatCVar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleUtils, nullptr, "SetFloatCVar", nullptr, nullptr, Z_Construct_UFunction_UConsoleUtils_SetFloatCVar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_SetFloatCVar_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConsoleUtils_SetFloatCVar_Statics::ConsoleUtils_eventSetFloatCVar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_SetFloatCVar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConsoleUtils_SetFloatCVar_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UConsoleUtils_SetFloatCVar_Statics::ConsoleUtils_eventSetFloatCVar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UConsoleUtils_SetFloatCVar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConsoleUtils_SetFloatCVar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConsoleUtils::execSetFloatCVar)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UConsoleUtils::SetFloatCVar(Z_Param_Name,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UConsoleUtils Function SetFloatCVar

// Begin Class UConsoleUtils Function SetIntCVar
struct Z_Construct_UFunction_UConsoleUtils_SetIntCVar_Statics
{
	struct ConsoleUtils_eventSetIntCVar_Parms
	{
		FName Name;
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Console" },
		{ "Comment", "// Set value of CVar\n" },
		{ "ModuleRelativePath", "Public/Console/ConsoleUtils.h" },
		{ "ToolTip", "Set value of CVar" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UConsoleUtils_SetIntCVar_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConsoleUtils_eventSetIntCVar_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConsoleUtils_SetIntCVar_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConsoleUtils_eventSetIntCVar_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleUtils_SetIntCVar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleUtils_SetIntCVar_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleUtils_SetIntCVar_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_SetIntCVar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleUtils_SetIntCVar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleUtils, nullptr, "SetIntCVar", nullptr, nullptr, Z_Construct_UFunction_UConsoleUtils_SetIntCVar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_SetIntCVar_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConsoleUtils_SetIntCVar_Statics::ConsoleUtils_eventSetIntCVar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_SetIntCVar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConsoleUtils_SetIntCVar_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UConsoleUtils_SetIntCVar_Statics::ConsoleUtils_eventSetIntCVar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UConsoleUtils_SetIntCVar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConsoleUtils_SetIntCVar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConsoleUtils::execSetIntCVar)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UConsoleUtils::SetIntCVar(Z_Param_Name,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UConsoleUtils Function SetIntCVar

// Begin Class UConsoleUtils Function SetStringCVar
struct Z_Construct_UFunction_UConsoleUtils_SetStringCVar_Statics
{
	struct ConsoleUtils_eventSetStringCVar_Parms
	{
		FName Name;
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Console" },
		{ "Comment", "// Set value of CVar\n" },
		{ "ModuleRelativePath", "Public/Console/ConsoleUtils.h" },
		{ "ToolTip", "Set value of CVar" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UConsoleUtils_SetStringCVar_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConsoleUtils_eventSetStringCVar_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleUtils_SetStringCVar_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConsoleUtils_eventSetStringCVar_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleUtils_SetStringCVar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleUtils_SetStringCVar_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleUtils_SetStringCVar_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_SetStringCVar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleUtils_SetStringCVar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleUtils, nullptr, "SetStringCVar", nullptr, nullptr, Z_Construct_UFunction_UConsoleUtils_SetStringCVar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_SetStringCVar_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConsoleUtils_SetStringCVar_Statics::ConsoleUtils_eventSetStringCVar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_SetStringCVar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConsoleUtils_SetStringCVar_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UConsoleUtils_SetStringCVar_Statics::ConsoleUtils_eventSetStringCVar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UConsoleUtils_SetStringCVar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConsoleUtils_SetStringCVar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConsoleUtils::execSetStringCVar)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UConsoleUtils::SetStringCVar(Z_Param_Name,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UConsoleUtils Function SetStringCVar

// Begin Class UConsoleUtils
void UConsoleUtils::StaticRegisterNativesUConsoleUtils()
{
	UClass* Class = UConsoleUtils::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBoolCVar", &UConsoleUtils::execGetBoolCVar },
		{ "GetFloatCVar", &UConsoleUtils::execGetFloatCVar },
		{ "GetIntCVar", &UConsoleUtils::execGetIntCVar },
		{ "GetStringCVar", &UConsoleUtils::execGetStringCVar },
		{ "IsCVarRegistered", &UConsoleUtils::execIsCVarRegistered },
		{ "SetBoolCVar", &UConsoleUtils::execSetBoolCVar },
		{ "SetFloatCVar", &UConsoleUtils::execSetFloatCVar },
		{ "SetIntCVar", &UConsoleUtils::execSetIntCVar },
		{ "SetStringCVar", &UConsoleUtils::execSetStringCVar },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConsoleUtils);
UClass* Z_Construct_UClass_UConsoleUtils_NoRegister()
{
	return UConsoleUtils::StaticClass();
}
struct Z_Construct_UClass_UConsoleUtils_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Static utility functions for interacting with console and console variables\n */" },
		{ "IncludePath", "Console/ConsoleUtils.h" },
		{ "ModuleRelativePath", "Public/Console/ConsoleUtils.h" },
		{ "ToolTip", "Static utility functions for interacting with console and console variables" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UConsoleUtils_GetBoolCVar, "GetBoolCVar" }, // 2180801239
		{ &Z_Construct_UFunction_UConsoleUtils_GetFloatCVar, "GetFloatCVar" }, // 200417420
		{ &Z_Construct_UFunction_UConsoleUtils_GetIntCVar, "GetIntCVar" }, // 4163666589
		{ &Z_Construct_UFunction_UConsoleUtils_GetStringCVar, "GetStringCVar" }, // 2783880135
		{ &Z_Construct_UFunction_UConsoleUtils_IsCVarRegistered, "IsCVarRegistered" }, // 2696225266
		{ &Z_Construct_UFunction_UConsoleUtils_SetBoolCVar, "SetBoolCVar" }, // 1520386060
		{ &Z_Construct_UFunction_UConsoleUtils_SetFloatCVar, "SetFloatCVar" }, // 252595745
		{ &Z_Construct_UFunction_UConsoleUtils_SetIntCVar, "SetIntCVar" }, // 4273578194
		{ &Z_Construct_UFunction_UConsoleUtils_SetStringCVar, "SetStringCVar" }, // 1144310120
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConsoleUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UConsoleUtils_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleUtils_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UConsoleUtils_Statics::ClassParams = {
	&UConsoleUtils::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_UConsoleUtils_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UConsoleUtils()
{
	if (!Z_Registration_Info_UClass_UConsoleUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConsoleUtils.OuterSingleton, Z_Construct_UClass_UConsoleUtils_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UConsoleUtils.OuterSingleton;
}
template<> AUTOSETTINGS_API UClass* StaticClass<UConsoleUtils>()
{
	return UConsoleUtils::StaticClass();
}
UConsoleUtils::UConsoleUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UConsoleUtils);
UConsoleUtils::~UConsoleUtils() {}
// End Class UConsoleUtils

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_ConsoleUtils_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UConsoleUtils, UConsoleUtils::StaticClass, TEXT("UConsoleUtils"), &Z_Registration_Info_UClass_UConsoleUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConsoleUtils), 254484282U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_ConsoleUtils_h_3118770844(TEXT("/Script/AutoSettings"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_ConsoleUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_ConsoleUtils_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
