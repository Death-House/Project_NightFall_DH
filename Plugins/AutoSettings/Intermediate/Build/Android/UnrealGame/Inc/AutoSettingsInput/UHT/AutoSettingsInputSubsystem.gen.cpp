// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettingsInput/Public/AutoSettingsInputSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoSettingsInputSubsystem() {}

// Begin Cross Module References
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UAutoSettingsInputSubsystem();
AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UAutoSettingsInputSubsystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
UPackage* Z_Construct_UPackage__Script_AutoSettingsInput();
// End Cross Module References

// Begin Class UAutoSettingsInputSubsystem
void UAutoSettingsInputSubsystem::StaticRegisterNativesUAutoSettingsInputSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutoSettingsInputSubsystem);
UClass* Z_Construct_UClass_UAutoSettingsInputSubsystem_NoRegister()
{
	return UAutoSettingsInputSubsystem::StaticClass();
}
struct Z_Construct_UClass_UAutoSettingsInputSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AutoSettingsInputSubsystem.h" },
		{ "ModuleRelativePath", "Public/AutoSettingsInputSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoSettingsInputSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAutoSettingsInputSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsInputSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutoSettingsInputSubsystem_Statics::ClassParams = {
	&UAutoSettingsInputSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsInputSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutoSettingsInputSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutoSettingsInputSubsystem()
{
	if (!Z_Registration_Info_UClass_UAutoSettingsInputSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutoSettingsInputSubsystem.OuterSingleton, Z_Construct_UClass_UAutoSettingsInputSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutoSettingsInputSubsystem.OuterSingleton;
}
template<> AUTOSETTINGSINPUT_API UClass* StaticClass<UAutoSettingsInputSubsystem>()
{
	return UAutoSettingsInputSubsystem::StaticClass();
}
UAutoSettingsInputSubsystem::UAutoSettingsInputSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoSettingsInputSubsystem);
UAutoSettingsInputSubsystem::~UAutoSettingsInputSubsystem() {}
// End Class UAutoSettingsInputSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_AutoSettingsInputSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAutoSettingsInputSubsystem, UAutoSettingsInputSubsystem::StaticClass, TEXT("UAutoSettingsInputSubsystem"), &Z_Registration_Info_UClass_UAutoSettingsInputSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutoSettingsInputSubsystem), 3003716808U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_AutoSettingsInputSubsystem_h_3062633962(TEXT("/Script/AutoSettingsInput"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_AutoSettingsInputSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSettings_Source_AutoSettingsInput_Public_AutoSettingsInputSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
