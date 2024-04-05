#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include <iostream>
#include "Vehicle.h"

class ParkingLot {
private:
    static const int MAX_VEHICLES = 10;
    Vehicle* vehicles[MAX_VEHICLES];
    int count;
    int maxCapacity;

public:
    ParkingLot(int capacity);
    ~ParkingLot();
    void parkVehicle(Vehicle* vehicle);
    void unparkVehicle(int id);
    int getCount() const;
    int countOverstayingVehicles(int maxParkingDuration) const;
};

#endif