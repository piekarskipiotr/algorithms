#include <iostream>
#include <limits>
using namespace std;

int getNumberFromUser(){
    int a;
    while(!(cin >> a)){
        cout << "Value is not a integer!" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return a;
}

int gcd(int a, int b) {
    int controlValue = 0, lower = 0, temp, nwd;

    if (a > b) {
        controlValue = a;
        lower = b;

    } else if(b > a) {
        controlValue = b;
        lower = a;

    }

    while (true) {
        controlValue = controlValue - lower;

        if (controlValue == 0) {
            nwd = lower;
            return nwd;

        }

        if (controlValue < lower) {
            temp = lower;
            lower = controlValue;
            controlValue = temp;

        }
    }
}

int main() {
    int a, b;

    cout << "Enter first number: ";
	a = getNumberFromUser();   

    cout << "Enter second value: ";
	b = getNumberFromUser();
        
    cout << "Greatest common divisor: " << gcd(a, b) << endl;
}

