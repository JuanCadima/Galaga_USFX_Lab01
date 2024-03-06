// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_Lab01/Galaga_USFX_Lab01GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGalaga_USFX_Lab01GameMode() {}
// Cross Module References
	GALAGA_USFX_LAB01_API UClass* Z_Construct_UClass_AGalaga_USFX_Lab01GameMode_NoRegister();
	GALAGA_USFX_LAB01_API UClass* Z_Construct_UClass_AGalaga_USFX_Lab01GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_Lab01();
// End Cross Module References
	DEFINE_FUNCTION(AGalaga_USFX_Lab01GameMode::execGetHighScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetHighScore();
		P_NATIVE_END;
	}
	void AGalaga_USFX_Lab01GameMode::StaticRegisterNativesAGalaga_USFX_Lab01GameMode()
	{
		UClass* Class = AGalaga_USFX_Lab01GameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHighScore", &AGalaga_USFX_Lab01GameMode::execGetHighScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGalaga_USFX_Lab01GameMode_GetHighScore_Statics
	{
		struct Galaga_USFX_Lab01GameMode_eventGetHighScore_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGalaga_USFX_Lab01GameMode_GetHighScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Galaga_USFX_Lab01GameMode_eventGetHighScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGalaga_USFX_Lab01GameMode_GetHighScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGalaga_USFX_Lab01GameMode_GetHighScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGalaga_USFX_Lab01GameMode_GetHighScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Galaga_USFX_Lab01GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGalaga_USFX_Lab01GameMode_GetHighScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGalaga_USFX_Lab01GameMode, nullptr, "GetHighScore", nullptr, nullptr, sizeof(Galaga_USFX_Lab01GameMode_eventGetHighScore_Parms), Z_Construct_UFunction_AGalaga_USFX_Lab01GameMode_GetHighScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGalaga_USFX_Lab01GameMode_GetHighScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGalaga_USFX_Lab01GameMode_GetHighScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGalaga_USFX_Lab01GameMode_GetHighScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGalaga_USFX_Lab01GameMode_GetHighScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGalaga_USFX_Lab01GameMode_GetHighScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGalaga_USFX_Lab01GameMode_NoRegister()
	{
		return AGalaga_USFX_Lab01GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGalaga_USFX_Lab01GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGalaga_USFX_Lab01GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_Lab01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGalaga_USFX_Lab01GameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGalaga_USFX_Lab01GameMode_GetHighScore, "GetHighScore" }, // 2001119502
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGalaga_USFX_Lab01GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Galaga_USFX_Lab01GameMode.h" },
		{ "ModuleRelativePath", "Galaga_USFX_Lab01GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGalaga_USFX_Lab01GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGalaga_USFX_Lab01GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGalaga_USFX_Lab01GameMode_Statics::ClassParams = {
		&AGalaga_USFX_Lab01GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGalaga_USFX_Lab01GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGalaga_USFX_Lab01GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGalaga_USFX_Lab01GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGalaga_USFX_Lab01GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGalaga_USFX_Lab01GameMode, 3085474331);
	template<> GALAGA_USFX_LAB01_API UClass* StaticClass<AGalaga_USFX_Lab01GameMode>()
	{
		return AGalaga_USFX_Lab01GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGalaga_USFX_Lab01GameMode(Z_Construct_UClass_AGalaga_USFX_Lab01GameMode, &AGalaga_USFX_Lab01GameMode::StaticClass, TEXT("/Script/Galaga_USFX_Lab01"), TEXT("AGalaga_USFX_Lab01GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGalaga_USFX_Lab01GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
