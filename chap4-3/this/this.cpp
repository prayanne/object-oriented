#include <iostream>
#include <string>
using namespace std;

class TwoNumbers{
    private:
        int n1, n2;
    public:
    TwoNumbers(int n1, int n2){
        this -> n1 = n1;
        this -> n2 = n2;
    }
    void printNumbers(){
        std::cout << "n1: " << n1 << ", n2: " << n2 << std::endl;
    }
};

int main(){
    TwoNumbers obj(10, 20);
    obj.printNumbers();
    return 0;
}