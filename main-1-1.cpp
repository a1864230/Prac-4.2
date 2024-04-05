#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    int numVehicles;
    std::cout << "Enter the number of vehicles: ";
    std::cin >> numVehicles;

    Vehicle** vehicles = new Vehicle*[numVehicles];

    for (int i= 0; i < numVehicles; ++i) {
        int type;
        std::cout << "Enter the type of vehicle (0 for Car, 1 for Bus, 2 for Motorbike): ";
        std::cin >> type;

        int id;
        std::cout << "Enter the ID of the vehicle: ";
        std::cin >> id;

        if (type == 0) {
            vehicles[i] = new Car(id);
        } else if (type == 1) {
            vehicles[i] = new Bus(id);
        } else if (type == 2) {
            vehicles[i] = new Motorbike(id);
        }
    }

    std::cout << "\nParking durations:\n";
    for (int i = 0; i < numVehicles; ++i) {
        std::cout << "Vehicle " << vehicles[i]->getID() << ": "
                  << vehicles[i]->getParkingDuration() << " seconds\n";
    }

    // Don't forget to delete the dynamically allocated objects
    for (int i = 0; i < numVehicles; ++i) {
        delete vehicles[i];
    }
    delete[] vehicles;

    return 0;
}