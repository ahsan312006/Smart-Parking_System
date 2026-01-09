#ifndef PARKINGAREA_H
#define PARKINGAREA_H

#include "ParkingSlot.h"

/*
====================================================
Class: ParkingArea
Purpose:
- Groups multiple parking slots
====================================================
*/

class ParkingArea {
public:
    int areaId;
    ParkingSlot slots[10];
    int slotCount;

    ParkingArea();
    void addSlot(int sid, int zid);
};

#endif
