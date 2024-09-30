#pragma once
#ifndef RESOURCE_H
#define RESOURCE_H

#include<iostream>
#include<string>

using namespace std;

class Resource
{
protected:
	string resourceName;
	double usage;

public:
	Resource(string name) : resourceName(name), usage(0) {};

	virtual void updateUsage(double amount);
	virtual double getUsage();
	virtual void displayResource();

};

#endif // !RESOURCE_H
