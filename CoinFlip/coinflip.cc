#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to simulate a coin flip and return the result (0 for tails, 1 for heads)
int flipCoin() {
    return rand() % 2;
}

// Function to determine the winner based on flip results
void determineWinner(int flip1, int flip2) {
    if (flip1 == 0 && flip2 == 1) {
        cout << "Player 1 Wins!\n";
    } else if (flip1 == 1 && flip2 == 0) {
        cout << "Player 2 Wins!\n";
    } else {
        cout << "Tie! Flipping again...\n";

        // Flip twice again for a tie
        int newFlip1 = flipCoin();
        int newFlip2 = flipCoin();

        determineWinner(newFlip1, newFlip2);
    }
}

int main() {
    cout << "Can't find a coin to flip? Try this virtual one!\n";
    srand(time(NULL));

    char choice;
    do {
        cout << "Wanna Flip? (y/n)" << endl;
        cin >> choice;

        if (choice == 'y' || choice == 'Y') {
            int flip1 = flipCoin();
            int flip2 = flipCoin();

            determineWinner(flip1, flip2);
        } else if (choice == 'n' || choice == 'N') {
            cout << "Exit\n";
        } else {
            cout << "Invalid input. Please enter 'y' or 'n'.\n";
        }
    } while (choice != 'n' && choice != 'N');

    return 0;
}

