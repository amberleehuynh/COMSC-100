#include <iostream>

// Write a funct w/ reference variables that converts Celcius to
// Fahrenheit w/ formula: (9/5C
using namespace std;

void CtoF (double degCelcius, double &result) {
    double converted = ((9.0/5.0) * degCelcius) + 32.0;

    // This sets the caller's copy of 'result' to the value
    // 'converted' that we calculated here
    result = converted;
}

int main()
{
    double myResult = 0;

    cout << "myResult before the call to CtoF: " << myResult << endl;

    CtoF (10, myResult);

    cout << "Degrees F: " << myResult << endl;
    return 0;
}

