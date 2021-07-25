/*
#include <iostream>

using namespace std;

// Return the n'th fibonacci number
// fib(0) = 0
// fib(1) = 1
// fib(n) = fib(n-1) = fib(n-2)

int fib(int n) {
    if (n == 0)
        return (0);
    if (n == 1)
        return (1);
    return (fib(n - 1) + fib (n - 2));
}

// Sum up all the numbers in an array recursively
int sum_all_numbers(int a[], int len) {
    cout << "sum_all_numbers (a, " << len << ")" << endl;

    if (len == 0)       // Base case
        return (0);

    return (a[len - 1] + sum_all_numbers(a, len - 1));
}

// Print a string backwards
void print_string_backwards (string s, int index) {

    if (index == 0){
        cout << endl;
        return;
    }

    // Print the last element of this string
    cout << s[index - 1];

    // Delegate the rest of the printing to the next recursive call
    print_string_backwards(s, index - 1);

}

int main()
{
    int array[5] = { 10, 20, 30, 40, 50 };
    string s = "testing";

    cout << "fib(10) is: " << fib(10) << endl;
    cout << "The sum of the array numbers is: "
         << sum_all_numbers(array, 5) << endl;
    cout << "The string backwards is: " << endl;
    print_string_backwards(s, s.size());

    return 0;
}
----------------------------------------------------------
*/


#include <iostream>

using namespace std;

// Return the n'th fibonacci number
// fib(0) = 0
// fib(1) = 1
// fib(n) = fib(n-1) = fib(n-2)
int fib(int n) {
    if (n == 0)
        return (0);
    if (n == 1)
        return (1);
    return (fib(n - 1) + fib (n - 2));
}

// Sum up all the numbers in an array recursively
int sum_all_numbers(int a[], int len) {
    cout << "sum_all_numbers (a, " << len << ")" << endl;

    if (len == 0)       // Base case
        return (0);

    return (a[len - 1] + sum_all_numbers(a, len - 1));
}

// Print a string backwards
void print_string_backwards (string s, int index) {

    cout << "String of length: " << index << endl;
    cout << "The character is: " << s[index - 1] << endl;
    if (index == 0){
        //cout << endl;
        return;
    }

    // Print the last element of this string
    //cout << s[index - 1];

    // Delegate the rest of the printing to the next recursive call
    print_string_backwards(s, index - 1);
    cout << "(after) String of length: " << index << endl;
    cout << "(after) the character is: " << s[index - 1] << endl;

}

// Iterative version of above funct
void print_string_backwards2(string s) {
    for (int i = s.size() - 1; i >= 0; i--) {
        cout << s[i];
    }
    cout << endl;
}

int main()
{
    int array[5] = { 10, 20, 30, 40, 50 };
    string s = "testing";

    cout << "fib(10) is: " << fib(10) << endl;
    cout << "The sum of the array numbers is: "
         << sum_all_numbers(array, 5) << endl;
    cout << "The string backwards is: " << endl;
    print_string_backwards(s, s.size());

    return 0;
}


