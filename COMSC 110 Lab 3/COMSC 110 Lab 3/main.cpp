// Lab 3 Troubleshooting Decision Tree

#include <iostream>

using namespace std;

int main() {
  
char question1, question2, question3, question4;

cout << "Is the car silent when you turn the key? ";
cin >> question1;
  if (question1 == 'y') {
    cout << "Are the battery terminals corroded? ";
    cin >> question2;
      if (question2 == 'y') {
        cout << "Clean the terminals and try starting again. ";
      }
      else {
        // The user entered NO to the question
        cout << "Replace the cables and try again. ";
      }
    
    } else {
      // The user entereed NO to the question
      cout << "Does the car make a clicking sound? ";
      cin >> question3;
        if (question3 == 'y') {
          cout << "Replace the battery. ";
            } else {
              // The user entered NO to the question
              cout << "Does the car crank up but fail to start? ";
              cin >> question4;
                if (question4 == 'y') {
                  cout << "Check the spark plug connections. ";
                    } else {
                      // The user entered NO to the question
                      cout << "Take the car in for service. " << endl;
                }
           }
    }
    return 0;
}

