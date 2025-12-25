#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));

    int lives = 100;
    int score = 0;
    char choice;

    do {
        if (lives <= 0) {
            cout << "\n You have no lives left!" << endl;
            break;
        }

        int dice = rand() % 6 + 1;
        int guess;
        int bet;

        cout << "\nLives remaining: " << lives << endl;
        cout << "Enter your bet (1 to " << lives << "): ";
        cin >> bet;

        // check valid bet
        if (bet <= 0 || bet > lives) {
            cout << " Invalid bet!" << endl;
            continue;
        }

        cout << "Guess the dice number (1-6): ";
        cin >> guess;

        if (guess == dice) {
            cout << "🎉 Correct! The dice was " << dice << endl;
            lives *= 4;   // win bet
            score++;
        } else {
            cout << " Wrong! The dice was " << dice << endl;
            lives -= bet;   // lose bet
        }

        cout << "Score: " << score << endl;
        cout << "Do you want to continue? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "\nGame over!" << endl;
    cout << "Final score: " << score << endl;
    cout << "Lives left: " << lives << endl;

    return 0;
}
