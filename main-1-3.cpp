#include <iostream>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "Vehicle.h"
#include "ParkingLot.h"

int main() {
    ParkingLot lot(10);

    // Prompt the user for the number and types of vehicles
    int numVehicles;
    std::cout << "Enter the number of vehicles: ";
    std::cin >> numVehicles;

    for (int i = 0; i < numVehicles; ++i) {
        int type;
        std::cout << "Enter the type of vehicle (0 for Car, 1 for Bus, 2 for Motorbike): ";
        std::cin >> type;

        Vehicle* vehicle;

        if (type == 0) {
            vehicle = new Car(i);
        } else if (type == 1) {
            vehicle = new Bus(i);
        } else if (type == 2) {
            vehicle = new Motorbike(i);
        }

        lot.parkVehicle(vehicle);
    }

    // Simulate the passage of time
    std::time_t startTime = std::time(0);

    // while (lot.getCount() > 0) {
    //     std::time_t currentTime = std::time(0);

    //     if (difftime(currentTime, startTime) >= 10) {
    //         // Apply the time reduction for each type of vehicle
    //         for (Vehicle* vehicle : lot.getVehicles()) {
    //             vehicle->applyTimeReduction();
    //         }

    //         // Reset the start time
    //         startTime = currentTime;
    //     }

    //     std::cout << "Current number of vehicles: " << lot.getCount() << std::endl;
    // }

    return 0;
}