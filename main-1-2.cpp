#include <iostream>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "Vehicle.h"
#include "ParkingLot.h"

int main() {
    ParkingLot lot(10);

    int type;

    std::cout << "Enter the type of vehicle (0 for Car, 1 for Bus, 2 for Motorbike): ";
    std::cin >> type;

    while (lot.getCount() < 10) {
        Vehicle* vehicle;

        if (type == 0) {
            vehicle = new Car(type);
        } else if (type == 1) {
            vehicle = new Bus(type);
        } else if (type == 2) {
            vehicle = new Motorbike(type);
        }

        lot.parkVehicle(vehicle);

        std::cout << "Enter the type of vehicle (0 for Car, 1 for Bus, 2 for Motorbike): ";
        std::cin >> type;
    }

    int id;

    std::cout << "Enter the ID of the vehicle to unpark: ";
    std::cin >> id;

    lot.unparkVehicle(id);

    return 0;
}