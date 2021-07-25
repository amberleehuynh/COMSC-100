#include <iostream>

using namespace std;

int main()
{
    int main () {
        int myArray[5];

        myArray[0] = 100;
        myArray[1] = 200;
        myArray[2] = 300;
        myArray[3] = 400;
        myArray[4] = 500;

        Cout << myArray[0] << endl;
    }
    return 0;
}
----------------------------------------------

#include <iostream>

using namespace std;

int main()
{
    int main () {
        while (true) {
            string request;
            cout << "Which country? ";
            getline(cin, request);
            if (request == "end")
                break;
            int i;
            for (int i = 0; i < 8; i++) {
                if (countries[i] == request)
                    break;
            }
            // In this case we didn't find a match for the country
            if (i == 8) {
                cout << "That's not a country." << endl;
                continue;
            }

            // Now we know that a country was found in the array
            string answer;
            answer = capitals[i];
            cout << "The capital of " << request << " is " << answer << "."
                 << endl;
    }
    return 0;
}

