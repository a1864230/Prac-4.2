#include "Bus.h"
#include "Vehicle.h"
Bus::Bus(int ID) : Vehicle(ID) {}
int Bus::getParkingDuration() const {
    // Calculate the duration the bus has been parked in the lot
    // For example, assume 2 hours have passed since the bus entered the lot
    std::time_t currentTime = std::time(nullptr);
    std::time_t elapsedTime = currentTime - timeOfEntry;

    // Apply a 25% reduction on the duration
    int reducedDuration = elapsedTime * 0.75;
    return reducedDuration;
}