// Random Number Generator
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{

    int r;

    const int MAXNUM = 100;
    srand(time(0));
    r = rand() % MAXNUM;

    cout << r << endl;

    return 0;

}

