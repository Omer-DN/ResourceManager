#include "Electricity.h"


Electricity ::Electricity(double amount)
	:Resource("Electricity",amount){}

void Electricity::useResource(double amount) {
    lock_guard<mutex> lock(mtx); 
    if (amount <= getUsage()) {
        double newUsage = getUsage() - amount;
        updateUsage(newUsage);
        cout << "Used " << amount << " units of electricity.\n";
    }
    else {
        cout << "Not enough electricity available!\n";
    }
}

void Electricity::replenishResource(double amount) {
    lock_guard<mutex> lock(mtx); 
    double newAmount = getUsage() + amount;
    updateUsage(newAmount);
    cout << "Replenished " << amount << " units of electricity.\n";
}

void Electricity::displayResource(){
    lock_guard<mutex> lock(mtx);
    cout << "Electricity usage: " << getUsage() << " units.\n";
}