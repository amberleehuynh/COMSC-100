/*
// Chapter 2
#2 Sales prediction

#include <iostream>
#include <iomanip> // for setprecision()

using namespace std;

int main()
{
    double percentage = 0.58;
    double yearly_sales_prediction = 8.6E6;

    // Calc and store the sales prediction for the East Coast sales division

    double east_coast_sales = yearly_sales_prediction * percentage;

    // Print out result w/ 2 decimal places
    cout << setprecision(2) << fixed;
    cout << "The East Coast division will generate $" << east_coast_sales
         << endl;

    return 0;
}


// #18 Energy Drink Consumption
#include <iostream>
#include <iomanip> // setprecision()

using namespace std;

int main()
{
    int surveyed = 16500;
    double paying = 0.15;
    double citrus = 0.58;

    // # of customers in the survey who purchase one or more energy drinks per week
    int paying_customers = surveyed * paying;

    // # of customers in the survey who prefer citrus-flavored energy drinks
    int citrus_customers = paying_customers * citrus;

    // Print out results w/ 2 decimal places
    cout << setprecision(2) << fixed;
    cout << "Number of customers who purchase one or more energy drinks: "
         << paying_customers << endl;
    cout << "Number of customers who perfer citrus drinks: "
         << citrus_customers << endl;

    return 0;
}
 -----------------------------------------------------------------------------------------
*/

/*
// Chapter 3
// #25 Word Game

#include <iostream>
#include <string>

using namespace std;

string name;
string age;
string city;
string college;
string profession;
string animal;
string pet_name;

int main()
{
    cout << "What is his/ her name?: ";
    getline(cin, name);

    cout << "What is his/ her age?: ";
    cin >> age;
    cin.ignore();

    cout << "What is the name of the city?: ";
    getline(cin, city);

    cout << "What is the name of the college?: ";
    getline(cin, college);

    cout << "What is the profession?: ";
    getline(cin, profession);

    cout << "What is the type of animal?: ";
    getline(cin, animal);

    cout << "What is the pet's name?: ";
    getline(cin, pet_name);

    cout << "There once was a person named " << name << " who lived in "
         << city << ".\n" << "At the age of " << age << ", " << name
         << " went to college at " << college << ".\n" << name
         << " graduated and went to work as a " << profession << ".\n"
         << "Then, " << name << " adopted a(n) " << animal << " named "
         << pet_name << ".\n" << "They both lived happily ever after!" << endl;

    return 0;
}


// Tide Tables
#include <iostream>
#include <iomanip> // setw()

using namespace std;

int main()
{
    const string DATE1 = "2019-03-06";
    const string DAY1 = "Wed";
    const string TIME1 = "3:11 PM PDT";
    const float TIDE1 = 5.1;
    const string TYPE1 = "High Tide";

    const string DATE2 = "2019-03-06";
    const string DAY2 = "Wed";
    const string TIME2 = "9:45 PM PDT";
    const float TIDE2 = 0.7;
    const string TYPE2 = "Low Tide";

    cout << setw(11) << left << "DATE"
         << setw(5) << left << "DAY"
         << setw(12) << left << "TIME"
         << setw(5) << left << "TIDE"
         << setw(9) << left << "TYPE" << endl;

    cout << setw(11) << left << DATE1
         << setw(5) << left << DAY1
         << setw(12) << left << TIME1
         << setw(5) << left << TIDE1
         << setw(9) << left << TYPE1 << endl;

    cout << setw(11) << left << DATE2
         << setw(5) << left << DAY2
         << setw(12) << left << TIME2
         << setw(5) << left << TIDE2
         << setw(9) << left << TYPE2 << endl;

    return 0;
}
 -----------------------------------------------------------------------------------------
*/

