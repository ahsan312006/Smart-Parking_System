#ifndef PARKING_SYSTEM_H
#define PARKING_SYSTEM_H

class ParkingSystem {
private:
    int totalSpaces;
    int* spaces;   // 0 = free, 1 = occupied

public:
    ParkingSystem(int total);
    ~ParkingSystem();

    void parkVehicle(int spaceNumber);
    void showStatus();
};

#endif




