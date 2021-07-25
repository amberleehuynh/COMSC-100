
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float hours_charge; // Number of hours charging
    float network1, network2, network3;

    cout << "Enter the expected number of hours charging: ";
    cin >> hours_charge;
    cout << "\n";

    while (hours_charge != -1) {
        cout << "Your expected costs are: ";
        cout << "\n";

        // Formula to find the cost of EACH network
        network1 = (hours_charge * 1.00) + 10;
            cout << "Network 1: $" << fixed << setprecision(2) << network1 << endl;
        network2 = (hours_charge * 2.5);
            cout << "Network 2: $" << fixed << setprecision(2) << network2 << endl;
        network3 = (hours_charge * 0.50) + 20;
            cout << "Network 3: $" << fixed << setprecision(2) << network3 << endl;
            cout << "\n";

        if (network1 < network2 && network1 < network3) {
            cout << "The lowest cost network is Network 1." << endl;
            } else if (network2 < network3 && network2 < network1) {
                cout << "The lowest cost network is Network 2." << endl;
                } else if (network3 < network1 && network3 < network2) {
                    cout << "The lowest cost network is Network 3." << endl;
            }
        cout << "Enter the expected number of hours charging: ";
        cin >> hours_charge;
        cout << "\n";
        }
        cout << "Exiting...";
    return 0;
}
