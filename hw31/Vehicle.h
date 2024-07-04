#pragma once
#include <string>
#include <iostream>
using namespace std;

class Vehicle
{
protected:
	string name;
	float price;
	int maxSpeed;
	int year;
public:
	Vehicle();
	Vehicle(string name, float price, int maxSpeed, int year);
	virtual ~Vehicle();

	void setName(string name);
	void setPrice(float price);
	void setMaxSpeed(int maxSpeed);
	void setYears(int year);

	string getName()const;
	float getPrice()const;
	int getMaxSpeed()const;
	int getYear()const;
	
	virtual void showInfo()const = 0;
};

