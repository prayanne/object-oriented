#include <iostream>
#include <string>
using namespace std;

// Function to demonstrate call by value
void callByValue(int a) {
    a += 10;
    cout << "Inside callByValue, a = " << a << endl;
}

// Function to demonstrate call by reference
void callByReference(int &a) {
    a += 10;
    cout << "Inside callByReference, a = " << a << endl;
}

// Function to demonstrate call by pointer
void callByPointer(int *a) {
    *a += 10;
    cout << "Inside callByPointer, a = " << *a << endl;
}

int main() {
    int value = 20;

    cout << "Initial value = " << value << endl;

    // Call by value
    callByValue(value);
    cout << "After callByValue, value = " << value << endl;

    // Call by reference
    callByReference(value);
    cout << "After callByReference, value = " << value << endl;

    // Call by pointer
    callByPointer(&value);
    cout << "After callByPointer, value = " << value << endl;

    // Input some text to check details
    string inputText;
    cout << "Enter some text to check: ";
    cin.ignore(); // Clear input buffer
    getline(cin, inputText);
    cout << "You entered: " << inputText << endl;

    return 0;
}