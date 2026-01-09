#include "ParkingArea.h"

ParkingArea::ParkingArea() {
    areaId = -1;
    slotCount = 0;
}

void ParkingArea::addSlot(int sid, int zid) {
    slots[slotCount++] = ParkingSlot(sid, zid);
}
