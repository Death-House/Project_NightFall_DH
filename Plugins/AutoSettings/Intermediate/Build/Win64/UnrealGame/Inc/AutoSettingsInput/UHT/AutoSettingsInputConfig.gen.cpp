// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettingsInput/Public/Misc/AutoSettingsInputConfig.h"
#include "AutoSettingsInput/Public/InputMappingPreset.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoSettingsInputConfig() {}

// Begin Cross Module References
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UAutoSettingsInputConfig();
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UAutoSettingsInputConfig_NoRegister();
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UAutoSettingsInputConfigInterface_NoRegister();
AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FAxisAssociation();
AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputMappingPreset();
AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FKeyFriendlyName();
AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FKeyGroup();
AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FKeyIconPair();
AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FKeyIconSet();
AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FKeyScale();
AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FMappingGroupLink();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
UPackage* Z_Construct_UPackage__Script_AutoSettingsInput();
// End Cross Module References

// Begin ScriptStruct FKeyIconPair
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KeyIconPair;
class UScriptStruct* FKeyIconPair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KeyIconPair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KeyIconPair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyIconPair, (UObject*)Z_Construct_UPackage__Script_AutoSettingsInput(), TEXT("KeyIconPair"));
	}
	return Z_Registration_Info_UScriptStruct_KeyIconPair.OuterSingleton;
}
template<> AUTOSETTINGSINPUT_API UScriptStruct* StaticStruct<FKeyIconPair>()
{
	return FKeyIconPair::StaticStruct();
}
struct Z_Construct_UScriptStruct_FKeyIconPair_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Deprecated structure\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Deprecated structure" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyIconPair>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKeyIconPair_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKeyIconPair, Key_DEPRECATED), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 658672854
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FKeyIconPair_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKeyIconPair, Icon_DEPRECATED), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKeyIconPair_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyIconPair_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyIconPair_Statics::NewProp_Icon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyIconPair_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeyIconPair_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
	nullptr,
	&NewStructOps,
	"KeyIconPair",
	Z_Construct_UScriptStruct_FKeyIconPair_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyIconPair_Statics::PropPointers),
	sizeof(FKeyIconPair),
	alignof(FKeyIconPair),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyIconPair_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKeyIconPair_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FKeyIconPair()
{
	if (!Z_Registration_Info_UScriptStruct_KeyIconPair.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KeyIconPair.InnerSingleton, Z_Construct_UScriptStruct_FKeyIconPair_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_KeyIconPair.InnerSingleton;
}
// End ScriptStruct FKeyIconPair

// Begin ScriptStruct FKeyIconSet
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KeyIconSet;
class UScriptStruct* FKeyIconSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KeyIconSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KeyIconSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyIconSet, (UObject*)Z_Construct_UPackage__Script_AutoSettingsInput(), TEXT("KeyIconSet"));
	}
	return Z_Registration_Info_UScriptStruct_KeyIconSet.OuterSingleton;
}
template<> AUTOSETTINGSINPUT_API UScriptStruct* StaticStruct<FKeyIconSet>()
{
	return FKeyIconSet::StaticStruct();
}
struct Z_Construct_UScriptStruct_FKeyIconSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Set of key icons\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Set of key icons" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "Key Icon Set" },
		{ "Comment", "// Tags to identify this icon set\n// May include platform such as \"XBox\" or \"PlayStation\" and/or variations such as \"Small\" or \"Large\"\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Tags to identify this icon set\nMay include platform such as \"XBox\" or \"PlayStation\" and/or variations such as \"Small\" or \"Large\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconMap_MetaData[] = {
		{ "Category", "Key Icon Set" },
		{ "Comment", "// Icons defined for different keys\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Icons defined for different keys" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icons_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_IconMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IconMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_IconMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Icons_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Icons;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyIconSet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKeyIconSet_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKeyIconSet, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) }; // 3352185621
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FKeyIconSet_Statics::NewProp_IconMap_ValueProp = { "IconMap", nullptr, (EPropertyFlags)0x0004000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKeyIconSet_Statics::NewProp_IconMap_Key_KeyProp = { "IconMap_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FKeyIconSet_Statics::NewProp_IconMap = { "IconMap", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKeyIconSet, IconMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconMap_MetaData), NewProp_IconMap_MetaData) }; // 658672854
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKeyIconSet_Statics::NewProp_Icons_Inner = { "Icons", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKeyIconPair, METADATA_PARAMS(0, nullptr) }; // 3481620545
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKeyIconSet_Statics::NewProp_Icons = { "Icons", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKeyIconSet, Icons_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icons_MetaData), NewProp_Icons_MetaData) }; // 3481620545
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKeyIconSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyIconSet_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyIconSet_Statics::NewProp_IconMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyIconSet_Statics::NewProp_IconMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyIconSet_Statics::NewProp_IconMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyIconSet_Statics::NewProp_Icons_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyIconSet_Statics::NewProp_Icons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyIconSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeyIconSet_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
	nullptr,
	&NewStructOps,
	"KeyIconSet",
	Z_Construct_UScriptStruct_FKeyIconSet_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyIconSet_Statics::PropPointers),
	sizeof(FKeyIconSet),
	alignof(FKeyIconSet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyIconSet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKeyIconSet_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FKeyIconSet()
{
	if (!Z_Registration_Info_UScriptStruct_KeyIconSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KeyIconSet.InnerSingleton, Z_Construct_UScriptStruct_FKeyIconSet_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_KeyIconSet.InnerSingleton;
}
// End ScriptStruct FKeyIconSet

// Begin ScriptStruct FKeyGroup
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KeyGroup;
class UScriptStruct* FKeyGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KeyGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KeyGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyGroup, (UObject*)Z_Construct_UPackage__Script_AutoSettingsInput(), TEXT("KeyGroup"));
	}
	return Z_Registration_Info_UScriptStruct_KeyGroup.OuterSingleton;
}
template<> AUTOSETTINGSINPUT_API UScriptStruct* StaticStruct<FKeyGroup>()
{
	return FKeyGroup::StaticStruct();
}
struct Z_Construct_UScriptStruct_FKeyGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Defines a group of keys which should be separated from other keys\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Defines a group of keys which should be separated from other keys" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyGroupTag_MetaData[] = {
		{ "Category", "Key Group" },
		{ "Comment", "// Tag to identify this key group\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Tag to identify this key group" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseGamepadKeys_MetaData[] = {
		{ "Category", "Key Group" },
		{ "Comment", "// If true, will include all gamepad keys in this key group\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "If true, will include all gamepad keys in this key group" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseNonGamepadKeys_MetaData[] = {
		{ "Category", "Key Group" },
		{ "Comment", "// If true, will include all keys that are not gamepad keys in this key group\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "If true, will include all keys that are not gamepad keys in this key group" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[] = {
		{ "Category", "Key Group" },
		{ "Comment", "// Keys to include in this key group\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "TitleProperty", "KeyName" },
		{ "ToolTip", "Keys to include in this key group" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyGroupTag;
	static void NewProp_bUseGamepadKeys_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGamepadKeys;
	static void NewProp_bUseNonGamepadKeys_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseNonGamepadKeys;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Keys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Keys;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyGroup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKeyGroup_Statics::NewProp_KeyGroupTag = { "KeyGroupTag", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKeyGroup, KeyGroupTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyGroupTag_MetaData), NewProp_KeyGroupTag_MetaData) }; // 1298103297
void Z_Construct_UScriptStruct_FKeyGroup_Statics::NewProp_bUseGamepadKeys_SetBit(void* Obj)
{
	((FKeyGroup*)Obj)->bUseGamepadKeys = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyGroup_Statics::NewProp_bUseGamepadKeys = { "bUseGamepadKeys", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FKeyGroup), &Z_Construct_UScriptStruct_FKeyGroup_Statics::NewProp_bUseGamepadKeys_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseGamepadKeys_MetaData), NewProp_bUseGamepadKeys_MetaData) };
void Z_Construct_UScriptStruct_FKeyGroup_Statics::NewProp_bUseNonGamepadKeys_SetBit(void* Obj)
{
	((FKeyGroup*)Obj)->bUseNonGamepadKeys = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyGroup_Statics::NewProp_bUseNonGamepadKeys = { "bUseNonGamepadKeys", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FKeyGroup), &Z_Construct_UScriptStruct_FKeyGroup_Statics::NewProp_bUseNonGamepadKeys_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseNonGamepadKeys_MetaData), NewProp_bUseNonGamepadKeys_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKeyGroup_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKeyGroup_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKeyGroup, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Keys_MetaData), NewProp_Keys_MetaData) }; // 658672854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKeyGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyGroup_Statics::NewProp_KeyGroupTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyGroup_Statics::NewProp_bUseGamepadKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyGroup_Statics::NewProp_bUseNonGamepadKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyGroup_Statics::NewProp_Keys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyGroup_Statics::NewProp_Keys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeyGroup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
	nullptr,
	&NewStructOps,
	"KeyGroup",
	Z_Construct_UScriptStruct_FKeyGroup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyGroup_Statics::PropPointers),
	sizeof(FKeyGroup),
	alignof(FKeyGroup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyGroup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKeyGroup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FKeyGroup()
{
	if (!Z_Registration_Info_UScriptStruct_KeyGroup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KeyGroup.InnerSingleton, Z_Construct_UScriptStruct_FKeyGroup_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_KeyGroup.InnerSingleton;
}
// End ScriptStruct FKeyGroup

// Begin ScriptStruct FKeyScale
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KeyScale;
class UScriptStruct* FKeyScale::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KeyScale.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KeyScale.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyScale, (UObject*)Z_Construct_UPackage__Script_AutoSettingsInput(), TEXT("KeyScale"));
	}
	return Z_Registration_Info_UScriptStruct_KeyScale.OuterSingleton;
}
template<> AUTOSETTINGSINPUT_API UScriptStruct* StaticStruct<FKeyScale>()
{
	return FKeyScale::StaticStruct();
}
struct Z_Construct_UScriptStruct_FKeyScale_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Represents pairing of a button key and a scale, used to associate buttons with an axis\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Represents pairing of a button key and a scale, used to associate buttons with an axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "Category", "Key Scale" },
		{ "Comment", "// Button key\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Button key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Key Scale" },
		{ "Comment", "// Scale of the axis that the button key should be associated with\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Scale of the axis that the button key should be associated with" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyScale>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKeyScale_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKeyScale, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 658672854
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKeyScale_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKeyScale, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKeyScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyScale_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyScale_Statics::NewProp_Scale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeyScale_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
	nullptr,
	&NewStructOps,
	"KeyScale",
	Z_Construct_UScriptStruct_FKeyScale_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyScale_Statics::PropPointers),
	sizeof(FKeyScale),
	alignof(FKeyScale),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyScale_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKeyScale_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FKeyScale()
{
	if (!Z_Registration_Info_UScriptStruct_KeyScale.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KeyScale.InnerSingleton, Z_Construct_UScriptStruct_FKeyScale_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_KeyScale.InnerSingleton;
}
// End ScriptStruct FKeyScale

// Begin ScriptStruct FMappingGroupLink
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MappingGroupLink;
class UScriptStruct* FMappingGroupLink::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MappingGroupLink.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MappingGroupLink.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMappingGroupLink, (UObject*)Z_Construct_UPackage__Script_AutoSettingsInput(), TEXT("MappingGroupLink"));
	}
	return Z_Registration_Info_UScriptStruct_MappingGroupLink.OuterSingleton;
}
template<> AUTOSETTINGSINPUT_API UScriptStruct* StaticStruct<FMappingGroupLink>()
{
	return FMappingGroupLink::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMappingGroupLink_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Defines a set of mapping groups which are linked\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Defines a set of mapping groups which are linked" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingGroups_MetaData[] = {
		{ "Category", "Mapping Group Link" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MappingGroups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MappingGroups;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMappingGroupLink>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMappingGroupLink_Statics::NewProp_MappingGroups_Inner = { "MappingGroups", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMappingGroupLink_Statics::NewProp_MappingGroups = { "MappingGroups", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMappingGroupLink, MappingGroups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingGroups_MetaData), NewProp_MappingGroups_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMappingGroupLink_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappingGroupLink_Statics::NewProp_MappingGroups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappingGroupLink_Statics::NewProp_MappingGroups,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappingGroupLink_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMappingGroupLink_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
	nullptr,
	&NewStructOps,
	"MappingGroupLink",
	Z_Construct_UScriptStruct_FMappingGroupLink_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappingGroupLink_Statics::PropPointers),
	sizeof(FMappingGroupLink),
	alignof(FMappingGroupLink),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappingGroupLink_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMappingGroupLink_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMappingGroupLink()
{
	if (!Z_Registration_Info_UScriptStruct_MappingGroupLink.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MappingGroupLink.InnerSingleton, Z_Construct_UScriptStruct_FMappingGroupLink_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MappingGroupLink.InnerSingleton;
}
// End ScriptStruct FMappingGroupLink

// Begin ScriptStruct FAxisAssociation
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AxisAssociation;
class UScriptStruct* FAxisAssociation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AxisAssociation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AxisAssociation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAxisAssociation, (UObject*)Z_Construct_UPackage__Script_AutoSettingsInput(), TEXT("AxisAssociation"));
	}
	return Z_Registration_Info_UScriptStruct_AxisAssociation.OuterSingleton;
}
template<> AUTOSETTINGSINPUT_API UScriptStruct* StaticStruct<FAxisAssociation>()
{
	return FAxisAssociation::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAxisAssociation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Determines association between axis and buttons\n// Used to tell the system that for example \"Gamepad Left Stick Y\" axis with a scale of -1 should be associated with \"Gamepad Left Stick Down\"\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Determines association between axis and buttons\nUsed to tell the system that for example \"Gamepad Left Stick Y\" axis with a scale of -1 should be associated with \"Gamepad Left Stick Down\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisKey_MetaData[] = {
		{ "Category", "Axis Association" },
		{ "Comment", "// Axis key for this association\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Axis key for this association" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnalogKey_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonKeys_MetaData[] = {
		{ "Category", "Axis Association" },
		{ "Comment", "// Button keys to associate axis with\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "TitleProperty", "Key" },
		{ "ToolTip", "Button keys to associate axis with" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BooleanKeys_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AxisKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnalogKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ButtonKeys;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BooleanKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BooleanKeys;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAxisAssociation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAxisAssociation_Statics::NewProp_AxisKey = { "AxisKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAxisAssociation, AxisKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisKey_MetaData), NewProp_AxisKey_MetaData) }; // 658672854
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAxisAssociation_Statics::NewProp_AnalogKey = { "AnalogKey", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAxisAssociation, AnalogKey_DEPRECATED), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnalogKey_MetaData), NewProp_AnalogKey_MetaData) }; // 658672854
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAxisAssociation_Statics::NewProp_ButtonKeys_Inner = { "ButtonKeys", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKeyScale, METADATA_PARAMS(0, nullptr) }; // 2143159583
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAxisAssociation_Statics::NewProp_ButtonKeys = { "ButtonKeys", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAxisAssociation, ButtonKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonKeys_MetaData), NewProp_ButtonKeys_MetaData) }; // 2143159583
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAxisAssociation_Statics::NewProp_BooleanKeys_Inner = { "BooleanKeys", nullptr, (EPropertyFlags)0x0000000020004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKeyScale, METADATA_PARAMS(0, nullptr) }; // 2143159583
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAxisAssociation_Statics::NewProp_BooleanKeys = { "BooleanKeys", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAxisAssociation, BooleanKeys_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BooleanKeys_MetaData), NewProp_BooleanKeys_MetaData) }; // 2143159583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAxisAssociation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxisAssociation_Statics::NewProp_AxisKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxisAssociation_Statics::NewProp_AnalogKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxisAssociation_Statics::NewProp_ButtonKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxisAssociation_Statics::NewProp_ButtonKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxisAssociation_Statics::NewProp_BooleanKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxisAssociation_Statics::NewProp_BooleanKeys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxisAssociation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAxisAssociation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
	nullptr,
	&NewStructOps,
	"AxisAssociation",
	Z_Construct_UScriptStruct_FAxisAssociation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxisAssociation_Statics::PropPointers),
	sizeof(FAxisAssociation),
	alignof(FAxisAssociation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxisAssociation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAxisAssociation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAxisAssociation()
{
	if (!Z_Registration_Info_UScriptStruct_AxisAssociation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AxisAssociation.InnerSingleton, Z_Construct_UScriptStruct_FAxisAssociation_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AxisAssociation.InnerSingleton;
}
// End ScriptStruct FAxisAssociation

// Begin ScriptStruct FKeyFriendlyName
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KeyFriendlyName;
class UScriptStruct* FKeyFriendlyName::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KeyFriendlyName.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KeyFriendlyName.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyFriendlyName, (UObject*)Z_Construct_UPackage__Script_AutoSettingsInput(), TEXT("KeyFriendlyName"));
	}
	return Z_Registration_Info_UScriptStruct_KeyFriendlyName.OuterSingleton;
}
template<> AUTOSETTINGSINPUT_API UScriptStruct* StaticStruct<FKeyFriendlyName>()
{
	return FKeyFriendlyName::StaticStruct();
}
struct Z_Construct_UScriptStruct_FKeyFriendlyName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Defines friendly user-facing name text for a key\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Defines friendly user-facing name text for a key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "Category", "Key Friendly Name" },
		{ "Comment", "// Specified key\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Specified key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FriendlyName_MetaData[] = {
		{ "Category", "Key Friendly Name" },
		{ "Comment", "// User-facing friendly text name\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "User-facing friendly text name" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FTextPropertyParams NewProp_FriendlyName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyFriendlyName>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKeyFriendlyName_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKeyFriendlyName, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 658672854
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FKeyFriendlyName_Statics::NewProp_FriendlyName = { "FriendlyName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKeyFriendlyName, FriendlyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FriendlyName_MetaData), NewProp_FriendlyName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKeyFriendlyName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyFriendlyName_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyFriendlyName_Statics::NewProp_FriendlyName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyFriendlyName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeyFriendlyName_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
	nullptr,
	&NewStructOps,
	"KeyFriendlyName",
	Z_Construct_UScriptStruct_FKeyFriendlyName_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyFriendlyName_Statics::PropPointers),
	sizeof(FKeyFriendlyName),
	alignof(FKeyFriendlyName),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyFriendlyName_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKeyFriendlyName_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FKeyFriendlyName()
{
	if (!Z_Registration_Info_UScriptStruct_KeyFriendlyName.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KeyFriendlyName.InnerSingleton, Z_Construct_UScriptStruct_FKeyFriendlyName_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_KeyFriendlyName.InnerSingleton;
}
// End ScriptStruct FKeyFriendlyName

// Begin Class UAutoSettingsInputConfig
void UAutoSettingsInputConfig::StaticRegisterNativesUAutoSettingsInputConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutoSettingsInputConfig);
UClass* Z_Construct_UClass_UAutoSettingsInputConfig_NoRegister()
{
	return UAutoSettingsInputConfig::StaticClass();
}
struct Z_Construct_UClass_UAutoSettingsInputConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Configuration object for Auto Settings Input\n */" },
		{ "IncludePath", "Misc/AutoSettingsInputConfig.h" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Configuration object for Auto Settings Input" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoInitializePlayerInputOverrides_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Player Controllers need to be initialized with AutoSettings to set up their custom input overrides, otherwise they will still be using the mappings from the project settings Input page\n// If true, the system will automatically try to initialize the correct input overrides for new PlayerControllers it finds, which is the easiest option\n// If false, input can be manually initialized per PlayerController with InitializePlayerInputOverrides for greater flexibility\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Player Controllers need to be initialized with AutoSettings to set up their custom input overrides, otherwise they will still be using the mappings from the project settings Input page\nIf true, the system will automatically try to initialize the correct input overrides for new PlayerControllers it finds, which is the easiest option\nIf false, input can be manually initialized per PlayerController with InitializePlayerInputOverrides for greater flexibility" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowModifierKeys_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Allow Shift, Ctrl, Alt, Cmd modifiers for action mappings\n// Note: Axis mappings cannot have modifiers\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Allow Shift, Ctrl, Alt, Cmd modifiers for action mappings\nNote: Axis mappings cannot have modifiers" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShiftModifierOverrideText_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// If not empty, text to use for shift modifier labels if an icon is not found\n" },
		{ "EditCondition", "AllowModifierKeys" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "If not empty, text to use for shift modifier labels if an icon is not found" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CtrlModifierOverrideText_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// If not empty, text to use for ctrl modifier labels if an icon is not found\n" },
		{ "EditCondition", "AllowModifierKeys" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "If not empty, text to use for ctrl modifier labels if an icon is not found" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AltModifierOverrideText_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// If not empty, text to use for alt modifier labels if an icon is not found\n" },
		{ "EditCondition", "AllowModifierKeys" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "If not empty, text to use for alt modifier labels if an icon is not found" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CmdModifierOverrideText_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// If not empty, text to use for cmd modifier labels if an icon is not found\n" },
		{ "EditCondition", "AllowModifierKeys" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "If not empty, text to use for cmd modifier labels if an icon is not found" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputPresets_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Input mapping presets for this project\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "TitleProperty", "PresetTag" },
		{ "ToolTip", "Input mapping presets for this project" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowMultipleBindingsPerKey_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// If false, new bindings will remove key from all other mappings\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "If false, new bindings will remove key from all other mappings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingGroupLinks_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// (Advanced) If AllowMultipleBindingsPerKey is true, this determines mapping groups which should remain \"linked\" with unique bindings\n" },
		{ "EditCondition", "AllowMultipleBindingsPerKey" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "TitleProperty", "MappingGroups" },
		{ "ToolTip", "(Advanced) If AllowMultipleBindingsPerKey is true, this determines mapping groups which should remain \"linked\" with unique bindings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreservedActions_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Actions in this list will always be preserved when modifying bindings\n// Eg. You have UI-related actions that should remain bound even when the same inputs are bound to in-game actions\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Actions in this list will always be preserved when modifying bindings\nEg. You have UI-related actions that should remain bound even when the same inputs are bound to in-game actions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreservedAxes_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Axes in this list will always be preserved when modifying bindings\n// See BlacklistedActions\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Axes in this list will always be preserved when modifying bindings\nSee BlacklistedActions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyIconSets_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Sets of key icons for this project\n// Example sets might include \"Xbox Small\" or \"Playstation Transparent\", where the platform is determined on a global application-wide level and the variant is determined by location in game\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Sets of key icons for this project\nExample sets might include \"Xbox Small\" or \"Playstation Transparent\", where the platform is determined on a global application-wide level and the variant is determined by location in game" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyFriendlyNames_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Friendly key names to use if an icon is not available\n// If a friendly name is not specified for a key, the default FKey GetDisplayName will be used\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "TitleProperty", "Key" },
		{ "ToolTip", "Friendly key names to use if an icon is not available\nIf a friendly name is not specified for a key, the default FKey GetDisplayName will be used" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyGroups_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Groups of keys to separate from other keys\n// Useful if you want a separate column for gamepad controls in your input UI or other similar cases\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "TitleProperty", "KeyGroupTag" },
		{ "ToolTip", "Groups of keys to separate from other keys\nUseful if you want a separate column for gamepad controls in your input UI or other similar cases" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowedKeys_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Key whitelist, use to allow specific keys for input mapping\n// Leave empty to allow all keys\n// Keys here will have no effect if also in DisallowedKeys\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Key whitelist, use to allow specific keys for input mapping\nLeave empty to allow all keys\nKeys here will have no effect if also in DisallowedKeys" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisallowedKeys_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Key blacklist, use to disallow specific keys for input mapping\n// Will take precedence over AllowedKeys\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Key blacklist, use to disallow specific keys for input mapping\nWill take precedence over AllowedKeys" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BindingEscapeKeys_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// If any of these keys are pressed while listening for input binding, it will instead cancel and keep the original binding\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "If any of these keys are pressed while listening for input binding, it will instead cancel and keep the original binding" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseMoveCaptureDistance_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Distance in pixels the mouse must travel before it will trigger a capture for a mouse axis while listening for input bindings\n// Lower values are more sensitive, higher values mean you have to move the mouse further\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Distance in pixels the mouse must travel before it will trigger a capture for a mouse axis while listening for input bindings\nLower values are more sensitive, higher values mean you have to move the mouse further" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisAssociations_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Determines association between axes and buttons\n// This is used during axis rebinding to determine which axis should be used when a key press is detected\n// e.g. If the system detects the player has pressed \"Gamepad Left Stick Down\" key when binding \"Move Backward\",\n// these associations could specify that the \"Gamepad Left Stick Y\" axis should be bound with a scale of -1\n// otherwise the mapping will only have 2 key states (pressed and not pressed) rather than the full range of the axis\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "TitleProperty", "AxisKey" },
		{ "ToolTip", "Determines association between axes and buttons\nThis is used during axis rebinding to determine which axis should be used when a key press is detected\ne.g. If the system detects the player has pressed \"Gamepad Left Stick Down\" key when binding \"Move Backward\",\nthese associations could specify that the \"Gamepad Left Stick Y\" axis should be bound with a scale of -1\notherwise the mapping will only have 2 key states (pressed and not pressed) rather than the full range of the axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlacklistedActions_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlacklistedAxes_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bAutoInitializePlayerInputOverrides_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoInitializePlayerInputOverrides;
	static void NewProp_AllowModifierKeys_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowModifierKeys;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ShiftModifierOverrideText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_CtrlModifierOverrideText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_AltModifierOverrideText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_CmdModifierOverrideText;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputPresets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputPresets;
	static void NewProp_AllowMultipleBindingsPerKey_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowMultipleBindingsPerKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MappingGroupLinks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MappingGroupLinks;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PreservedActions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PreservedActions;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PreservedAxes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PreservedAxes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyIconSets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyIconSets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyFriendlyNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyFriendlyNames;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyGroups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyGroups;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AllowedKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedKeys;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DisallowedKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DisallowedKeys;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BindingEscapeKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BindingEscapeKeys;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseMoveCaptureDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AxisAssociations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AxisAssociations;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BlacklistedActions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlacklistedActions;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BlacklistedAxes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlacklistedAxes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoSettingsInputConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_bAutoInitializePlayerInputOverrides_SetBit(void* Obj)
{
	((UAutoSettingsInputConfig*)Obj)->bAutoInitializePlayerInputOverrides = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_bAutoInitializePlayerInputOverrides = { "bAutoInitializePlayerInputOverrides", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSettingsInputConfig), &Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_bAutoInitializePlayerInputOverrides_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoInitializePlayerInputOverrides_MetaData), NewProp_bAutoInitializePlayerInputOverrides_MetaData) };
void Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AllowModifierKeys_SetBit(void* Obj)
{
	((UAutoSettingsInputConfig*)Obj)->AllowModifierKeys = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AllowModifierKeys = { "AllowModifierKeys", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSettingsInputConfig), &Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AllowModifierKeys_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowModifierKeys_MetaData), NewProp_AllowModifierKeys_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_ShiftModifierOverrideText = { "ShiftModifierOverrideText", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSettingsInputConfig, ShiftModifierOverrideText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShiftModifierOverrideText_MetaData), NewProp_ShiftModifierOverrideText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_CtrlModifierOverrideText = { "CtrlModifierOverrideText", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSettingsInputConfig, CtrlModifierOverrideText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CtrlModifierOverrideText_MetaData), NewProp_CtrlModifierOverrideText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AltModifierOverrideText = { "AltModifierOverrideText", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSettingsInputConfig, AltModifierOverrideText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AltModifierOverrideText_MetaData), NewProp_AltModifierOverrideText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_CmdModifierOverrideText = { "CmdModifierOverrideText", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSettingsInputConfig, CmdModifierOverrideText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CmdModifierOverrideText_MetaData), NewProp_CmdModifierOverrideText_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_InputPresets_Inner = { "InputPresets", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputMappingPreset, METADATA_PARAMS(0, nullptr) }; // 548858416
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_InputPresets = { "InputPresets", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSettingsInputConfig, InputPresets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputPresets_MetaData), NewProp_InputPresets_MetaData) }; // 548858416
void Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AllowMultipleBindingsPerKey_SetBit(void* Obj)
{
	((UAutoSettingsInputConfig*)Obj)->AllowMultipleBindingsPerKey = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AllowMultipleBindingsPerKey = { "AllowMultipleBindingsPerKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSettingsInputConfig), &Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AllowMultipleBindingsPerKey_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowMultipleBindingsPerKey_MetaData), NewProp_AllowMultipleBindingsPerKey_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_MappingGroupLinks_Inner = { "MappingGroupLinks", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMappingGroupLink, METADATA_PARAMS(0, nullptr) }; // 2343272562
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_MappingGroupLinks = { "MappingGroupLinks", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSettingsInputConfig, MappingGroupLinks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingGroupLinks_MetaData), NewProp_MappingGroupLinks_MetaData) }; // 2343272562
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_PreservedActions_Inner = { "PreservedActions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_PreservedActions = { "PreservedActions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSettingsInputConfig, PreservedActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreservedActions_MetaData), NewProp_PreservedActions_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_PreservedAxes_Inner = { "PreservedAxes", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_PreservedAxes = { "PreservedAxes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSettingsInputConfig, PreservedAxes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreservedAxes_MetaData), NewProp_PreservedAxes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_KeyIconSets_Inner = { "KeyIconSets", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKeyIconSet, METADATA_PARAMS(0, nullptr) }; // 3766203236
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_KeyIconSets = { "KeyIconSets", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSettingsInputConfig, KeyIconSets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyIconSets_MetaData), NewProp_KeyIconSets_MetaData) }; // 3766203236
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_KeyFriendlyNames_Inner = { "KeyFriendlyNames", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKeyFriendlyName, METADATA_PARAMS(0, nullptr) }; // 1772195307
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_KeyFriendlyNames = { "KeyFriendlyNames", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSettingsInputConfig, KeyFriendlyNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyFriendlyNames_MetaData), NewProp_KeyFriendlyNames_MetaData) }; // 1772195307
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_KeyGroups_Inner = { "KeyGroups", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKeyGroup, METADATA_PARAMS(0, nullptr) }; // 311339230
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_KeyGroups = { "KeyGroups", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSettingsInputConfig, KeyGroups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyGroups_MetaData), NewProp_KeyGroups_MetaData) }; // 311339230
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AllowedKeys_Inner = { "AllowedKeys", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AllowedKeys = { "AllowedKeys", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSettingsInputConfig, AllowedKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowedKeys_MetaData), NewProp_AllowedKeys_MetaData) }; // 658672854
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_DisallowedKeys_Inner = { "DisallowedKeys", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_DisallowedKeys = { "DisallowedKeys", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSettingsInputConfig, DisallowedKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisallowedKeys_MetaData), NewProp_DisallowedKeys_MetaData) }; // 658672854
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_BindingEscapeKeys_Inner = { "BindingEscapeKeys", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_BindingEscapeKeys = { "BindingEscapeKeys", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSettingsInputConfig, BindingEscapeKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BindingEscapeKeys_MetaData), NewProp_BindingEscapeKeys_MetaData) }; // 658672854
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_MouseMoveCaptureDistance = { "MouseMoveCaptureDistance", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSettingsInputConfig, MouseMoveCaptureDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseMoveCaptureDistance_MetaData), NewProp_MouseMoveCaptureDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AxisAssociations_Inner = { "AxisAssociations", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAxisAssociation, METADATA_PARAMS(0, nullptr) }; // 3383645090
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AxisAssociations = { "AxisAssociations", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSettingsInputConfig, AxisAssociations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisAssociations_MetaData), NewProp_AxisAssociations_MetaData) }; // 3383645090
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_BlacklistedActions_Inner = { "BlacklistedActions", nullptr, (EPropertyFlags)0x0000000020004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_BlacklistedActions = { "BlacklistedActions", nullptr, (EPropertyFlags)0x0020080020004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSettingsInputConfig, BlacklistedActions_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlacklistedActions_MetaData), NewProp_BlacklistedActions_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_BlacklistedAxes_Inner = { "BlacklistedAxes", nullptr, (EPropertyFlags)0x0000000020004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_BlacklistedAxes = { "BlacklistedAxes", nullptr, (EPropertyFlags)0x0020080020004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSettingsInputConfig, BlacklistedAxes_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlacklistedAxes_MetaData), NewProp_BlacklistedAxes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutoSettingsInputConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_bAutoInitializePlayerInputOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AllowModifierKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_ShiftModifierOverrideText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_CtrlModifierOverrideText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AltModifierOverrideText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_CmdModifierOverrideText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_InputPresets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_InputPresets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AllowMultipleBindingsPerKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_MappingGroupLinks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_MappingGroupLinks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_PreservedActions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_PreservedActions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_PreservedAxes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_PreservedAxes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_KeyIconSets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_KeyIconSets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_KeyFriendlyNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_KeyFriendlyNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_KeyGroups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_KeyGroups,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AllowedKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AllowedKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_DisallowedKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_DisallowedKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_BindingEscapeKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_BindingEscapeKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_MouseMoveCaptureDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AxisAssociations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AxisAssociations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_BlacklistedActions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_BlacklistedActions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_BlacklistedAxes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_BlacklistedAxes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAutoSettingsInputConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAutoSettingsInputConfigInterface_NoRegister, (int32)VTABLE_OFFSET(UAutoSettingsInputConfig, IAutoSettingsInputConfigInterface), false },  // 2467713211
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::ClassParams = {
	&UAutoSettingsInputConfig::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAutoSettingsInputConfig_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutoSettingsInputConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutoSettingsInputConfig()
{
	if (!Z_Registration_Info_UClass_UAutoSettingsInputConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutoSettingsInputConfig.OuterSingleton, Z_Construct_UClass_UAutoSettingsInputConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutoSettingsInputConfig.OuterSingleton;
}
template<> AUTOSETTINGSINPUT_API UClass* StaticClass<UAutoSettingsInputConfig>()
{
	return UAutoSettingsInputConfig::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoSettingsInputConfig);
UAutoSettingsInputConfig::~UAutoSettingsInputConfig() {}
// End Class UAutoSettingsInputConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_Misc_AutoSettingsInputConfig_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FKeyIconPair::StaticStruct, Z_Construct_UScriptStruct_FKeyIconPair_Statics::NewStructOps, TEXT("KeyIconPair"), &Z_Registration_Info_UScriptStruct_KeyIconPair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKeyIconPair), 3481620545U) },
		{ FKeyIconSet::StaticStruct, Z_Construct_UScriptStruct_FKeyIconSet_Statics::NewStructOps, TEXT("KeyIconSet"), &Z_Registration_Info_UScriptStruct_KeyIconSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKeyIconSet), 3766203236U) },
		{ FKeyGroup::StaticStruct, Z_Construct_UScriptStruct_FKeyGroup_Statics::NewStructOps, TEXT("KeyGroup"), &Z_Registration_Info_UScriptStruct_KeyGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKeyGroup), 311339230U) },
		{ FKeyScale::StaticStruct, Z_Construct_UScriptStruct_FKeyScale_Statics::NewStructOps, TEXT("KeyScale"), &Z_Registration_Info_UScriptStruct_KeyScale, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKeyScale), 2143159583U) },
		{ FMappingGroupLink::StaticStruct, Z_Construct_UScriptStruct_FMappingGroupLink_Statics::NewStructOps, TEXT("MappingGroupLink"), &Z_Registration_Info_UScriptStruct_MappingGroupLink, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMappingGroupLink), 2343272562U) },
		{ FAxisAssociation::StaticStruct, Z_Construct_UScriptStruct_FAxisAssociation_Statics::NewStructOps, TEXT("AxisAssociation"), &Z_Registration_Info_UScriptStruct_AxisAssociation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAxisAssociation), 3383645090U) },
		{ FKeyFriendlyName::StaticStruct, Z_Construct_UScriptStruct_FKeyFriendlyName_Statics::NewStructOps, TEXT("KeyFriendlyName"), &Z_Registration_Info_UScriptStruct_KeyFriendlyName, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKeyFriendlyName), 1772195307U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAutoSettingsInputConfig, UAutoSettingsInputConfig::StaticClass, TEXT("UAutoSettingsInputConfig"), &Z_Registration_Info_UClass_UAutoSettingsInputConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutoSettingsInputConfig), 3714993467U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_Misc_AutoSettingsInputConfig_h_263129980(TEXT("/Script/AutoSettingsInput"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_Misc_AutoSettingsInputConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_Misc_AutoSettingsInputConfig_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_Misc_AutoSettingsInputConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_Misc_AutoSettingsInputConfig_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
