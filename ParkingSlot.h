#ifndef PARKINGSLOT_H
#define PARKINGSLOT_H

/*
====================================================
Class: ParkingSlot
Purpose:
- Represents a single parking slot
- Maintains availability state
====================================================
*/

class ParkingSlot {
public:
    int slotId;
    int zoneId;
    bool isAvailable;

    ParkingSlot();
    ParkingSlot(int sid, int zid);
};

#endif
