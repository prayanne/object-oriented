#include<iostream>
#include<cstring>

using namespace std;

namespace CAR_CONST{
    const int ID_LEN = 20;
    const int MAX_SPD = 200;
    const int FUEL_STEP = 2;
    const int ACC_STEP = 10;
    const int BRK_STEP = 10;
} // namespace CAR_CONST

class Car{
    private:
        char gameID[CAR_CONST::ID_LEN];
        int fuelGauge;
        int carSpeed;
    public:
        void InitMembers(char *ID, int fuel);
        void ShowCarState();
        void Accel();
        void Break();
};

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