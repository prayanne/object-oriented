#include<iostream>
using namespace std;

int adder(int &ref1, int &ref2){
    return ref1 + ref2;
}

int main(){
    int ref1, ref2, choice, result;
    while(1){
        cout << "Choose menu." << endl;
        cout << "1. Add two numbers" << endl;
        cout << "2. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        if(choice == 2){
            cout << "Exiting..." << endl;
            break;
        }
        else if(choice != 1){
            cout << "Invalid choice. Please try again." << "\n\n";
            continue;
        } else {
            cout << "Enter first numbers: ";
            cin >> ref1;
            cout << "Enter second numbers: ";
            cin >> ref2;
            result = adder(ref1, ref2);
            cout << "result: " << result << "\n\n";
        }
    }
    return 0;
}