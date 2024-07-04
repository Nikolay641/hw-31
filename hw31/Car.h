#pragma once
#include "Vehicle.h"
class Car : public Vehicle
{
protected:
	int doorsNumber;
	string color;
public:
	Car();
	Car(string name, float price, int maxSpeed, int year, int doorsNumber, string color);

	void setdoorsNumber(int doorsNumber);
	void setColor(string color);

	int getdoorsNumber()const;
	string getColor()const;

	void showInfo()const override;
};

