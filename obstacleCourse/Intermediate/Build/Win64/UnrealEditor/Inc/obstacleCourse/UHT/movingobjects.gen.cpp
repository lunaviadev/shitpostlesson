// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "obstacleCourse/movingobjects.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodemovingobjects() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
OBSTACLECOURSE_API UClass* Z_Construct_UClass_Umovingobjects();
OBSTACLECOURSE_API UClass* Z_Construct_UClass_Umovingobjects_NoRegister();
UPackage* Z_Construct_UPackage__Script_obstacleCourse();
// End Cross Module References

// Begin Class Umovingobjects
void Umovingobjects::StaticRegisterNativesUmovingobjects()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Umovingobjects);
UClass* Z_Construct_UClass_Umovingobjects_NoRegister()
{
	return Umovingobjects::StaticClass();
}
struct Z_Construct_UClass_Umovingobjects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "movingobjects.h" },
		{ "ModuleRelativePath", "movingobjects.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Umovingobjects>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_Umovingobjects_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_obstacleCourse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Umovingobjects_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Umovingobjects_Statics::ClassParams = {
	&Umovingobjects::StaticClass,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Umovingobjects_Statics::Class_MetaDataParams), Z_Construct_UClass_Umovingobjects_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Umovingobjects()
{
	if (!Z_Registration_Info_UClass_Umovingobjects.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Umovingobjects.OuterSingleton, Z_Construct_UClass_Umovingobjects_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Umovingobjects.OuterSingleton;
}
template<> OBSTACLECOURSE_API UClass* StaticClass<Umovingobjects>()
{
	return Umovingobjects::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(Umovingobjects);
Umovingobjects::~Umovingobjects() {}
// End Class Umovingobjects

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_2326296_Documents_GitHub_shitpostlesson_obstacleCourse_Source_obstacleCourse_movingobjects_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Umovingobjects, Umovingobjects::StaticClass, TEXT("Umovingobjects"), &Z_Registration_Info_UClass_Umovingobjects, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Umovingobjects), 865553456U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2326296_Documents_GitHub_shitpostlesson_obstacleCourse_Source_obstacleCourse_movingobjects_h_1196984616(TEXT("/Script/obstacleCourse"),
	Z_CompiledInDeferFile_FID_Users_2326296_Documents_GitHub_shitpostlesson_obstacleCourse_Source_obstacleCourse_movingobjects_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2326296_Documents_GitHub_shitpostlesson_obstacleCourse_Source_obstacleCourse_movingobjects_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
