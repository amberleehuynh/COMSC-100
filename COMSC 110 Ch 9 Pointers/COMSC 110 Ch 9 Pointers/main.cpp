/*
#include <iostream>

using namespace std;

int main()
{
    int *intPtr; // Holds memory address
    int a;       // Holds a value

    intPtr = &a;
    *intPtr = 100;

    cout << a << endl;

    return 0;
}
-------------------------------------
*/

/*
#include <iostream>

using namespace std;

int main()
{
    int *intPtr; // Holds memory address
    int a;       // Holds a value

    intPtr = &a;
    *intPtr = 100;

    cout << &a << endl;

    return 0;
}
----------------------------------
*/

/*
#include <iostream>

using namespace std;

int main()
{
    int *intPtr; // Holds memory address
    int a;       // Holds a value

    intPtr = &a;
    *intPtr = 100;

    cout << *intPtr << endl; // W/o * prints out address

    return 0;
}
----------------------------------
*/

/*
#include <iostream>

using namespace std;

int main()
{
    int *intPtr;      // Holds memory address
    int n = 10;       // Holds a value

    intPtr = new int[n];
    cout << intPtr << endl;

    // Free the memory
    delete[] intPtr;

    return 0;
}
--------------------------------
*/

/*
#include <iostream>

using namespace std;

int main()
{
    int *intPtr;  // Holds memory address
    int n;

    cout << "Enter a number and I'll make an array of that size: ";
    cin >> n;
    intPtr = new int[n];
    cout << "The memory address of the new array is: ";
    cout << intPtr << endl;
    cout << endl;

    // Free the memory
    delete[] intPtr;

    return 0;
}
---------------------------------------
*/

/*
#include <iostream>

using namespace std;

// This funct accepts an array & copies it
// into dynamic memory
int *copyArray(int *myArray, int n) {
    int *newCopy;
    newCopy = new int[n];
    for (int i = 0; i < n; i++)
        newCopy[i] = myArray[i];
    return (newCopy);
}

int main()
{
    int *intPtr;  // Holds memory address
    int n;
    int myArray[3] = { 10, 20, 30 };
    int *newArray = copyArray(myArray, 3);
    for(int i = 0; i < n; i++)
        cout << newArray[i] << endl;

    cout << "Enter a number and I'll make an array of that size: ";
    cin >> n;
    intPtr = new int[n];
    cout << "The memory address of the new array is: ";
    cout << intPtr << endl;
    cout << endl;

    // Free the memory
    delete[] intPtr;

    return 0;
}
------------------------------------
*/

/*
#include <iostream>

using namespace std;

// This funct accepts an array & copies it
// into dynamic memory
int *copyArray(int *myArray, int n) {
    int *newCopy;
    newCopy = new int[n];
    for (int i = 0; i < n; i++)
        newCopy[i] = myArray[i];
    return (newCopy);
}

int main()
{
    int n;
    double *numPtr;

    cout << "Enter a number and I'll make an array of that size: ";
    cin >> n;

    numPtr = new double[n];
    delete [] numPtr;

    return 0;
}
----------------------------------
*/

/*
#include <iostream>
#include <iomanip>

using namespace std;

// This funct accepts an array & copies it
// into dynamic memory
int *copyArray(int *myArray, int n) {
    int *newCopy;
    newCopy = new int[n];
    for (int i = 0; i < n; i++)
        newCopy[i] = myArray[i];
    return (newCopy);
}

int main()
{
    int *intPtr;  // Holds memory address
    double *numPtr;
    int n;

    // Asks user for a size (3)
    cout << "Enter a number and I'll make an array of that size: ";
    cin >> n;

    // Makes a dynamic array of doubles of that size
    numPtr = new double [n];

    // Loops to ask user for each value
    for (int i = 0; i < n; i++) {
        cout << "Enter the number #" << i + 1 << " ";
        cin >> numPtr[i];
    }

    // Find the avg of the val
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += numPtr[i];
    }
    total /= n;
    cout << "The average of those numbers is: "
         << fixed << setprecision(2)
         << total << endl;

    // Free the memory
    delete[] numPtr;

    return 0;
------------------------------
}
*/

/*
#include <iostream>

using namespace std;

int main ()
{
    int a = 5;
    int *intPtr = &a

    cout << intPtr << endl; // Prints memory address
    // cout << *intPtr << endl; Prints value/ contents

    intPtr = new int[100]; // Dynamic memory
    // Dif than int num = 100 bc it's static

    return 0;
    -----------------------------------
}
*/

#include <iostream>

using namespace std;

int main ()
{
    int a = 5;
    int *intPtr = &a;
    int **array2d;
    int myArray[100];

    cout << *intPtr << endl;


    num += 10;
    intPtr = new int[num];
    for (int i = 0; i < num; i++)
        intPtr[num] = 0;

    array2d = new int*[num];
    for (int i = 0; i < num; i++)
        array2d[i] = new int[num];

    // We're done with our arrays
    delete [] intPtr;

    return 0;
}

