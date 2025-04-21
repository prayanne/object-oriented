#include<iostream>
#include<cstring>
using namespace std;

class SoBase{
private:
    int baseNum;
public:
    SoBase(int num): baseNum(num){
        cout << "SoBase()" << endl;
    }
    ~SoBase(){
        cout << "~SoBase(), " << baseNum << endl;
    }
};

class SoDerived : public SoBase{
private:
    int derivedNum;
public:

    SoDerived(int num1, int num2): SoBase(num1), derivedNum(num2){
        cout << "SoDerived(), " << endl;
    }
    ~SoDerived(){
        cout<<"~SoDerived(), " << derivedNum << endl;
    }
};

int main(void){
    SoDerived obj1(20, 30);
    cout << "----------------" << endl;
    
    SoDerived obj2(15, 25);
    cout << "----------------" << endl;

    return 0;
}