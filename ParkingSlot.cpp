#include "ParkingSlot.h"

ParkingSlot::ParkingSlot() {
    slotId = -1;
    zoneId = -1;
    isAvailable = true;
}

ParkingSlot::ParkingSlot(int sid, int zid) {
    slotId = sid;
    zoneId = zid;
    isAvailable = true;
}
