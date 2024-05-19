// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/Misc/ResolutionOptionFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResolutionOptionFactory() {}

// Begin Cross Module References
AUTOSETTINGS_API UClass* Z_Construct_UClass_UResolutionOptionFactory();
AUTOSETTINGS_API UClass* Z_Construct_UClass_UResolutionOptionFactory_NoRegister();
AUTOSETTINGS_API UClass* Z_Construct_UClass_USettingOptionFactory();
UPackage* Z_Construct_UPackage__Script_AutoSettings();
// End Cross Module References

// Begin Class UResolutionOptionFactory
void UResolutionOptionFactory::StaticRegisterNativesUResolutionOptionFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UResolutionOptionFactory);
UClass* Z_Construct_UClass_UResolutionOptionFactory_NoRegister()
{
	return UResolutionOptionFactory::StaticClass();
}
struct Z_Construct_UClass_UResolutionOptionFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Factory class for constructing a set of options for supported fullscreen resolutions\n */" },
		{ "IncludePath", "Misc/ResolutionOptionFactory.h" },
		{ "ModuleRelativePath", "Public/Misc/ResolutionOptionFactory.h" },
		{ "ToolTip", "Factory class for constructing a set of options for supported fullscreen resolutions" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UResolutionOptionFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UResolutionOptionFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USettingOptionFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UResolutionOptionFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UResolutionOptionFactory_Statics::ClassParams = {
	&UResolutionOptionFactory::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UResolutionOptionFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UResolutionOptionFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UResolutionOptionFactory()
{
	if (!Z_Registration_Info_UClass_UResolutionOptionFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UResolutionOptionFactory.OuterSingleton, Z_Construct_UClass_UResolutionOptionFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UResolutionOptionFactory.OuterSingleton;
}
template<> AUTOSETTINGS_API UClass* StaticClass<UResolutionOptionFactory>()
{
	return UResolutionOptionFactory::StaticClass();
}
UResolutionOptionFactory::UResolutionOptionFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UResolutionOptionFactory);
UResolutionOptionFactory::~UResolutionOptionFactory() {}
// End Class UResolutionOptionFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_ResolutionOptionFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UResolutionOptionFactory, UResolutionOptionFactory::StaticClass, TEXT("UResolutionOptionFactory"), &Z_Registration_Info_UClass_UResolutionOptionFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UResolutionOptionFactory), 3932753174U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_ResolutionOptionFactory_h_245106014(TEXT("/Script/AutoSettings"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_ResolutionOptionFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_ResolutionOptionFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
