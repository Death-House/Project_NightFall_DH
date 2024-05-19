// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/Misc/WindowModeValueMask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWindowModeValueMask() {}

// Begin Cross Module References
AUTOSETTINGS_API UClass* Z_Construct_UClass_USettingValueMask();
AUTOSETTINGS_API UClass* Z_Construct_UClass_UWindowModeValueMask();
AUTOSETTINGS_API UClass* Z_Construct_UClass_UWindowModeValueMask_NoRegister();
UPackage* Z_Construct_UPackage__Script_AutoSettings();
// End Cross Module References

// Begin Class UWindowModeValueMask
void UWindowModeValueMask::StaticRegisterNativesUWindowModeValueMask()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWindowModeValueMask);
UClass* Z_Construct_UClass_UWindowModeValueMask_NoRegister()
{
	return UWindowModeValueMask::StaticClass();
}
struct Z_Construct_UClass_UWindowModeValueMask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * SettingValueMask for splitting and recombining the r.SetRes CVar into Window Mode\n */" },
		{ "IncludePath", "Misc/WindowModeValueMask.h" },
		{ "ModuleRelativePath", "Public/Misc/WindowModeValueMask.h" },
		{ "ToolTip", "SettingValueMask for splitting and recombining the r.SetRes CVar into Window Mode" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWindowModeValueMask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWindowModeValueMask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USettingValueMask,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWindowModeValueMask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWindowModeValueMask_Statics::ClassParams = {
	&UWindowModeValueMask::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWindowModeValueMask_Statics::Class_MetaDataParams), Z_Construct_UClass_UWindowModeValueMask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWindowModeValueMask()
{
	if (!Z_Registration_Info_UClass_UWindowModeValueMask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWindowModeValueMask.OuterSingleton, Z_Construct_UClass_UWindowModeValueMask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWindowModeValueMask.OuterSingleton;
}
template<> AUTOSETTINGS_API UClass* StaticClass<UWindowModeValueMask>()
{
	return UWindowModeValueMask::StaticClass();
}
UWindowModeValueMask::UWindowModeValueMask(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWindowModeValueMask);
UWindowModeValueMask::~UWindowModeValueMask() {}
// End Class UWindowModeValueMask

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_WindowModeValueMask_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWindowModeValueMask, UWindowModeValueMask::StaticClass, TEXT("UWindowModeValueMask"), &Z_Registration_Info_UClass_UWindowModeValueMask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWindowModeValueMask), 3983055500U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_WindowModeValueMask_h_4120651493(TEXT("/Script/AutoSettings"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_WindowModeValueMask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_WindowModeValueMask_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
