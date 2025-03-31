// Car.cpp - 구현부
#include <iostream>
#include <cstring>
#include "Car.h"

using namespace std;

void Car::InitMembers(char *ID, int fuel){
    strcpy(gameID, ID);
    fuelGauge=fuel;
    carSpeed=0;
}
void Car::ShowCarState(){
    cout << "ID: " << gameID << endl;
    cout << "fuelGauge: " << fuelGauge << "%" << endl;
    cout << "carSpeed: " << carSpeed << "km/h" << endl; 
}
void Car::Accel(){
    if(fuelGauge<=0) return;
    else fuelGauge-=CAR_CONST::FUEL_STEP;
    
    if((carSpeed+CAR_CONST::ACC_STEP)>=CAR_CONST::MAX_SPD){
        carSpeed=CAR_CONST::MAX_SPD;
        return;
    }
    carSpeed+=CAR_CONST::ACC_STEP;
}
    
void Car::Break(){
    if(carSpeed < CAR_CONST::BRK_STEP){
        carSpeed = 0;
    } else {
        carSpeed -= CAR_CONST::BRK_STEP;
    }
}
//---------
int main(){
    Car run99;
    run99.InitMembers("run99", 100);
    run99.Accel();
    run99.Accel();
    run99.Accel();
    run99.ShowCarState();
    run99.Break();
    run99.ShowCarState();
    return 0;
}