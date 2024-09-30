#pragma once
#ifndef ELECTRICITY_H
#define ELECTRICITY_H

#include "Resource.h"

class Electricity:public Resource
{
public:
	Electricity(double amount);
	void useResource(double amount) override;
	void displayResource() override;

};


#endif // ELECTRICITY_H
