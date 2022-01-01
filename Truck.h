#pragma once
#include "Vehicle.h"

class Truck : public Vehicle
{
private:
	int vehicleType = 3;
	int maxWeight = 23000;
	int minWeight = 16000;
	int maxPassengerCount = 3;
	int minPassengerCount = 1;
};

