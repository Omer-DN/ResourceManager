#include "Internet.h"

Internet::Internet(double initialAmount) :
    Resource("Internet",initialAmount) {}

void Internet::useResource(double amount) {
    lock_guard<mutex> lock(mtx);
    cout << "internet lock mtx\n";
    if (amount <= getUsage()) {
        double newUsage = getUsage() - amount;
        updateUsage(newUsage);
        cout << "Used " << amount << " units of internet.\n";
    }
    else {
        cout << "Not enough internet available!\n";
    }
    cout << "internet open lock mtx\n";
}

void Internet::replenishResource(double amount) {
    lock_guard<mutex> lock(mtx);
    cout << "internet lock mtx\n";
    double newAmount = getUsage() + amount;
    updateUsage(newAmount);
    cout << "internet open lock mtx\n";
    cout << "Replenished " << amount << " units of internet.\n";
}

void Internet::displayResource() {
    lock_guard<mutex> lock(mtx);
    cout << "internet lock mtx\n";
    cout << "Internet usage: " << getUsage() << " units.\n";
    cout << "internet open lock mtx\n";
}
