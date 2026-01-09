#include "Zone.h"

Zone::Zone() {
    zoneId = -1;
    areaCount = 0;
    adjCount = 0;
}

Zone::Zone(int zid) {
    zoneId = zid;
    areaCount = 0;
    adjCount = 0;
}

void Zone::addArea(ParkingArea area) {
    areas[areaCount++] = area;
}

void Zone::addAdjacentZone(int zid) {
    adjacentZones[adjCount++] = zid;
}
