#include <iostream>
#include <iomanip>

// Write a funct that prints area & perimeter of rectangle,
// given length, width as parameters, 2 digits past the decimal
using namespace std;

void rectangle (double length, double width, double area, double perimeter) {
    area = length * width;
    perimeter = (2 * length) + (2 * width);
}

int main()
{
    double length, width, area, perimeter;
    cout << "Enter the length: ";
    cin >> length;
    cout << "Enter the width: ";
    cin >> width;
    area = length * width;
    perimeter = (length * 2) + (width * 2);
    cout << fixed << setprecision(2) << endl;
    cout << "The area of the rectangle is: " << area << endl;
    cout << "The perimeter of the rectangle is: " << perimeter << endl;

    return 0;
}

/*
#include <iostream>
#include <iomanip>

// Write a funct that prints area & perimeter of rectangle,
// given length, width as parameters, 2 digits past the decimal
using namespace std;

void rectangle (double length, double width, double area, double perimeter) {
    area = length * width;
    perimeter = (2 * length) + (2 * width);
    cout << fixed << setprecision(2) << endl;
    cout << "The area of the rectangle is: " << area << endl;
    cout << "The perimeter of the rectangle is: " << perimeter << endl;

}

int main()
{
    cout << "Calling the funct with 5, 7: "
         << rectange (5,7) << endl;

    return 0;
}

*/

