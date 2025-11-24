// For each (primitive) datatypes (char, short int, int, long, float, double) 
// print min and maxvalue according to the table below: 
// (NOTE: remember both signed and unsigned)

#include <iostream>
#include <climits>
#include <cfloat>
#include <cstdint>
using namespace std;

int main() {
    cout << "=== CHAR ===" << endl;
    cout << "signed char min: " << SCHAR_MIN << endl;
    cout << "signed char max: " << SCHAR_MAX << endl;
    cout << "unsigned char max: " << UCHAR_MAX << endl;
    cout << endl;
    
    cout << "=== SHORT INT ===" << endl;
    cout << "signed short min: " << SHRT_MIN << endl;
    cout << "signed short max: " << SHRT_MAX << endl;
    cout << "unsigned short max: " << USHRT_MAX << endl;
    cout << endl;
    
    cout << "=== INT ===" << endl;
    cout << "signed int min: " << INT_MIN << endl;
    cout << "signed int max: " << INT_MAX << endl;
    cout << "unsigned int max: " << UINT_MAX << endl;
    cout << endl;
    
    cout << "=== LONG ===" << endl;
    cout << "signed long min: " << LONG_MIN << endl;
    cout << "signed long max: " << LONG_MAX << endl;
    cout << "unsigned long max: " << ULONG_MAX << endl;
    cout << endl;
    
    cout << "=== FLOAT ===" << endl;
    cout << "float min: " << FLT_MIN << endl;
    cout << "float max: " << FLT_MAX << endl;
    cout << endl;
    
    cout << "=== DOUBLE ===" << endl;
    cout << "double min: " << DBL_MIN << endl;
    cout << "double max: " << DBL_MAX << endl;
    
    return 0;
}
