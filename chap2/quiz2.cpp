#include<iostream>
using namespace std;

void SwapByValue(int val1, int val2){
    int temp = val1;
    val1 = val2;
    val2 = temp;
}
void SwapByPointer(int *ptr1, int *ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
void SwapByRef(int &ref1, int &ref2){
    int temp = ref1;
    ref1 = ref2;
    ref2 = temp;
}

int main(){
    int num1 =10;
    int num2 =20;
    int choice = -1;
    
    while(1){
        cout << "----------< MENU >----------" << endl;
        cout << "1. Swap by Value" << endl;
        cout << "2. Swap by Pointer" << endl;
        cout << "3. Swap by Reference" << endl;
        cout << "9. Clear Screan" << endl;
        cout << "0. Exit" << endl;
        cout << "----------------------------" << "\n\n";
        cout << "Your choice: ";
        cin >> choice;

        if (choice == 0){
            cout << "Exiting..." << endl;
            break;
        } else if (choice == 9){
            system("cls");
            continue;
        } else if (choice < 1 || choice > 3){
            cout << "Invalid choice. Please try again." << "\n\n";
            continue;
        } else{
            cout << "Input first numbers: ";
            cin >> num1;
            cout << "Input second numbers: ";
            cin >> num2;
            if (choice == 1) {
                SwapByValue(num1, num2);
                cout << "Swap by Value" << "\n\n";
                cout << "Before swap: num1 = " << num1 << ", num2 = " << num2 << endl;
            }
            else if (choice == 2) {
                SwapByPointer(&num1, &num2);
                cout << "swap by Pointer" << "\n\n";
                cout << "Before swap: num1 = " << num1 << ", num2 = " << num2 << endl;
            }
            else if (choice == 3) {
                SwapByRef(num1, num2);
                cout << "Swap by Reference" << "\n\n";
                cout << "Before swap: num1 = " << num1 << ", num2 = " << num2 << endl;
            }
            cout << "After swap: num1 = " << num1 << ", num2 = " << num2 << endl;
            cout << "----------------------------" << "\n\n";
        }
    }
    return 0;
}