#include<iostream>
#include<cstring>
using namespace std;

class SoBase{
private:
    int baseNum;
public:
    SoBase(): baseNum(20){
        cout << "SoBase()" << endl;
    }
    SoBase(int num): baseNum(num){
        cout << "SoBase(int num)" << endl;
    }
    void ShowBaseData(){
        cout<<baseNum<<endl;
    }
};

class SoDerived : public SoBase{
private:
    int derivedNum;
public:
    SoDerived(): derivedNum(30){
        cout << "SoDerived()" << endl;
    }
    SoDerived(int num): derivedNum(num){
        cout << "SoDerived(int num)" << endl;
    }
    SoDerived(int num1, int num2): SoBase(num1), derivedNum(num2){
        cout << "SoDerived(int num1, int num2)" << endl;
    }
    void ShowDerivedData(){
        ShowBaseData();
        cout<<derivedNum<<endl;
    }
};

int main(void){
    SoDerived obj1;
    obj1.ShowDerivedData();
    cout << "----------------" << endl;
    SoDerived obj2(10);
    obj2.ShowDerivedData();
    cout << "----------------" << endl;
    SoDerived obj3(10, 20);
    obj3.ShowDerivedData();

    return 0;
}