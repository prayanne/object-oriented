#include<iostream>
#include<cstring>
using namespace std;

class MyFriendInfo{
private:
    char * name;
    int age;
public:
    MyFriendInfo(char myname[20], int myage): age(myage){
        name = new char[strlen(myname) + 1];
        strcpy(name, myname);
    }
    void showMyFriendInfo(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
    ~MyFriendInfo(){
        delete [] name;
    }
};

class MyFriendDetailInfo : public MyFriendInfo{
private:
    char * addr;
    char * phone;
public:
    MyFriendDetailInfo(char myaddr[20], char myphone[20], char myname[20], int myage = 0)
        : MyFriendInfo(myname, myage) {
        addr = new char[strlen(myaddr) + 1];
        phone = new char[strlen(myphone) + 1];
        strcpy(addr, myaddr);
        strcpy(phone, myphone);
    }
    void showMyFriendDetailInfo(){
        showMyFriendInfo();
        cout << "Address: " << addr << endl;
        cout << "Phone: " << phone << endl;
    }
    ~MyFriendDetailInfo(){
        delete [] addr;
        delete [] phone;
    }
};

int main(void){
    MyFriendDetailInfo detailInfo("123 Main St", "555-1234", "John Doe", 30);
    detailInfo.showMyFriendDetailInfo();
    return 0;
}