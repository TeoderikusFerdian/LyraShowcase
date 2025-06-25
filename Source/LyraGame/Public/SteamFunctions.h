// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SteamFunctions.generated.h"

DECLARE_DYNAMIC_DELEGATE(FIsSteamLoginSuccess);

/**
 * 
 */
UCLASS()
class LYRAGAME_API USteamFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	static void SteamLogin();

	UFUNCTION(BlueprintCallable)
	static bool IsLoggedIn();

	UFUNCTION(BlueprintCallable)
	static const FString GetUsername();
};
