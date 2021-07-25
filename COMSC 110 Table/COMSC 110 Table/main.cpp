#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const string CITY1 = "Concord";
    const string YEAR1 = "1905";
    const float SIZE1 = 30.54;
    const int POP1 = 122068;

    const string CITY2 = "Martinez";
    const string YEAR2 = "1876";
    const float SIZE2 = 13.63;
    const int POP2 = 35824;

    cout << setw(14) << left << "CITY"
         << setw(10) << left << "YEAR"
         << setw(10) << left << "AREA"
         << setw(10) << left << "POPULATION" << endl;
    cout << "____________________________________________" << endl;

    cout << setw(14) << left << CITY1
         << setw(10) << left << YEAR1
         << setw(10) << left << SIZE1
         << setw(10) << left << POP1 << endl;

    cout << setw(14) << left << CITY2
         << setw(10) << left << YEAR2
         << setw(10) << left << SIZE2
         << setw(10) << left << POP2 << endl;



    return 0;
}

