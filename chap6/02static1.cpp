#include <iostream>
#include <cstring> 
using namespace std;

class SoSimple{
    public:
        static int SimObjCnt;
    public :
        SoSimple(){
            SimObjCnt++;
            cout << SimObjCnt << endl;
        }
};
int SoSimple::SimObjCnt = 0; // static member initialization

int main(void){
    cout << SoSimple::SimObjCnt << endl; // 0
    SoSimple obj1;
    SoSimple obj2;
    SoSimple obj3;
    cout << SoSimple::SimObjCnt << endl; // 3
    cout << obj1.SimObjCnt << endl; // 3
    cout << obj2.SimObjCnt << endl; // 3
    cout << obj3.SimObjCnt << endl; // 3
    return 0;
}