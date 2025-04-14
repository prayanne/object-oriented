#include <iostream>
using namespace std;

class Temporary {
private:
    int num;
public:
    Temporary(int n) : num(n) {
        cout << "Constructor called for " << num << endl;
    }
    ~Temporary() {
        cout << "Destructor called for " << num << endl;
    }
    void ShowTempInfo() {
        cout << "Temporary object number: " << num << endl;
    }
};

int mian(void){
    Temporary(100);
    cout << "Temporary object created." << endl;
    Temporary(200).ShowTempInfo();
    // const Temporary &ref=Temporary(300);
    cout << "Temporary object created." << endl;
    return 0;
}