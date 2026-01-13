#include <iostream>
#include "../core/ParkingArea.h"
#include "../core/ParkingSlot.h"

int main() {
    ParkingArea area(1);

    area.addSlot(new ParkingSlot(1));
    area.addSlot(new ParkingSlot(2));
    area.addSlot(new ParkingSlot(3));

    int choice;
    std::cout << "Enter slot number to park (1-3): ";
    std::cin >> choice;

    if (choice >= 1 && choice <= 3) {
        area.showSlots();
        std::cout << "\nParking vehicle in slot " << choice << std::endl;
    } else {
        std::cout << "Invalid slot number!" << std::endl;
    }

    return 0;
}