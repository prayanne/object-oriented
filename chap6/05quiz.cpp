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
        static int index;
    public:
        NameCard(char * name, char * company, char * phone, int positon) : position(position){
            this->name = new char[strlen(name) + 1];
            strcpy(this->name, name);
            this->company = new char[strlen(company) + 1];
            strcpy(this->company, company);
            this->phone = new char[strlen(phone) + 1];
            strcpy(this->phone, phone);

            index++;
        }
        void ShowNameCardInfo(){
            
            cout << name << ", ";
            cout << company  << ", ";
            if( position == 1){
                cout << "CEO, ";
            }else if( position == 2){
                cout << "CTO, ";
            }else if( position == 3){
                cout << "Manager, ";
            }else if( position == 4){
                cout << "Staff, ";
            }
            cout << phone ;
        }
        ~NameCard(){
            delete [] name;
            delete [] company;
            delete [] phone;
        }
    };
    int NameCard::index = 0;

    int main(void){
        NameCard * NCList[5];
        NCList[0] = new NameCard("Lee", "ABCEng", "010-1234-5678", 1);
        NCList[1] = new NameCard("Hong", "OrangeEng", "010-9876-5432", 2);
        NCList[2] = new NameCard("Park", "KoreaEng", "010-1111-2222", 3);
        NCList[3] = new NameCard("Kim", "KoreaEng", "010-2222-3333", 4);
        NCList[4] = new NameCard("Lee", "KoreaEng", "010-3333-4444", 4);

        cout << "[Output]" << endl;
        cout << "Total NameCard: " << NameCard::index << endl;
        cout << "(Name, Company, Position, Phone)" << endl;
        for(int i = 0; i < 5; i++){
            cout << "( ";
            NCList[i]->ShowNameCardInfo();
            cout << " )" << endl;
        }
        return 0;
    }