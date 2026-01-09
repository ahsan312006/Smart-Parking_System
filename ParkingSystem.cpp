#include <iostream>
#include "ParkingSystem.h"

using namespace std;

ParkingSystem::ParkingSystem(int total) {
    totalSpaces = total;
    spaces = new int[totalSpaces];

    for (int i = 0; i < totalSpaces; i++) {
        spaces[i] = 0;   // all spaces free
    }

    cout << "Parking system initialized with "
         << totalSpaces << " spaces." << endl;
}

ParkingSystem::~ParkingSystem() {
    delete[] spaces;
}

void ParkingSystem::parkVehicle(int spaceNumber) {
    if (spaceNumber < 1 || spaceNumber > totalSpaces) {
        cout << "Invalid space number!" << endl;
        return;
    }

    if (spaces[spaceNumber - 1] == 1) {
        cout << "❌ This space is already occupied!" << endl;
    } else {
        spaces[spaceNumber - 1] = 1;
        cout << "✅ Vehicle parked at space "
             << spaceNumber << endl;
    }
}

void ParkingSystem::showStatus() {
    cout << "\nParking Status:\n";
    for (int i = 0; i < totalSpaces; i++) {
        cout << "Space " << (i + 1) << " : "
             << (spaces[i] ? "Occupied" : "Free") << endl;
    }
}



