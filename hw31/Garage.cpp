#include "Garage.h"

void Garage::addVehicle(Vehicle* obj)
{
    garage.push_back(obj);
}

void Garage::deleteVehicle(int index)
{
    garage.erase(garage.begin() + index);
}

void Garage::findByName(string name) const
{
    for (auto obj : garage) {
        if (obj->getName() == name) obj->showInfo();
    }
}

void Garage::findByIndex(int index) const
{
    if (index >= 0 && index < garage.size()) {
        return garage[index]->showInfo();
    }
}

void Garage::findBySpeed(int speed) const
{
    for (auto obj : garage) {
        if (obj->getMaxSpeed() == speed) obj->showInfo();
    }
}

void Garage::editVehiclePrice(int index, float price)
{
    if (index >= 0 && index < garage.size()) {
        garage[index]->setPrice(price);
    }
}

void Garage::editVehicleSpeed(int index, int speed)
{
    if (index >= 0 && index < garage.size()) {
        garage[index]->setMaxSpeed(speed);
    }
}

void Garage::sortBySpeed()
{
    sort(garage.begin(), garage.end(), [](Vehicle* a, Vehicle* b) {return a->getMaxSpeed() > b->getMaxSpeed(); });
}

void Garage::showAll() const
{
    for (auto obj : garage) {
        obj->showInfo();
        cout << "\n";
    }
}
