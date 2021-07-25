/*
#include <iostream>

using namespace std;

// This sums up all the #s in the range
// 1...n inclusive that are odd

int SUM_ODD(int NUMBER) {
    if (NUMBER > 0) {
        // Test if n is odd or even
        if (NUMBER % 2 == 0) {
            // In this case the number is even
            return (NUMBER + SUM_ODD(NUMBER - 1)
        } else {
            // In this case the number is odd
            return (NUMBER + SUM_ODD(NUMBER + 1));
            }
        }
    // Else just return 0
    return (0);
}

// Does the same thing as sum_odd except for even numbers:
// sums 1...n inclusive that are even
int SUM_EVEN(int NUMBER) {
    if (NUMBER % 2 == 0) {
        // In this case the number is even
    }
}
   

int main()
{
    int NUMBER;
    string parity;

    cout << "Enter a number from 1 to 50: ";
    cin >> NUMBER;

    cout << "Even or odd? ";
    cin >> parity;

    // If parity is "even", call sum_even()
    // Else call sum_odd()
    int sum;
    if (parity == "even") {
        sum = sum_even(NUMBER);
        else (parity == "odd") {
            sum = sum_odd(NUMBER);
            // call sum_odd here
        }
    }

    cout << "The sum of the " << parity
         << " numbers from 1 to 10 is: " << sum;
    
    return 0;
}
*/

/*
 ---------------------------------------------------------
#include <iostream>

using namespace std;

int sumNumbers(int NUM, string PARITY) {
if (NUM > 0) {
    if (NUM % 2 == 0) {
        if (PARITY == "even") {
            // Make a recursive call
        } else {
            // Make a recursive call
        }
    } else {
        if (PARITY == "odd") {
            // Make a recursive call
        } else {
            // Make a recursive call
            // Check parity value, make another call
        }
        // Stop recursion if n == 0, return 0
        }
    }
    return (0);


// Sums up #s in 1...NUM that are odd
int SUM_ODD(int NUM) {
    if (NUM > 0) {
        // Test if n is odd or even
        if (NUM % 2 == 0) {
            // Number is even
        } else {
            // Number is odd
            return (NUM + SUM_ODD(NUM - 1));
            return (SUM_ODD(NUM - 1));
        }
    }
    return (0);
}

// Sums up #s in 1...NUM that are even
int SUM_EVEN(int NUM) {
    if (NUM > 0) {
        if (NUM % 2 == 0) {
            return (NUM + SUM_EVEN(NUM - 1));
        }
    }
    return (0);
}

------------------------------------------
// Recursive funct that calculates sum
int SUM (int LAST_NUM)
if (LAST_NUM < 0) {
    return 0;
    return LAST_NUMBER + SUM(LAST_NUM - 2)
}


int main ()
{
    // Variables
    int NUM;
    string PARITY;
    
    cout << "Enter a number from 1 to 50: ";
    cin >> NUM;
    
    cout << "Even or odd? ";
    cin >> PARITY;
    
    // If parity is "even", call SUM_EVEN()
    // Else call SUM_ODD()
    int SUM = 0;
    
    // Call function
    if (PARITY == "even") {
        SUM = SUM_EVEN(NUM);
    else (PARITY == "odd") {
            SUM = SUM_ODD(NUM);
        }
    }

    cout << "The sum of the " << PARITY
         << " numbers from 1 to " << NUM
         << " is: " << SUM;
    
    return 0;
}
*/

/*
#include <iostream>

using namespace std;

//recursive function to calulate the sum
int calculateSum(int lastNum)
{
if(lastNum<0)
return 0;
return lastNum + calculateSum(lastNum-2);
}

int main()
{
//variable declaration
int num, sum, lastNum;
string numType;
  
//display message
cout<<"Enter a number from 1 to 50: ";
cin>>num;
  
//display message
cout<<"Even or odd? ";
cin>>numType;
lastNum = num;
  
if(numType=="even" && num%2!=0)
{
lastNum--;
}
  
if(numType=="odd" && num%2==0)
{
lastNum--;
}
  
//function calling
sum = calculateSum(lastNum);
  
//display the output
    cout<< "The sum of the even numbers from 1 to " << num << " is: " << sum << endl;
return 0;
}
*/


   
    

