// Lab 5 Twitter Analyzer

// To read file on CodeBlocks: Download file, drag into home folder, copy file, paste into folder
// To read file on Xcode: https://stackoverflow.com/questions/23438393/new-to-xcode-cant-open-files-in-c (SSteve)
// 1. Select your project; Select Build Phases; Click the '+' button to create a new Build Phase
// 2. Select New Copy Files Build Phase; Select Products Directory; Click the '+' button to add your file
// 3. Click Add Other; Select your input file and click Open; Check the Copy items… checkbox and click Finish

#include <iostream>
#include <fstream> // needed for files
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    string fname;
    ifstream inFile;
    srand (time(0));

    while (true) {
        cout << "Filename to open? ";
        cin >> fname;
        inFile.open (fname.c_str());
    if (!inFile.good()) {
        cout << "Invalid filename, try again. " << endl;
    } else {
        break;
    }

  }
    cout << "Analysis for file tweets.txt: " << endl;
    cout << "\n";

    int total_hashtags = 0;
    int total_tag = 0;
    int total_at = 0;
    int total_IDs = 0;
    int longest_tweet = 0;
    int shortest_tweet = 999;
    int tweet_length = 0;
    int average_tweet = 0;
    double total_number_of_tweets = 0;
    string tweetFile;

    while (getline(inFile, tweetFile)) {
        int total_hashtags = count(tweetFile.begin(), tweetFile.end(), '#');
        total_tag += total_hashtags;

        int total_IDs = count(tweetFile.begin(), tweetFile.end(), '@');
        total_at += total_IDs;

        total_number_of_tweets = total_number_of_tweets + 1;

    if (tweetFile.size() > longest_tweet) {
        longest_tweet = tweetFile.size();
        }
    if (tweetFile.size() < shortest_tweet) {
        shortest_tweet = tweetFile.size();
        }

        int tweet_length = tweetFile.size();
        average_tweet += tweet_length;

    }
    cout << "Hashtags: " << total_tag << endl;
    cout << "Twitter IDs: " << total_at << endl;
    cout << "Total number of tweets: " << total_number_of_tweets << endl;
    cout << "Length of the longest tweet: " << longest_tweet << endl;
    cout << "Length of the shortest tweet: " << shortest_tweet << endl;

    double totalAverage = average_tweet / total_number_of_tweets;
    cout << "Average tweet length: " << fixed << setprecision(2) << totalAverage << endl;

    inFile.close();


  return (0);
}


