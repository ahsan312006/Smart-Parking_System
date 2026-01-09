#include "ParkingRequest.h"

ParkingRequest::ParkingRequest() {
    requestId = -1;
    vehicleId = -1;
    requestedZone = -1;
    allocatedZone = -1;
    allocatedSlot = -1;
    state = REQUESTED;
}

bool ParkingRequest::transition(RequestState next) {
    if (state == REQUESTED && (next == ALLOCATED || next == CANCELLED)) {
        state = next; return true;
    }
    if (state == ALLOCATED && (next == OCCUPIED || next == CANCELLED)) {
        state = next; return true;
    }
    if (state == OCCUPIED && next == RELEASED) {
        state = next; return true;
    }
    return false;
}
