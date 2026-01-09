#ifndef VEHICLE_H
#define VEHICLE_H

/*
====================================================
Class: Vehicle
Purpose:
- Stores vehicle information
====================================================
*/

class Vehicle {
public:
    int vehicleId;
    int preferredZone;

    Vehicle();
    Vehicle(int vid, int zid);
};

#endif
