#pragma once
#include "Vehicle.h"
class Lorry : public Vehicle
{
protected:
	float loadCapacity;
public:
	Lorry();
	Lorry(string name, float price, int maxSpeed, int year, float loadCapacity);

	void setLoadCapacity(float loadCapacity);
	float getLoadCapacity()const;

	void showInfo()const override;
};

