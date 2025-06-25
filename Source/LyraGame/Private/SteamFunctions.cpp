// Fill out your copyright notice in the Description page of Project Settings.


#include "SteamFunctions.h"
#include "OnlineSubsystem.h"
#include "Interfaces\OnlineIdentityInterface.h"


void USteamFunctions::SteamLogin()
{
	IOnlineSubsystem* OSS = IOnlineSubsystem::Get();
	const IOnlineIdentityPtr IdentityInterface = OSS->GetIdentityInterface();
	IdentityInterface->AutoLogin(0);
}

bool USteamFunctions::IsLoggedIn()
{
	IOnlineSubsystem* OSS = IOnlineSubsystem::Get();
	const IOnlineIdentityPtr IdentityInterface = OSS->GetIdentityInterface();
	return IdentityInterface->GetLoginStatus(0) == ELoginStatus::LoggedIn ? true : false;
}

const FString USteamFunctions::GetUsername()
{
	IOnlineSubsystem* OSS = IOnlineSubsystem::Get();
	const IOnlineIdentityPtr IdentityInterface = OSS->GetIdentityInterface();
	return IdentityInterface->GetPlayerNickname(0);
}


