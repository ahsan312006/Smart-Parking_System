#ifndef PARKINGREQUEST_H
#define PARKINGREQUEST_H

/*
====================================================
Enum: RequestState
Defines lifecycle of parking request
====================================================
*/

enum RequestState {
    REQUESTED,
    ALLOCATED,
    OCCUPIED,
    RELEASED,
    CANCELLED
};

/*
====================================================
Class: ParkingRequest
Purpose:
- Maintains request lifecycle
====================================================
*/

class ParkingRequest {
public:
    int requestId;
    int vehicleId;
    int requestedZone;
    int allocatedZone;
    int allocatedSlot;
    RequestState state;

    ParkingRequest();
    bool transition(RequestState next);
};

#endif
