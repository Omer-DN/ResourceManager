#include "Electricity.h"


Electricity::Electricity(double amount)
	:Resource("Electricity",amount){}

void Electricity::useResource(double amount) {
    lock_guard<mutex> lock(mtx); 
    cout << "Electricity lock mtx\n";
    if (amount <= getUsage()) {
        double newUsage = getUsage() - amount;
        updateUsage(newUsage);
        cout << "Used " << amount << " units of electricity.\n";
    }
    else {
        cout << "Not enough electricity available!\n";
    }
    cout << "Electricity open lock mtx\n";

}

void Electricity::replenishResource(double amount) {
    lock_guard<mutex> lock(mtx); 
    cout << "Electricity lock mtx\n";
    double newAmount = getUsage() + amount;
    updateUsage(newAmount);
    cout << "Replenished " << amount << " units of electricity.\n";
    cout << "Electricity open lock mtx\n";
}

void Electricity::displayResource(){
    lock_guard<mutex> lock(mtx);
    cout << "Electricity lock mtx\n";
    cout << "Electricity usage: " << getUsage() << " units.\n";
    cout << "Electricity open lock mtx\n";

}