/*
// Chapter 4
// #20 The Speed of Sound
#include <iostream>
#include <iomanip> // setw()

using namespace std;

int main ()
{
    // Constants for time ranges
    const double MIN_SECS = 0;
    const double MAX_SECS = 30.0;

    // Constants for speeds
    const double AIR = 1100.0;
    const double WATER = 4900.0;
    const double STEEL = 16400.0;

    // Constants for menu choices
    const int AIR_CHOICE = 1;
    const int WATER_CHOICE = 2;
    const int STEEL_CHOICE = 3;

    int choice;
    double distance;
    double speed;
    double time;

    // Display the menu and get a choice
    cout << "Select a medium from the menu\n"
         << "1. Air\n"
         << "2. Water\n"
         << "3. Steel\n"
         << "Enter your choice: ";
    cin >> choice;

    // Set the numeric output formatting
    cout << fixed << showpoint << setprecision(1);

    // Respond to the user's menu choice
    switch (choice)
    {
        case AIR_CHOICE:
            speed = AIR;
            cout << "Enter the number of seconds: ";
            cin >> time;

            // Validate the # of seconds
            if (time >= MIN_SECS && time <= MAX_SECS)
            {
                distance = speed * time;
                cout << "A sound wave travels " << distance
                     << " meters in " << time << " seconds through "
                     << "air\n.";
            }
            else
            {
                cout << "Seconds must be a number between "
                     << MIN_SECS << " and " << MAX_SECS << endl;
            }
            break;

        case WATER_CHOICE:
            speed = WATER;
            cout << "Enter the number of seconds: ";
            cin >> time;

            // Validate the # of seconds
            if (time >= MIN_SECS && time <= MAX_SECS)
            {
                distance = speed * time;
                cout << "A sound wave travels " << distance
                     << " meters in " << time << " seconds through "
                     << "water\n.";
            }
            else
            {
                cout << "Seconds must be a number between "
                     << MIN_SECS << " and " << MAX_SECS << endl;
            }
            break;

        case STEEL_CHOICE:
            speed = STEEL;
            cout << "Enter the number of seconds: ";
            cin >> time;

            if (time >= MIN_SECS && time <= MAX_SECS)
            {
                distance = speed * time;
                cout << "A sound wave travels " << distance
                     << " meters in " << time << " seconds through "
                     << "steel\n.";
            }
            else
            {
                cout << "Seconds must be a number between "
                     << MIN_SECS << " and " << MAX_SECS << endl;
            }
            break;

        default:
            cout << "The valid choice are 1 through 4."
                 << "Run the program again and select one of those\n.";
    }

    return 0;
}



// Guess the secret #

#include <iostream>

using namespace std;

// Our secret # set as a 'const'

const int SECRET = 5;

int main()
{
    int n1;
    int n2;
    int n3;

    // Prompt the user for 3 #s, storing each one in sep integer variable

    cout << "Please enter the first number: " << endl;
    cin >> n1;

    cout << "Please enter the second number: " << endl;
    cin >> n2;

    cout << "Please enter the third number: " << endl;
    cin >> n3;

    // Check each # indiv.

    if (n1 == SECRET)
        cout << "The first number " << n1
             << " matches the secret number." << endl;
    else
        cout << "The first number " << n1
             << " doesn't match the secret number." << endl;

    if (n2 == SECRET)
        cout << "The second number " << n2
             << " matches the secret number." << endl;
    else
        cout << "The second number " << n2
             << " doesn't match the secret number." << endl;

    if (n3 == SECRET)
        cout << "The third number " << n3
             << " matches the secret number." << endl;
    else
        cout << "The third number " << n3
             << " doesn't match the secret number." << endl;

    return 0;
}
 -----------------------------------------------------------------------------------------
*/

/*
// Chapter 5
// #18 Population bar chart

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int population;     // To hold the pop.
    int star;
    ifstream inputFile; // Input file

    // Open the file
    inputFile.open("People.txt");

    // Display the table headings
    cout << "PRAIRIEVILLE POPULATION GROWTH" << endl;
    cout << "(each * represents 1,000 people)" << endl;

    // Display the table data
    for (int year = 1900; year <= 2000; year += 20)
    {
        // Get a value from the file
        inputFile >> population;

        // Display the year
        cout << year << "  ";

        // Display the bar chart
        for (int star = 1; star <= (population / 1000); star++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Close the file
    inputFile.close();

    return 0;
}


// Summing/ averaging numbers in a loop

#include <iostream>

using namespace std;

int main ()
{
    int first, last;
    int total = 0;
    int number;
    float mean;

    cout << "Please enter the first pos. integer: " << endl;
    cin >> first;

    cout << "Please enter the second pos. integer: " << endl;
    cin >> last;

    if (first > 0 && last >= first) {
        for (number = first; number <= last; number++) {
            total = total + number;
        }

        mean = float (total) / (last - first + 1);
        cout << "The mean average of the consecutive pos. integers "
             << " from " << first << " to " << last
             << " is " << mean << endl;
    }


    return 0;
}
 */

