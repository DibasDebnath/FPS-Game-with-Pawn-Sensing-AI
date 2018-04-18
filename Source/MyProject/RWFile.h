// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Coreminimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Validate.h"
#include "RWFile.generated.h"

UCLASS()
class MYPROJECT_API URWFile : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
		UFUNCTION(BlueprintCallable, Category = "Cplus")
		static void create(FString User,FString Pass );

		UFUNCTION(BlueprintPure, Category = "Custom", meta = (Keywords = "LoadTxt"))
			static bool LoadTxt(FString FileNameA, FString SaveTextA);

		UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "SaveTxt"))
			static bool SaveTxt(FString SaveTextB, FString FileNameB);
	
	
	
};
