#include <iostream>
#include <thread>
#include "Electricity.h"
#include "Water.h"
#include "Internet.h"

using namespace std;

// פונקציה שתשתמש במשאב חשמל
void useElectricity(Electricity& electricityResource, double amount) {
    electricityResource.useResource(amount);
}

// פונקציה שתשתמש במשאב מים
void useWater(Water& waterResource, double amount) {
    waterResource.useResource(amount);
}

// פונקציה שתשתמש במשאב אינטרנט
void useInternet(Internet& internetResource, double amount) {
    internetResource.useResource(amount);
}

int main() {
    // יצירת משאבים
    Electricity electricity(100); // 100 יחידות חשמל
    Water water(50);               // 50 יחידות מים
    Internet internet(75);         // 75 יחידות אינטרנט

    // יצירת תהליכים
    thread t1(useElectricity, ref(electricity), 20);
    thread t2(useWater, ref(water), 10);
    thread t3(useInternet, ref(internet), 30);
    thread t4(useElectricity, ref(electricity), 15);
    thread t5(useWater, ref(water), 5);
    thread t6(useInternet, ref(internet), 20);

    // המתנה לסיום כל התהליכים
    t1.join();
    t2.join();
    t3.join();
    t4.join();
    t5.join();
    t6.join();

    // הצגת סטטוס המשאבים
    electricity.displayResource();
    water.displayResource();
    internet.displayResource();

    return 0;
}
