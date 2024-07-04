#include "Bicycle.h"

Bicycle::Bicycle()
{
    type = "Empty";
}

Bicycle::Bicycle(string name, float price, int maxSpeed, int year, string type) : Vehicle(name, price, maxSpeed, year)
{
    this->type = type;
}

void Bicycle::setType(string type){ this->type = type; }

string Bicycle::getType() const{ return type; }

void Bicycle::showInfo() const
{
    cout << "Name: " << name << endl;
    cout << "Type: " << type << endl;
    cout << "Price: " << price << endl;
    cout << "Max speed: " << maxSpeed << endl;
    cout << "Year: " << year << endl;
}
