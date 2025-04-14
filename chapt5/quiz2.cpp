#include <iostream>
#include <cstring>
using namespace std;

class NameCard{
private:
    char * name;
    char * company;
    char * phone;
    int position;
    
public:
    NameCard(char * name, char * company, char * phone, int position) : position(position){
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
        this->company = new char[strlen(company) + 1];
        strcpy(this->company, company);
        this->phone = new char[strlen(phone) + 1];
        strcpy(this->phone, phone);
    }
    NameCard(NameCard & copy) : position(copy.position){
        this->name = new char[strlen(copy.name) + 1];
        strcpy(this->name, copy.name);
        this->company = new char[strlen(copy.company) + 1];
        strcpy(this->company, copy.company);
        this->phone = new char[strlen(copy.phone) + 1];
        strcpy(this->phone, copy.phone);
    }
    ~NameCard(){
        delete [] name;
        delete [] company;
        delete [] phone;
    }
    void ShowNameCardInfo(){
        cout << "Name: " << name << endl;
        cout << "Company: " << company << endl;
        cout << "Position: " << position << endl;
        cout << "Phone: " << phone << endl;
    }
};

int main(void){
    NameCard manClerk("Lee", "ABCEng", "010-1234-5678", 1);
    NameCard copy1 = manClerk; // Copy constructor is called
    NameCard manSenior("Hong","OrangeEng", "010-9876-5432", 2);
    NameCard copy2(manSenior); // Copy constructor is called

    copy1.ShowNameCardInfo();
    copy2.ShowNameCardInfo();
    cout << "Copy constructor called." << endl;
    return 0;
}