// The user should be able to enter first- and lastname. 
// It should look like this:
// Try with name 
// Per Erik
// Not working (getline!)

#include <iostream>
using namespace std;

int main () {
    string firstName;
    string lastName;

    cout << "Write your first name" << endl;

    // Getline read the whole input (ex if you write sally altaie)
    // cin --> reads only to first space
    getline(cin,firstName);
    cout << "Write your last name" << endl;
    getline(cin,lastName);
    cout << "Your name is " << lastName << "," << firstName << endl;
}

