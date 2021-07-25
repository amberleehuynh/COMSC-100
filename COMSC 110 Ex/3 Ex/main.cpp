#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
        cout << "Number: " << i << endl;

    return 0;
}

---------------------------------------------
#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    while (i < 5) {
        cout << "Number: " << i << endl;
        i++;
    }

    return 0;
}

---------------------------------------------
#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    do {
        cout << "Number: " << i << endl;
        i++;
        if (i == 4)
            break;
    } while (i < 5);
    // After the break, we will be here

    return 0;
}
