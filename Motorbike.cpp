#include "Motorbike.h"
Motorbike::Motorbike(int ID) : Vehicle(ID) {}
int Motorbike::getParkingDuration() const {
    // Calculate the duration the motorbike has been parked in the lot
    // For example, assume 1.5 hours have passed since the motorbike entered the lot
    std::time_t currentTime = std::time(nullptr);
    std::time_t elapsedTime = currentTime - timeOfEntry;

    // Apply a 15% reduction on the duration
    int reducedDuration = elapsedTime * 0.85;
    return reducedDuration;
}