#include <iostream>
#include <cstring>
using namespace std;

class Person{
    private: char * name;
    int age;
    public:
    Person(char * myname = "", int myage = 0){
        name = myname;
        age = myage;
    }
    void ShowPersonInfo(){
        cout<<"Name: " << name << endl;
        cout<<"Age: " << age << endl;
    }
    ~Person(){
        try
        {
            delete [] name;
            cout<<"called destructor" << endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        // No need to delete name as it no longer uses dynamic memory
    }
};

int main(void){
    // Person arr[3];

    // arr[0] = Person("Lee jin", 29);
    // arr[1] = Person("Kim hyeok", 41);
    // arr[2] = Person("Park ji", 35);

    // for (int i=0; i<3; i++) {arr[i].ShowPersonInfo();}

    Person * parr = new Person[3];
    for (int i=0; i<3; i++) {parr[i].ShowPersonInfo();}

    Person man1("Lee hyun", 29);
    Person man2("Kim min", 41);
    man1.ShowPersonInfo();
    man2.ShowPersonInfo();
    return 0;
}