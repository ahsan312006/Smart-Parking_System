#ifndef ZONE_H
#define ZONE_H

#include "ParkingArea.h"

/*
====================================================
Class: Zone
Purpose:
- Represents a city zone
- Maintains adjacency with other zones
====================================================
*/

class Zone {
public:
    int zoneId;
    ParkingArea areas[5];
    int areaCount;

    int adjacentZones[5];
    int adjCount;

    Zone();
    Zone(int zid);

    void addArea(ParkingArea area);
    void addAdjacentZone(int zid);
};

#endif
