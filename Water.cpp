#include "Water.h"
#include <iostream>

using namespace std;

Water::Water(double amount) : Resource("Water", amount) {}


void Water::useResource(double amount) {
    if (resourceAmount >= amount) {
        updateUsage(amount); 
        cout << "Used " << amount << " liters of water. Remaining: " << getUsage() << endl;
    }
    else {
        cout << "Not enough water available!" << endl;
    }
}

void Water::displayResource() {
    cout << "Water Resource - Amount: " << getUsage() << endl;
}
