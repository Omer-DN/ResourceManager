#include "Water.h"

Water::Water(double amount) :
    Resource("Water", amount) {}

void Water::useResource(double amount) {
    lock_guard<mutex> lock(mtx); 
    if (amount <= getUsage()) {
        double newUsage = getUsage() - amount;
        updateUsage(newUsage);
        cout << "Used " << amount << " units of water.\n";
    }
    else {
        cout << "Not enough water available!\n";
    }
}

void Water::replenishResource(double amount) {
    lock_guard<mutex> lock(mtx); 
    double newAmount = getUsage() + amount;
    updateUsage(newAmount);
    cout << "Replenished " << amount << " units of water.\n";
}

void Water::displayResource() {
    lock_guard<mutex> lock(mtx);
    cout << "Water usage: " << getUsage() << " units.\n";
}
