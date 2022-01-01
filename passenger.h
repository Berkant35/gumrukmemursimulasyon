#pragma once
#include <iostream>
#include <vector>
#include<stdlib.h>
#include <cstdlib>
#include "ConstLists.h"

using namespace std;

class Passenger
{
private:
	string nameAndSurname;
	int passengerID;
	int age;
public:

	Passenger() {
		ConstLists constList = ConstLists();
		int nameNumber = rand() % 50 + 1;
		int createdPassengerID = rand() % 1000 + 1;
		int createdAge = rand() % 100 + 1;
		this->nameAndSurname =  constList.nameList[nameNumber];
		this->passengerID = createdPassengerID;
		this->age = createdAge;
	}

	~Passenger() {

	}

	void* operator new(size_t size)
	{
		
		void* p = malloc(size);
		return p;
	}

	void operator delete(void* ptr)
	{
	
		free(ptr);
	}
	string getPassengerNameAndSurname() {
		return nameAndSurname;
	}
	int getPassengerID() {
		return passengerID;
	}
	int getPassengerAge() {
		return age;
	}
};

