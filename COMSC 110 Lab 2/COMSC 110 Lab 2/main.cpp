// Lab 2 Grocery Delivery

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    // Declare the tax like this (constant variable)
    const double TAX_RATE = 0.0825;
    double subTotal;
    double tax;
    double total;

    double price1, quantity1, price2, quantity2, price3, quantity3, delivery;

    cout << "Enter the price of item 1: ";
    cin >> price1;
    cout << "Enter the quantity of item 1: ";
    cin >> quantity1;
    cout << "Enter the price of item 2: ";
    cin >> price2;
    cout << "Enter the quantity of item 2: ";
    cin >> quantity2;
    cout << "Enter the price of item 3: ";
    cin >> price3;
    cout << "Enter the quantity of item 3: ";
    cin >> quantity3;
    cout << "Enter the delivery charge: ";
    cin >> delivery;

    subTotal = (price1 * quantity1) + (price2 * quantity2) + (price3 * quantity3) + (delivery);
    cout << "Subtotal: $" << fixed << setprecision(2) << subTotal << endl;

    tax = subTotal * TAX_RATE;
    cout << "Tax: $" << fixed << setprecision(2) << tax << endl;

    total = subTotal + tax;
    cout << "Total: $" << fixed << setprecision(2) << total << endl;


    return 0;
}


