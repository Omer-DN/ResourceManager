#include "Electricity.h"


Electricity ::Electricity(double amount)
	:Resource("Electricity",amount){}

void Electricity::useResource(double amount) {
	if (resourceAmount>amount){
        updateUsage(amount);  // שימוש בפונקציה לעדכון השימוש
        cout << "Used " << amount << " units of electricity. Remaining: " << getUsage() << endl;
    }
    else {
        cout << "Not enough electricity available!" << endl;
    }
}

void Electricity::displayResource(){
    cout << "Electricity Resource - Amount: " << getUsage() << endl;
}