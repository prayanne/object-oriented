#include <iostream>
using namespace std;

class SoSimaple
{
    private:
        int a;
        int b;
    public:
        explicit SoSimaple(int a, int b): a(a), b(b) {} 
        void ShowSimpleData()
        {
            cout << "a: " << a << endl;
            cout << "b: " << b << endl;
        }
};

int main(void)
{
    SoSimaple simple1(15, 20);
    // SoSimaple simple2 = simple1; // can't copy
    simple1.ShowSimpleData();
    return 0;
}   