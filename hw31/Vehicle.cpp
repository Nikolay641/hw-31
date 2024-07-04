#include "Vehicle.h"

Vehicle::Vehicle()
{
    name = "Empty";
    price = 0;
    maxSpeed = 0;
    year = 0;
}

Vehicle::Vehicle(string name, float price, int maxSpeed, int year)
{
    this->name = name;
    this->price = price;
    this->maxSpeed = maxSpeed;
    this->year = year;
}

Vehicle::~Vehicle(){}

void Vehicle::setName(string name){ this->name = name; }

void Vehicle::setPrice(float price){ this->price = price; }

void Vehicle::setMaxSpeed(int maxSpeed){ this->maxSpeed = maxSpeed; }

void Vehicle::setYears(int year) { this->year = year; }

string Vehicle::getName() const{return name;}

float Vehicle::getPrice() const{return price;}

int Vehicle::getMaxSpeed() const{return maxSpeed;}

int Vehicle::getYear() const{return year;}
