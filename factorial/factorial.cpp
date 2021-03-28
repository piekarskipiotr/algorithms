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

long factorial(int n){
    if (n < 2)
        return 1;

    return n * factorial(n - 1);
}

int main() {
    int n;
    cout << "Enter value of n: ";
    n = getNumberFromUser();

    cout << "Factorial " << n << "! is equals to: " << factorial(n) << endl;
}

