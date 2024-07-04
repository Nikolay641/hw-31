#include "Garage.h"

int main()
{
    Garage garage;

    garage.addVehicle(new Car("BMW",40000, 260, 2009,4,"Black"));
    garage.addVehicle(new Bicycle("Bicycle", 2000, 40, 2020, "mountain"));
    garage.addVehicle(new Lorry("Volvo",90000,140,2021,10));

    cout << "All vehicles in the garage:" << endl;
    garage.showAll();
    cout << "--------------------------------------\n";
    cout << "\nSorted vehicles by speed:" << endl;
    garage.sortBySpeed();
    garage.showAll();
    cout << "--------------------------------------\n";
    cout << "\nChanged speed or price: " << endl;
    garage.editVehiclePrice(0, 50000);
    garage.editVehiclePrice(1, 5000);
    garage.editVehicleSpeed(2, 150);
    garage.showAll();
    cout << "--------------------------------------\n\n";
    garage.findByName("Volvo");
    cout << "\n--------------------------------------\n\n";
    garage.deleteVehicle(0);
    garage.showAll();
}