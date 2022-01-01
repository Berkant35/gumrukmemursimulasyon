#include <iostream>

#include "passenger.h"
#include "Vehicle.h"
#include <time.h>

using namespace std;

void game();
void startGame();
void gameInfo();
void validOrInvalidVehicle();
int main()
{
    srand(time(0));
    game();
}

void startGame() {
    int officerGold = 0;
    int validPassCount = 0;
    int invalidPassCount = 0;
    int gamePoint = 0;
    
    while (invalidPassCount < 10) {
        cout << "\n\n\nThere is coming undefined a vehicle to customs area..." << endl;
        Vehicle vehicle = Vehicle();
        vector<Passenger*> passengerList = {};
        int passengerCountOfCreatedVehicle = vehicle.getPassengerCount();
        int getVehicleType = vehicle.getVehicleType();
         
        // Rasgele Passengerlar Olusturuldu
        for (int i = 0; i < passengerCountOfCreatedVehicle; i++) {
            int addPermission = 1;
            Passenger* passenger = new Passenger();
            for (int i = 0; i < passengerList.size(); i++) {
                if (passengerList[i]->getPassengerID() == passenger->getPassengerID()) {
                    addPermission = 0;
                 }
              }
            if (addPermission == 1) {
                passengerList.push_back(passenger);
            }
            else {
                i--;
            }
        }
        cout << "\n\n\nWhat do you want with this car...\n\n\n";
        cout << "OPTIONS\n\n1:VALID TO PASS\n2:INVALID TO PASS\n3:CHECK TYPE FOR THİS VEHİCLE\n4:CHECK WEIGHT THIS CAR \n5:CHECK REQUIRED VEHICLES ATTRIBUTES\n6:CHEKC PASSENGER COUNT\n7:CHECK PASSENGER PASSPORT ID'S\n8:CHECK GUILTY LIST NAME AND ID\n9:EXIT GAME";
        int action = 0;
        cin >> action;
        
    } 
}



void  gameInfo() {
    cout << "\n\n\n" << endl;
    cout << "Welcome again to customs simulation.\nWhat is customs simulation. Customs simulation is a game.\nSo we expect you be officer of customs. \nThis game  will might create many situations and  you have to \nhandle these situations. When game start ,\nyou start in any shack.\nAnd then we expect be carefully for invalid pass of vehicles from you.\nSometimes come here guilty persons \nand invalid vehicles and you have to not\npermission to these vehicles for pass.\nIf you are find guilty person quickly call cops.\nThats all.Dont forget enjoy to this game ";
    cout << "\n\n\n" << endl;
    return;
}

void game() {
    cout << "--!--Welcome Customs Simulation--!--" << endl;
    int input = 1;
    while (input != 0) {
        int action;
        cout << "Game Menu" << endl;
        cout << "1:Game Start" << endl << "2:Game Info" << endl << "0:Exit" << endl;
        cout << "Enter input: ";
        cin >> action;
        switch (action) {
           case 1:
                startGame();
                break;
           case 2:
                gameInfo();
                break;
           case 0:
               input = 0;
               break;
        }
    }
}


