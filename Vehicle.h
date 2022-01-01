#pragma once
#include <cstdlib>
#include <ctime>

using namespace std;
class Vehicle
{
private:
		int vehicleType;
		int vehicleWeight;
		int passengerNumber;
public:

	Vehicle() {
		this->vehicleType = rand() % 3 + 1;
		
		setAttributes(vehicleType);
	}
	void setAttributes(int typeOfVehicle) {
	
		switch (typeOfVehicle)
		{
		case 1:
			this->vehicleWeight = rand() % 6500 + 1000;
			this->passengerNumber = rand() % 7 + 1;
		case 2:
			this->vehicleWeight = rand() % 20000 + 12000;
			this->passengerNumber = rand() % 50 + 1;
		case 3:
			this->vehicleWeight = rand() % 23000 + 16000;
			this->passengerNumber = rand() % 7 + 1;
		default:
			break;
		}
	}

	int getVehicleWeight() {
		return vehicleWeight;
	}

	int getPassengerCount() {
		return passengerNumber;
	}

	int getVehicleType() {
		return vehicleType;
	}
	
};

