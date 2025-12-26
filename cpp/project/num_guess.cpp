#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
    void checkguess(int* guess, int secret, bool* win, int* score, int* lives) {
        if (*guess == secret) {
            cout << "Correct! you win.";
            *score += 1;
            *win = true;
        }
        else if (*guess > secret) {
            cout << "Too high!";
            (*lives) --;
        }
    
        else {
            cout << "Too low!!";
            (*lives) --;
        }
    
        if (*lives == 0) {
            cout << "Game over lives lost. the secret was:" << secret << endl;
            *win = true;
        }
    }

int main() {

srand(time(0));
int guess;
bool win;
int score = 0;
char playagain;
const int  MAX_LIVES = 5;
 
cout << "Number guessing game (1-100)\n";
do { 
    win = false;
    int lives = MAX_LIVES;
    int secret = rand() % 100 + 1;

    while (!win) {  
        cout << "\nGuess your number, lives left: " << lives << " → ";
        cin >> guess;
        checkguess(&guess, secret, &win, &score, &lives);
    }

    cout << "Current Score: " << score << endl;

    cout << "Play again? (y/n): ";
    cin >> playagain;

} while (playagain == 'y' || playagain == 'Y'); 
       

        cout << "Play again? (y/n): ";
        cin >> playagain;


    cout << "\nFinal Score: " << score << endl;
    cout << "Thanks for playing! 👋\n";


return 0;
}































 























