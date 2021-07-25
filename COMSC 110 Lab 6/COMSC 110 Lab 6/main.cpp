#include <iostream>
#include <iomanip>

using namespace std;

const double BTC_CONVERSION = 0.00012;
const double CAD_CONVERSION = 1.33;
const double MXN_CONVERSION = 19.57;

// This funct. converts 'amt' to dollars to the amt. in BTC,
// less the service charge handling
double dollars_to_BTC(double amt) {
    double service_charge;
    double amt_to_exchange;
    if (amt > 1000)
        service_charge = (.05 * 1000) + (.025 * (amt - 1000));
    else
        service_charge = .05 * amt;
    amt_to_exchange = amt - service_charge;

    return (amt_to_exchange * BTC_CONVERSION);
}
// This funct. converts 'amt' to dollars to the amt. in CAD,
// less the service charge handling
double dollars_to_CAD(double amt) {
    double service_charge;
    double amt_to_exchange;
    if (amt > 1500)
        service_charge = (.07 * 1500) + (.05 * (amt - 1500));
    else
        service_charge = .07 * amt;
    amt_to_exchange = amt - service_charge;

    return (amt_to_exchange * CAD_CONVERSION);
}
// This funct. converts 'amt' to dollars to the amt. in MXN,
// less the service charge handling
double dollars_to_MXN(double amt) {
    double service_charge;
    double amt_to_exchange;
    if (amt > 1200)
        service_charge = (.06 * 1200) + (.035 * (amt - 1200));
    else
        service_charge = .06 * amt;
    amt_to_exchange = amt - service_charge;

    return (amt_to_exchange * MXN_CONVERSION);
}

int main()
{
    double amt;

    cout << "Welcome to the Currency Exchange Service. " << endl;
    cout << "I can exchange Dollars for Bitcoin, Canadian Dollars or " << endl;
    cout << "Mexican Pesos. " << endl;

    for (;;) {
        cout << "Please input the amount in USD to exchange (-1 to quit) : ";
        cin >> amt;
        if (amt == -1)
            break;
        cout << fixed << setprecision(2) << endl;
        cout << "$" << amt << " USD can be exchanged for: " << endl;

        cout << "BTC: " << dollars_to_BTC(amt) << endl;
        cout << "CAD: " << dollars_to_CAD(amt) << endl;
        cout << "MXN: " << dollars_to_MXN(amt) << endl;
        cout << "\n";
    }

    return 0;
}

