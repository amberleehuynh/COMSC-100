#include <iostream>
#include <iomanip>
// Reservoir calculator

using namespace std;

    // Capacity according to:
    // https: //en.wikipedia.org/wiki/Los_Vaqueros_Reserboir

    const double CAPACITY = 160000.0;

int main()
{
    // int number:
    int nAcreFeet;
    double percentCapacity;

    cout << endl;
    cout << "Los Vaqueros Reservoir" << endl;
    cout << "Capacity Calculator" << endl;
    cout << "___________________________________" << endl;
    cout << "Input the current number of acre-feet: ";
    cin >> nAcreFeet;

    percentCapacity = nAcreFeet / CAPACITY;
    cout << "The reservoir is at " << fixed
         << setprecision(2)
         << percentCapacity * 100 << "% capacity." << endl;


    return 0;
}

