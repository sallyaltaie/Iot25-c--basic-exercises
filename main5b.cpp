// Create an application  where the user enters two integers
//  Enter number 1:
// Store it in a variable
// Enter number 2:
// Store it in another variable tal 
// Print – The sum of <tal1>and <tal2>  is: <sum>
// where <tal>, <tal2> and <sum> represents the variables of course

#include <iostream>
using namespace std;

int main() {
    int num1;
    int num2;
    int sum;

    cout << "Enter number 1: " << endl;
    cin >> num1; 
    cout << "Enter number 2: " << endl;
    cin >> num2;

    sum = num1 + num2;

    cout << "The sum of number 1 and numer two is " << sum << endl;
}