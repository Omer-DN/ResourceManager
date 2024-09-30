#include "Water.h"

Water::Water(double amount) :
    Resource("Water", amount) {}

void Water::useResource(double amount) {
    lock_guard<mutex> lock(mtx); 
    cout << "Water lock mtx\n";
    if (amount <= getUsage()) {
        double newUsage = getUsage() - amount;
        updateUsage(newUsage);
        cout << "Used " << amount << " units of water.\n";
    }
    else {
        cout << "Not enough water available!\n";
    }
    cout << "Water open lock mtx\n";

}

void Water::replenishResource(double amount) {
    lock_guard<mutex> lock(mtx); 
    cout << "Water lock mtx\n";
    double newAmount = getUsage() + amount;
    updateUsage(newAmount);
    cout << "Replenished " << amount << " units of water.\n";
    cout << "Water open lock mtx\n";
}

void Water::displayResource() {
    cout << "Water lock mtx\n";
    lock_guard<mutex> lock(mtx);
    cout << "Water usage: " << getUsage() << " units.\n";
    cout << "Water open lock mtx\n";
}
