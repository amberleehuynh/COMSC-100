#include <iostream>

// Earthquake travles 500 m/s. Write funct that returns
// how many sec you will wait for an earthquake to reach you

using namespace std;

const MILES_TO_METERS = 1 / 0.000629;
const EARTHQUAKE_SPEED = 5000;
// Returns number of seconds to reach us given
// dist from epicenter in miles
double (time_to_reach) (double miles); {
    double meters;
    double secs;

    meters = miles * MILES_TO_METERS;
    secs = meters / EARTHQUAKE_SPEED;
    return (secs);
}

int main()
{
    double secs;
    int miles_from_epicenter = 10;

    secs = time_to_reach(miles_from_epicenter);
    cout << "Number of seconds to reach us: " << secs << endl;

    // In this other way, we don't need a var to store the return value of time_to_reach()
    // cout << "Number of seconds to reach us: "
    //      << time_to_reach(miles_from_epicenter) << endl;

    return 0;
}

