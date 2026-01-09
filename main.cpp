#include <iostream>
#include "ParkingSystem.h"

using namespace std;

int main() {
    int totalSpaces;
    int choice, space;

    cout << "Enter total parking spaces: ";
    cin >> totalSpaces;

    ParkingSystem system(totalSpaces);

    do {
        cout << "\n1. Park Vehicle";
        cout << "\n2. Show Parking Status";
        cout << "\n0. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter space number: ";
            cin >> space;
            system.parkVehicle(space);
        } 
        else if (choice == 2) {
            system.showStatus();
        }

    } while (choice != 0);

    cout << "System closed." << endl;
    return 0;
}








