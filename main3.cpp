// Write a program entering integers

// Vad kostar hotellet per natt? 2200
// Hur många nätter?3 
// Det blir 6600kr

#include <iostream>
using namespace std;

int main () {
    int night = 2200;
    int days;

    cout << "How much does a night cost at the hotel?" << endl;
    cout << "It costs" << " " << night << "kr" << endl;
    cout << "How many nights do you want to stay?" << endl;
    cin >> days;
    
    int result = night * days;
    
    cout << "The total cost is " << result << "kr" << endl;
    
}