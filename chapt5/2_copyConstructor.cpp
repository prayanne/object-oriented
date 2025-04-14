#include <iostream>
using namespace std;

class SoSimaple
{
    private:
        int a;
        int b;
    public:
        SoSimaple(int a, int b): a(a), b(b) {}
        SoSimaple(SoSimaple &copy) // Copy constructor
        {
            a = copy.a;
            b = copy.b;
            cout << "Copy constructor called!" << endl;
        }   
        void ShowSimpleData()
        {
            cout << "a: " << a << endl;
            cout << "b: " << b << endl;
        }
};

int main(void)
{
    SoSimaple simple1(15, 20);
    SoSimaple simple2 = simple1; // Copy constructor is called
    simple2.ShowSimpleData();
    return 0;
}   