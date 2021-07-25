// Lab 9 Random Numbers

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int counters[100] = { 0 };
    int array[50];

    // Seed the random # generator

    srand(time(0));

    cout << "Array of 50 random numbers: " << endl;

    // A loop to fill the array w/ random #s

    for (int i = 0; i < 50; i++) {
        array[i] = rand() % 100;
    }

    // Print a newline every 10 #s
    // Second way

    for (int i = 0; i < 50; i++) {
        cout << array[i] << " ";
        if ((i + 1) % 10 == 0) {
            cout << endl;
        }
    }

    // A loop to count the most frequent #
    // (how many times it appears + which one)

    for (int i = 0; i < 50; i++) {
        counters[ array[i] ] += 1;
    }

    // A loop to output the array to the screen

    int max_index = 0;
    for (int i = 0; i < 100; i++) {
        if (counters[i] > counters[max_index]) {
            // Save the index of that element (which one)
            max_index = i;
        }
    }

    cout << "\n";
    cout << "The most common number is " << max_index << ","
         << " which appears " << counters[max_index] << " times."
         << endl;

    return 0;
}

