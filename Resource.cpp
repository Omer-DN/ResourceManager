#include"Resource.h"

void Resource::updateUsage(double newUsage) {
	this->usage += newUsage;
	cout << "now usage of " << resourceName << " is: " << newUsage << "\n";
}

double Resource::getUsage() {
	return usage;
}

void Resource::displayResource() {
	cout << "Resource: " << resourceName << " his usage is: " << usage << "\n";
}