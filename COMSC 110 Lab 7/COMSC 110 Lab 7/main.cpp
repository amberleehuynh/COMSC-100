// Lab 7 More on Functions

#include <iostream>
#include <iomanip> // setprecision()

using namespace std;

double getAverage(int integer1, int integer2, int integer3) {

    double average;
    average = (integer1 + integer2 + integer3) / 3.0;
    return (average);
}

int getMedian(int integer1, int integer2, int integer3) {

    int median;
    if (integer1 > integer2 && integer1 < integer3) {
        median = integer1;
        }
    if (integer3 > integer1 && integer3 < integer2) {
        median = integer3;
        }
    if (integer2 > integer1 && integer2 < integer3) {
        median = integer2;
        }
    return (median);

}

int countDigits(int integer1, int integer2, int integer3) {

    int sum;
    sum = integer1 + integer2 + integer3;

    int a = sum;
    int cnt = 0;

    while (a > 0) {
        a /= 10.0;
        cnt++;
    }
    return (cnt);
}

int main()
{
    int integer1, integer2, integer3;
    int median;
    int sum;
    int cnt;
    double average;

    while (true) {
        cout << "Enter 3 integers: " << endl;
        // Output an error if there are neg. numbers
        // Retry if there are neg. numbers

        cin >> integer1;
        if (integer1 < 0) continue;
        cin >> integer2;
        if (integer2 < 0) continue;
        cin >> integer3;
        if (integer3 < 0) continue;
        break;
    }

        cout << "\n";
        average = getAverage (integer1, integer2, integer3);
        cout << fixed << setprecision(2);
        cout << "The average is " << average << "." << endl;

        median = getMedian (integer1, integer2, integer3);
        cout << fixed << setprecision(1);
        cout << "The median is " << median << "." << endl;

        sum = integer1 + integer2 + integer3;
        cout << fixed << setprecision(1);
        cout << "The sum of these numbers is " << sum << ".";

        cnt = countDigits (integer1, integer2, integer3);
        cout << fixed << setprecision(1);
        cout << " There are " << cnt << " digits in that number."
             << endl;

    return 0;
}

