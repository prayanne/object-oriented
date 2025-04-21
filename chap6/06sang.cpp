#include<iostream>
#include<cstring>
using namespace std;

class Person{
private:
    int age;
    char name[50];
public:
    Person(int myage, char * myname): age(myage){
        strcpy(name, myname);
    }
    void WhatYourName() const{
        cout<<"my name is " << name << endl;
    }
    void HOldRY() const{
        cout<<"my age is " << age << endl;
    }
};

class UnivStudent : public Person{
private:
    char major[50];
public:
    UnivStudent(char * myname, int myage, char * mymajor): Person(myage, myname){
        strcpy(major, mymajor);
    }
    void whoAreYou() const{
        WhatYourName();
        HOldRY();
        cout<<"my major is " << major << endl;
    }
};

int main(void){
    UnivStudent ustd1("Lee", 20, "Computer Science");
    ustd1.whoAreYou();
    return 0;
}