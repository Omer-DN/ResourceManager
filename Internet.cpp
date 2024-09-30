#include "Internet.h"
#include <iostream>

using namespace std;


Internet::Internet(double amount) : Resource("Internet", amount) {}


void Internet::useResource(double amount) {
    if (resourceAmount >= amount) {
        updateUsage(amount); 
        cout << "Used " << amount << " MB of internet. Remaining: " << getUsage() << endl;
    }
    else {
        cout << "Not enough internet available!" << endl;
    }
}


void Internet::displayResource() {
    cout << "Internet Resource - Amount: " << getUsage() << endl;
}
