#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
int main() {
    char playAgain;

    do {
        string keywords[] = {
            "int", "while", "for", "if", "else",
            "return", "break", "continue"
        };

        srand(time(0));                 // random seed
        int index = rand() % 8;         // pick random keyword
        string word = keywords[index];  // chosen keyword
        string guessed(word.length(), '_'); // blanks
        char letter;
        int lives = 6;
        bool found;

        cout << "\nGuess the C++ Keyword!\n";

        while (lives > 0 && guessed != word) {
            cout << "\nKeyword: " << guessed << endl;
            cout << "Lives: " << lives << endl;
            cout << "Guess a letter: ";
            cin >> letter;

            found = false;

            for (int i = 0; i < word.length(); i++) {
                if (word[i] == letter) {
                    guessed[i] = letter;
                    found = true;
                }
            }

            if (!found) {
                lives--;
                cout << "Wrong!\n";
            } else {
                cout << "Correct!\n";
            }
        }

        if (guessed == word) {
            cout << "\nYou guessed it: " << word << endl;
        } else {
            cout << "\nYou lost! The keyword was: " << word << endl;
        }

  
        cout << "\nDo you want to play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "\nThanks for playing! \n";
    return 0;
}

    

        