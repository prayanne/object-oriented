#include<iostream>
#include<cstring>
using namespace std;

class Car{
private:
    int gasoloineGauge;
public:
    int getGasolineGauge(){
        return gasoloineGauge;
    }
};

class HybridCar : public Car{
private:
    int electricGauge;
public:
    int getElecGauge(){
        return electricGauge;
    }
};

class HybridWaterCar : public HybridCar{
private:
    int waterGauge;
public:
    int showCurrentGauge(){
        cout<< "Left gasoline: " << getGasolineGauge() << endl;
        cout<< "Left electric: " << getElecGauge() << endl;
        cout<< "Left water: " << waterGauge << endl;
    }
};

int main(void){
    HybridWaterCar hcar;
    hcar.showCurrentGauge();
    return 0;
}