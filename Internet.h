#pragma once
#ifndef INTERNET_H
#define INTERNE_H

#include"Resource.h"
#include <mutex>


class Internet :public Resource
{
public:
	Internet(double amount);

	void useResource(double amount) override;
	void displayResource() override;
	void replenishResource(double amount);

private:
	mutex mtx;
};

#endif // !INTERNET_H

