#include <iostream>
#include <fstream> // needed for files
#include <string>

using namespace std;

int main() {

    // Open file
    string fname;
    ifstream inFile;

    while (true) {
        cout << "Filename? ";
        cin >> fname;
        inFile.open (fname.c_str());
    if (!inFile.good()) {
        cout << "Invalid filename, try again. " << endl;
    } else {
        break;
    }
  }

    int num;
    int *numPtr;
    cout << "How many numbers to read from the file? ";
    cin >> num;
    cout << "Read " << num << " numbers from numbers.txt" << endl;


    // Allocate the array memory dynamically
    // Using pointer to integer array
    int myNumber;
    numPtr = new int[num];

    // Read 'num' lines w/ streaming operator '>>'
    for (int i = 0; i < num; i++) {
        inFile >> numPtr[i];
    }

    cout << "Which number should I look for? ";
    cin >> myNumber;

    // Only search through the numbers requested by the user
    bool found = false;
    for (int i = 0; i < num; i++) {
        if (myNumber == numPtr[i])
            found = true;
    }

    if (found == true)
        cout << "The number is in the array." << endl;
    else
        cout << "The number is not in the array." << endl;

    // Free the memory
    delete[] numPtr;

    inFile.close();

    return 0;
}

