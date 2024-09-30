#pragma once
#ifndef ELECTRICITY_H
#define ELECTRICITY_H

#include "Resource.h"
#include <mutex>


class Electricity:public Resource
{
public:
	Electricity(double amount);
	void useResource(double amount) override;
	void displayResource() override;

private:
	mutex mtx;
};


#endif // ELECTRICITY_H
