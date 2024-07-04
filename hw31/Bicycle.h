#pragma once
#include "Vehicle.h"
class Bicycle : public Vehicle
{
protected:
	string type;
public:
	Bicycle();
	Bicycle(string name, float price, int maxSpeed, int year, string type);

	void setType(string type);
	string getType()const;

	void showInfo()const override;
};

