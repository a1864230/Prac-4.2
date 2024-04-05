#include "Car.h"
Car::Car(int ID) : Vehicle(ID) {}
int Car::getParkingDuration() const {
    // Calculate the duration the car has been parked in the lot
    // For example, assume 1 hour has passed since the car entered the lot
    std::time_t currentTime = std::time(nullptr);
    std::time_t elapsedTime = currentTime - timeOfEntry;

    // Apply a 10% reduction on the duration
    int reducedDuration = elapsedTime * 0.9;
    return reducedDuration;
}