#include <iostream>

using namespace std;

// Recursive funct that calc sum
int CALC_SUM(int LAST_NUM)
{
    if (LAST_NUM < 0)
    return 0;
    return LAST_NUM + CALC_SUM(LAST_NUM - 2);
}

int main()
{
    // Variables
    int NUM;
    int LAST_NUM;
    int SUM;
    string PARITY;

    cout << "Enter a number from 1 to 50: ";
    cin >> NUM;

    cout << "Even or odd? ";
    cin >> PARITY;
    LAST_NUM = NUM;

    if (PARITY == "even" && NUM % 2 != 0) {
        LAST_NUM--;
    }

    if (PARITY == "odd" && NUM % 2 == 0) {
        --LAST_NUM;
    }

    // Call the function
    SUM = CALC_SUM(LAST_NUM);

    cout << "The sum of the " << PARITY
         << " numbers from 1 to " << NUM
         << " is: " << SUM;

    return 0;
}

