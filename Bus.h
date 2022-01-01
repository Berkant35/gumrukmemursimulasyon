#pragma once
#include "Vehicle.h"
class Bus : public Vehicle
{
private:
	int vehicleType = 2;
	int maxWeight = 20000;
	int minWeight = 12000;
	int maxPassengerCount = 45;
	int minPassengerCount = 1;
};

