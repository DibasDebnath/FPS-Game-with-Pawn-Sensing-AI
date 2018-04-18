// Fill out your copyright notice in the Description page of Project Settings.

#include "Validate.h"
#include "string"

Validate::Validate(FString a)
{
	Test = a;
}

Validate::~Validate()
{
}

bool Validate::ch()
{
	std::string strpass = std::string(TCHAR_TO_UTF8(*Test));
	if (strpass.empty()) {
		return false;
	}
	else {
		if (strpass.size() > 5)
			return true;
		else
			return false;
	}
	
}
