#pragma once
#ifndef RESOURCE_H
#define RESOURCE_H

#include <iostream>
#include <string>
#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>
using namespace std;

class Resource
{
protected:
	string resourceName;
	double resourceAmount;
	mutex resourceMutex;

public:
	Resource(const string& name, double amount);
	virtual ~Resource();
	string getResourceName() const;
	double getResourceAmount()const;

	virtual void useResource(double amount) = 0;
	virtual void replenishResource(double amount);

	virtual void updateUsage(double amount);
	virtual double getUsage();
	virtual void displayResource();

};

#endif // !RESOURCE_H
