#include "Lorry.h"

Lorry::Lorry()
{
    loadCapacity = 0;
}

Lorry::Lorry(string name, float price, int maxSpeed, int year, float loadCapacity) : Vehicle(name,price,maxSpeed,year)
{
    this->loadCapacity = loadCapacity;
}

void Lorry::setLoadCapacity(float loadCapacity){ this->loadCapacity = loadCapacity; }

float Lorry::getLoadCapacity() const{ return loadCapacity; }

void Lorry::showInfo() const
{
    cout << "Name: " << name << endl;
    cout << "Price: " << price << endl;
    cout << "Max speed: " << maxSpeed << endl;
    cout << "Load capacity: " << loadCapacity << endl;
    cout << "Year: " << year << endl;
}
