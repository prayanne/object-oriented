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
    Person(const Person& copy): age(copy.age){
        name = new char[strlen(copy.name) + 1];
        strcpy(name, copy.name);
    }
    void ShowPersonInfo(){
        cout<<"Name: " << name << endl;
        cout<<"Age: " << age << endl;
    }
    ~Person(){
        try
        {
            delete []name;
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

    Person man1("Lee hyun", 29);
    Person man2("Kim min", 41);
    Person man3(man1); // Copy constructor is called
    man1.ShowPersonInfo();
    man2.ShowPersonInfo();
    man3.ShowPersonInfo();
    return 0;
}