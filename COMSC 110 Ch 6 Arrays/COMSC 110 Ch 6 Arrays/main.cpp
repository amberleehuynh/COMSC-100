// Your co is devel a new mobile app that rec top music artists
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
    ifstream file1("file1.txt");
    string artist[10];
    string listeners_per_month[10];
    string countries[10];

    if (!file1.good()) {
        cout << "Invalid file #1." << endl;
        return (0);
    }
    for (int i = 0; i < 10; i++) {
        string tmp;
        getline(file1, tmp); // read spaces in btwn names
        artist[i] = tmp;
        // Discard the next line
        getline(file1, tmp);
    }
    // We're done with that file
    file1.close();
    ifstream file2("file2.txt");
    for (int i = 9; i >= 0; i--) {
        string tmp;
        getline(file2, tmp);
        listeners_per_month[i] = tmp;
        getline(file2, tmp);
    }
    file2.close();
    ifstream file3("file3.txt");
    for (int i = 0; i < 10; i++) {
        string tmp;
        getline(file3, tmp);
        countries[i] = tmp;
    }
    file3.close();
    cout << left << setw(6)
         << "Rank"
         << setw(20)
         << "Artist"
         << setw(20)
         << "Listeners/month"
         << setw(3)
         << "Country"
         << endl;

    for (int i = 0; i < 10; i++) {
        cout << left << setw(6)
         << i + 1
         << setw(20)
         << artist[i]
         << setw(20)
         << listeners_per_month[i]
         << setw(3)
         << countries[i]
         << endl;
    }

    return 0;
}

