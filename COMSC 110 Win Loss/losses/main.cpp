#include <iostream>
#include <iomanip>
// GSW 57-25; Write a funct that accepts team's wins & losses

using namespace std;

// Return the win/ loss percentage given the amt of wins & losses
double win_Loss_Percentage(int wins, int losses) {
    double pct;

    // Alt. way to cast a double
    // pct = static_cast<double> (wins) / (wins + losses);
    pct = (double) wins/ (wins + losses); // cast interpreted as if wins were double
    pct *= 100;
    return (pct);

}

int main()
{
    int wins, losses;
    double pct;
    cout << "Enter number of wins: ";
    cin >> wins;
    cout << "Enter number of losses: ";
    cin >> losses;

    pct = win_Loss_Percentage (wins, losses);
    cout << fixed << setprecision(2) << endl;
    cout << "The win/ loss percentage is: " << pct << endl;

    return 0;
}

