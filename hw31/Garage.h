#pragma once
#include <vector>
#include <algorithm>
#include "Car.h"
#include "Bicycle.h"
#include "Lorry.h"

class Garage
{
	vector<Vehicle*> garage;
public: 
	void addVehicle(Vehicle* obj);
	void deleteVehicle(int index);

	void findByName(string name)const;
	void findByIndex(int index)const;
	void findBySpeed(int speed)const;

	void editVehiclePrice(int index, float price);
	void editVehicleSpeed(int index, int speed);
	
	void sortBySpeed();
	void showAll()const;
};

