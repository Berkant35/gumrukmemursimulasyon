#pragma once
#include "Vehicle.h"
class Car : public Vehicle
{
public:
	int vehicleType = 1;
	int maxWeight = 6500;
	int minWeight = 1000;
	int maxPassengerCount = 5;
	int minPassengerCount = 1;
};

