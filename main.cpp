#include <iostream>
#include "Electricity.h"
#include "Water.h"
#include "Internet.h"

using namespace std;

void displayMenu() {
    cout << "\nResource Management System\n";
    cout << "1. Use Electricity\n";
    cout << "2. Use Water\n";
    cout << "3. Use Internet\n";
    cout << "4. Replenish Electricity\n";
    cout << "5. Replenish Water\n";
    cout << "6. Replenish Internet\n";
    cout << "7. Display Resources\n";
    cout << "8. Exit\n";
    cout << "Choose an option: ";
}

int main() {

    Electricity electricity(100);
    Water water(200);
    Internet internet(500);

    int choice;
    double amount;

    while (true) {
        displayMenu();
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter amount of electricity to use: ";
            cin >> amount;
            electricity.useResource(amount);
            break;

        case 2:
            cout << "Enter amount of water to use: ";
            cin >> amount;
            water.useResource(amount);
            break;

        case 3:
            cout << "Enter amount of internet (MB) to use: ";
            cin >> amount;
            internet.useResource(amount);
            break;

        case 4:
            cout << "Enter amount of electricity to replenish: ";
            cin >> amount;
            electricity.replenishResource(amount);
            cout << "Electricity replenished.\n";
            break;

        case 5:
            cout << "Enter amount of water to replenish: ";
            cin >> amount;
            water.replenishResource(amount);
            cout << "Water replenished.\n";
            break;

        case 6:
            cout << "Enter amount of internet (MB) to replenish: ";
            cin >> amount;
            internet.replenishResource(amount);
            cout << "Internet replenished.\n";
            break;

        case 7:
            electricity.displayResource();
            water.displayResource();
            internet.displayResource();
            break;

        case 8:
            cout << "Exiting...\n";
            return 0;

        default:
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
