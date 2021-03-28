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

long fibonacci(int n){
    if (n > 1)
        return fibonacci(n - 2) + fibonacci(n - 1);
    else
        return n;
}


int main() {
    int n;
    cout << "Enter value of n: ";
    n = getNumberFromUser();

    cout << "The result of the Fibonacci sequence for the given number" << n << " is equals to: " << fibonacci(n) << endl;
}

