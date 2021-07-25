// Lab 12 Ranked Choice Voting

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>

// 3 elections in the file
// 15 lines

using namespace std;
const char *FILENAME = "elections.txt";
const int MAXBALLOTS = 500;
const int LINES_PER_BALLOT = 3;

int main()
{
    string tmp;
    int ballots[MAXBALLOTS * LINES_PER_BALLOT];
    ifstream inFile(FILENAME); // Open the file
    int nBallots = 0;
    int nLines = 0;

    // Make sure file is open
    if (!inFile.good()) {
        cout << "Error opening file." << endl;
        return (-1);
    }
    cout << "File is opened." << endl;

    // Read each line from the file
    while (getline(inFile, tmp)) {
        cout << "Reading next election..." << endl;
        cout << "\n";
        nLines = 0;
        // First read the # of ballots
        nBallots = atoi(tmp.c_str()) / LINES_PER_BALLOT; // atoi convert string to int
        // Read each ballot
        for (int i = 0; i < nBallots; i++) { // Run this many ballets into array
            for (int j = 0; j < LINES_PER_BALLOT; j++) { // Need to read 3 lines
                // Read a line
                getline(inFile, tmp);
                // Put it in the array
                ballots[nLines++] = atoi(tmp.c_str());
            }
        }
         // Output the ballots so we know what was read
         nLines = 0;
         for (int i = 0; i < nBallots; i++) {
            cout << "Ballot #" << i + 1 << endl;
            for (int j = 0; j < LINES_PER_BALLOT; j++) {
                cout << "  " << ballots[nLines++] << endl;
            }
         }

        // 1) Run the first round. Count all the first choice votes
        int cand1 = 0, cand2 = 0, cand3 = 0;
        for (int i = 0; i < nLines; i += 3) {
            // if (ballots[i] == eliminated) 2nd loop
            // vote = ballots[i+1];
            if (ballots[i] == 1)
                cand1++;
            else if (ballots[i] == 2)
                cand2++;
            else
                cand3++;
        }

        // 2) See if there is a majority (one candidate got more than 50%)
        cout << "\n";
        double pct1, pct2, pct3;
        pct1 = (double)cand1 / nBallots;
        pct2 = (double)cand2 / nBallots;
        pct3 = (double)cand3 / nBallots;
        cout << "Percentages: " << endl;
        cout << fixed << setprecision(2);
        cout << "Candidate 1: " << pct1 * 100 << "%" << endl;
        cout << "Candidate 2: " << pct2 * 100 << "%" << endl;
        cout << "Candidate 3: " << pct3 * 100 << "%" << endl;

        cout << "\n";
        cout << "Read 5 ballots." << endl;

        if ((pct1 < 0.5) && (pct2 < 0.5) && (pct3 < 0.5)) {
            // 4) If not, eliminate the lowest scoring candidate
            int k = 501;
            int eliminated;
            for (int i = 0; i < nLines; i += 3) {
                if (votes[i] == k)eliminated[i] = true;
            }

            // 5) Repeat steps 1-4 using the next choice of a voter picked an eliminated candidate
            int vote[i];
            for (int i = 0; i < nLines; i += 3) {
            if (ballots[i] == eliminated) {
                if (eliminated == vote[i+1])
                    vote = ballots[i+1];
                if (vote == 1)
                    cand1++;
                else if (vote == 2)
                    cand2++;
                }
            }

            for (int i = 0; i < nLines; i += 3) {
            if (ballots[i] == eliminated) {
                if (eliminated == vote[i+1])
                    vote = ballots[i+1];
                if (vote == 1)
                    cand1++;
                else if (vote == 3)
                    cand3++;
                }
            }

        } else {
            // 3) If so, the election ends & output the winner
            if (pct1 > 0.5)
                cout << "Candidate #1 " << pct1 << "wins." << endl;
            else if (pct2 > 0.5)
                cout << "Candidate #2 " << pct2 << "wins." << endl;
            else if (pct3 > 0.5)
                cout << "Candidate #3 " << pct3 << "wins." << endl;
        }

            // 6) The process should run twice at most
    }
    return 0;
}

