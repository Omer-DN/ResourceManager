#include"Resource.h"

Resource::Resource(const string& name, double amount)
	:resourceName(name), resourceAmount(amount){}

Resource::~Resource(){}

void Resource::replenishResource(double amount) {
	resourceAmount += amount;
}

void Resource::updateUsage(double amount) {
	resourceAmount = amount;
}

string Resource::getResourceName() const {
	return resourceName;
}

double Resource::getResourceAmount() const {
	return resourceAmount;
}


double Resource::getUsage() {
	return resourceAmount;
}

void Resource::displayResource() {
	cout << "Resource: " << resourceName << " his usage is: " << resourceAmount << "\n";
}