#pragma once
#ifndef INTERNET_H
#define INTERNE_H

#include"Resource.h"

class Internet :public Resource
{
public:
	Internet(double amount);
	void useResource(double amount) override;
	void displayResource() override;

   
};

#endif // !INTERNET_H

