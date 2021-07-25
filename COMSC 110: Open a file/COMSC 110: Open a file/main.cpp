// In this program we will demonstrate how to open a text file
// and process it line-by-line.

#include <iostream>
#include <fstream> // needed for files
#include <cstdlib> // needed for random number
using namespace std;

const int MAX_NUMBER = 10;

int main() {
  string fname;
  ifstream inFile;
  srand (time(0));

  // Ask the user for a filename, print out an
  // error if the file is invalid and keep asking.

  while (true) {
    cout << "Filename to open? ";
    cin >> fname;
    inFile.open (fname.c_str());
    if (!inFile.good()) {
        cout << "Invalid file. " << endl;
    } else {
        break;
    }

  }
  cout << "File open successful." << endl;
  // Random number in btwn 1 & 10 inclusive
  int rn = rand() % 10 + 1;
  int count = 1;
  string tmp;
  //int averageTweetLength = 0;

  // Your file reading loop should start like this:
  while (getline(inFile, tmp)) {
    if (count == rn) {
        cout << tmp << endl;
        break;
    }
    //int thisTweetLength = tmp.size();
    //averageTweetLength += thisTweetLength;
    count++;
  }
  // double totalAverage = averageTweetLength / count;
 // after hitting 'break' or end of the file
  return (0);
}
