// Fill out your copyright notice in the Description page of Project Settings.

#include "RWFile.h"




void URWFile::create(FString User, FString Pass) {

	FString SaveDirectory = FString("Documents/Save");
	FString FileName = User;
	FString TextToSave = Pass;

		
}
bool URWFile::LoadTxt(FString FileNameA, FString epass)
{
	FString opass;
	if (FPaths::FileExists(*(FPaths::GameDir() + FileNameA))) {
		FFileHelper::LoadFileToString(opass, *(FPaths::GameDir() + FileNameA));
		if (opass == epass) {
			return true;
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}
	
	
	
}

bool URWFile::SaveTxt(FString SaveTextB, FString FileNameB)
{
	if (FPaths::FileExists(*(FPaths::GameDir() + FileNameB))) {
		return false;
	}
	else {
		
		Validate val(SaveTextB);


		if (val.ch()) {
			return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::GameDir() + FileNameB));
		}
		else
		{
			return false;
		}
		
	}
}


