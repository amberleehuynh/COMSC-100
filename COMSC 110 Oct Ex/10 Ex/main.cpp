#include <iostream>
using namespace std;

// This funct prints its only parameter
// Returns double the value
int printItandDouble (int num) {
    cout << num << endl;
    num = num * 2;
    return (2 * num);
}

int main()
{
    int z;
    int j = 15;
    cout << "Before printIt." << endl;
    cout << "j is: " << j << endl;
    z = printItandDouble(j);
    cout << "j is: " << j << endl;
    cout << "z is: " << z << endl;
    cout << "After printIt." << endl;
    return 0;
}

-------------------------------------------------------
 #include <iostream>
 using namespace std;


 // Return the average of 3 #s
 double getAverage (double n1, double n2, double n3) {
     double avg;
     avg = (n1 + n2 + n3) / 3.0;
     return (avg);
 }

 int main()
 {
     double a;

     a = getAverage (10.0, 20.0, 30.0);
     cout << a << endl;

     return 0;
 }
 
 -------------------------------------------------------
 #include <iostream>
 using namespace std;

 double getAverage (double, double, double);

 int main()
 {
     double a;

     a = getAverage (10.0, 20.0, 30.0);
     cout << a << endl;

     return 0;
 }

 // Return the average of 3 #s
 double getAverage (double n1, double n2, double n3) {
     double avg;
     avg = (n1 + n2 + n3) / 3.0;
     return (avg);
 }
 
-------------------------------------------------------
 #include <iostream>
 using namespace std;


 // Calc. the average of 3 #s
 void getAverage (double n1, double n2, double n3, double &avg) {
     avg = (n1 + n2 + n3) / 3.0;
 }

 int main()
 {
     double a = 1.0;
     cout << "a is: " << a << endl;
     getAverage (10.0, 20.0, 30.0, a);
     cout << "a is: " << a << endl;
     cout << a << endl;

     return 0;
 }
