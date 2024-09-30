#include "Internet.h"

Internet::Internet(double initialAmount) :
    Resource("Internet",initialAmount) {}

void Internet::useResource(double amount) {
    lock_guard<mutex> lock(mtx);
    if (amount <= getUsage()) {
        // עדכון השימוש
        double newUsage = getUsage() - amount;
        updateUsage(newUsage);
        cout << "Used " << amount << " units of internet.\n";
    }
    else {
        cout << "Not enough internet available!\n";
    }
}

void Internet::replenishResource(double amount) {
    lock_guard<mutex> lock(mtx);
    double newAmount = getUsage() + amount;
    updateUsage(newAmount);
    cout << "Replenished " << amount << " units of internet.\n";
}

void Internet::displayResource() {
    lock_guard<mutex> lock(mtx);
    cout << "Internet usage: " << getUsage() << " units.\n";
}
