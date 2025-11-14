// Charles Edge
// CS310-T301
// M10: Assignment
// Source CH12, Programming Exercise 3
// Remade programming excercise 7 of Ch 8 using dynamic arrays

#include <iostream>
#include <string>
#include <iomanip> 

using namespace std;

int main() {
    int numCand;

    cout << "\n*****************************************\n";
    cout << "         CANDIDATE PARTICIPATION";
    cout << "\n*****************************************\n\n";
// User enters number of candidates
    cout << "Enter the number of candidates that will participate in the election: ";
    cin >> numCand;

// Creates dynamic array

    string* cand = new string[numCand];
    int* votes = new int[numCand];
    int totalVotes = 0;

    cout << "\n*****************************************\n";
    cout << "           CANDIDATE INFORMATION";
    cout << "\n*****************************************\n\n";
    for (int i = 0; i < numCand; ++i) {
        cout << "Enter the last name of candidate #" << i + 1 << ": ";
        cin >> cand[i];
        cout << "Enter the number of votes received by " << cand[i] << ": ";
        cin >> votes[i];

        totalVotes += votes[i];
    }

// Outputs the results
    cout << "\n*****************************************\n";
    cout << "          ELECTION RESULTS";
    cout << "\n*****************************************\n\n";
    cout << left << setw(20) << "Candidate Name"
        << right << setw(10) << "Votes"
        << right << setw(15) << "Percentage" << endl;
    cout << string(45, '-') << endl;

    for (int i = 0; i < numCand; ++i) {
        double percentage = 0.0;

// Calculate percentage
        if (totalVotes > 0) {
            percentage = (static_cast<double>(votes[i]) / totalVotes) * 100.0;
        }

        cout << left << setw(20) << cand[i]
            << right << setw(10) << votes[i]
            << right << fixed << setprecision(2) << setw(13) << percentage << "%\n";
    }

    cout << string(45, '-') << endl;
    cout << left << setw(20) << "GRAND TOTAL"
        << right << setw(10) << totalVotes
        << right << setw(15) << "100.00%" << endl;
    cout << "\n*****************************************\n";
    cout << "                  WINNER";
    cout << "\n*****************************************\n";


// Determines winner
    if (numCand > 0) {
        int maxVotes = votes[0];
        int winnerIndex = 0;

        for (int i = 1; i < numCand; ++i) {
            if (votes[i] > maxVotes) {
                maxVotes = votes[i];
                winnerIndex = i;
            }
        }

        cout << "\n AND the Winner is: " << cand[winnerIndex]
            << " with " << maxVotes << " votes ("
            << fixed << setprecision(2)
            << (static_cast<double>(maxVotes) / totalVotes) * 100.0 << "% of total).\n";
    }
    return 0;
}