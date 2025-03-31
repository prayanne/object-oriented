#include<iostream>
using namespace std;

void SwapByRef2(int &ref1, int &ref2);

int main(){
    int val1 = 10;
    int val2 = 20;

    cout << "val1: " << val1 << ", val2: " << val2 << std::endl;
    SwapByRef2(val1, val2);

    cout << "val1: " << val1 << ", val2: " << val2 << std::endl;
    
    return 0;
}

void SwapByRef2(int &ref1, int &ref2){
    int temp = ref1;
    ref1 = ref2;
    ref2 = temp;
    std::cout << "DO - ref1: " << ref1 << ", ref2: " << ref2 << std::endl;
}