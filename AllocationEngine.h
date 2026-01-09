#ifndef ALLOCATIONENGINE_H
#define ALLOCATIONENGINE_H

#include "Zone.h"
#include "ParkingRequest.h"

/*
====================================================
Class: AllocationEngine
Purpose:
- Handles slot allocation logic
====================================================
*/

class AllocationEngine {
public:
    static bool allocateSlot(ParkingRequest &req, Zone zones[], int zoneCount);
};

#endif
