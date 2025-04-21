#include <iostream>
#include <cstring>
using namespace std;

class Boy{
    private:
        int height;
        friend class Girl;
    public:
        Boy(int len) : height(len) {}
};

class Girl{
    private:
        char phNum[20];
    public:
        Girl(char * num){
            strcpy(phNum, num);
        }
        void ShowYourFriendInfo(Boy & frn){
            cout << "My friend height: " << frn.height << endl;
        }
};

int main(void){
    Boy h1(170);
    Girl g1("010-1234-5678");
    g1.ShowYourFriendInfo(h1);
    return 0;
}