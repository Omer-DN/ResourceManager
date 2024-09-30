#include"ElectricityResource.h"
#include"WaterResource.h"
#include"InternetResource.h"

int main() {
	ElectricityResource electricity;
	InternetResource internet;
	WaterResource water;

	electricity.updateUsage(50.0);
	internet.updateUsage(100.0);
	water.updateUsage(30.0);

	electricity.displayResource();
	water.displayResource();
	internet.displayResource();

	return 0;
}