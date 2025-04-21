#include <iostream>
#include <cstring>
using namespace std;

class CountryArea{
public:
    static const int RUSSIA = 1707540;
    static const int Canda = 998467;
    static const int China = 957290;
    static const int SouthKorea = 9922;
};

int main(void){
    cout<<"Russia area: " << CountryArea::RUSSIA << endl;
    cout<<"Canada area: " << CountryArea::Canda << endl;    
    cout<<"China area: " << CountryArea::China << endl;
    cout<<"South Korea area: " << CountryArea::SouthKorea << endl;
    return 0;
}