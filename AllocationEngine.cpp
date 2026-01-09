#include "AllocationEngine.h"

bool AllocationEngine::allocateSlot(ParkingRequest &r, Zone zones[], int zoneCount) {
    Zone &z = zones[r.requestedZone];

    for (int i = 0; i < z.areaCount; i++)
        for (int j = 0; j < z.areas[i].slotCount; j++)
            if (z.areas[i].slots[j].isAvailable) {
                z.areas[i].slots[j].isAvailable = false;
                r.allocatedZone = z.zoneId;
                r.allocatedSlot = j;
                r.transition(ALLOCATED);
                return true;
            }

    for (int a = 0; a < z.adjCount; a++) {
        Zone &adj = zones[z.adjacentZones[a]];
        for (int i = 0; i < adj.areaCount; i++)
            for (int j = 0; j < adj.areas[i].slotCount; j++)
                if (adj.areas[i].slots[j].isAvailable) {
                    adj.areas[i].slots[j].isAvailable = false;
                    r.allocatedZone = adj.zoneId;
                    r.allocatedSlot = j;
                    r.transition(ALLOCATED);
                    return true;
                }
    }

    r.transition(CANCELLED);
    return false;
}
