#include "Car.h"

Car::Car()
{
    doorsNumber = 0;
    color = "Empty";
}

Car::Car(string name, float price, int maxSpeed, int year, int doorsNumber, string color) : Vehicle(name, price, maxSpeed, year)
{
    this->doorsNumber = doorsNumber;
    this->color = color;
}

void Car::setdoorsNumber(int doorsNumber){this->doorsNumber = doorsNumber;}

void Car::setColor(string color){ this->color = color; }

int Car::getdoorsNumber() const{ return doorsNumber; }

string Car::getColor() const{ return color; }

void Car::showInfo() const
{
    cout << "Name: " << name << endl;
    cout << "Price: " << price << endl;
    cout << "Max speed: " << maxSpeed << endl;
    cout << "Year: " << year << endl;
    cout << "Color: " << color << endl;
    cout << "Doors number: " << doorsNumber << endl;
}
