// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_Lab01/Power_Up.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePower_Up() {}
// Cross Module References
	GALAGA_USFX_LAB01_API UClass* Z_Construct_UClass_APower_Up_NoRegister();
	GALAGA_USFX_LAB01_API UClass* Z_Construct_UClass_APower_Up();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_Lab01();
// End Cross Module References
	void APower_Up::StaticRegisterNativesAPower_Up()
	{
	}
	UClass* Z_Construct_UClass_APower_Up_NoRegister()
	{
		return APower_Up::StaticClass();
	}
	struct Z_Construct_UClass_APower_Up_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APower_Up_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_Lab01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APower_Up_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Power_Up.h" },
		{ "ModuleRelativePath", "Power_Up.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APower_Up_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APower_Up>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APower_Up_Statics::ClassParams = {
		&APower_Up::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APower_Up_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APower_Up_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APower_Up()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APower_Up_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APower_Up, 2811780692);
	template<> GALAGA_USFX_LAB01_API UClass* StaticClass<APower_Up>()
	{
		return APower_Up::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APower_Up(Z_Construct_UClass_APower_Up, &APower_Up::StaticClass, TEXT("/Script/Galaga_USFX_Lab01"), TEXT("APower_Up"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APower_Up);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
