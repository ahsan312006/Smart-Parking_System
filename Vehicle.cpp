#include "Vehicle.h"

Vehicle::Vehicle() {
    vehicleId = -1;
    preferredZone = -1;
}

Vehicle::Vehicle(int vid, int zid) {
    vehicleId = vid;
    preferredZone = zid;
}
