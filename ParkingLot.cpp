#include "ParkingLot.h"

ParkingLot::ParkingLot(int capacity) : maxCapacity(capacity), count(0) {}

ParkingLot::~ParkingLot() {
    for (int i = 0; i < count; ++i) {
        delete vehicles[i];
    }
}

void ParkingLot::parkVehicle(Vehicle* vehicle) {
    if (count >= maxCapacity) {
        std::cout << "The lot is full" << std::endl;
        return;
    }

    vehicles[count] = vehicle;
    ++count;
}

void ParkingLot::unparkVehicle(int id) {
    for (int i = 0; i < count; ++i) {
        if (vehicles[i]->getID() == id) {
            delete vehicles[i];

            for (int j = i; j < count - 1; ++j) {
                vehicles[j] = vehicles[j + 1];
            }

            --count;
            return;
        }
    }

    std::cout << "Vehicle not in the lot" << std::endl;
}

int ParkingLot::getCount() const {
    return count;
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration) const {
    int count = 0;

    for (int i = 0; i < this->count; ++i) {
        int parkingDuration = vehicles[i]->getParkingDuration();

        if (parkingDuration > maxParkingDuration) {
            ++count;
        }
    }

    return count;
}