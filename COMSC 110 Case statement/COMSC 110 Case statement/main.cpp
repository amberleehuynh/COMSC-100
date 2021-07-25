#include <iostream>
#include  <ctime>
#include <cstdlib>
// This demonstrates the use of a case statement

using namespace std;

int main()
{
    int ans;
    cout << "1. Baseball" << endl;
    cout << "2. Hockey" << endl;
    cout << "3. Volleyball" << endl;
    cout << "4. Soccer" << endl;
    cout << "5. American Football" << endl;
    cout << "6. Euro Football" << endl;
    cout << "What's your favorite sport?" <<;
    cin >> ans;
    switch (ans):
    case 1:
        cout << "You chose baseball." << endl;
        break;
    case 2:
        cout << "You chose hockey." << endl;
        break;
    case 3:
        cout << "You chose volleyball." << endl;
        break;
    case 6:
        cout << "I'm going to call it soccer." << endl;
    case 4: // fall through
        cout << "You chose soccer." << endl;
        break;
    default:
        cout << "Incorrect choice!" endl;

    return 0;
}

