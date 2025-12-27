#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;

int main() {
    srand(time(NULL));

    char playAgainVar;
    char* playAgain = &playAgainVar; // pointer to playAgain
    double reactionVar;
    double* reaction = &reactionVar; // pointer to reaction

    do {
        cout << "\nGet ready...\n";

        int waitTime = rand() % 4 + 2; // 2–5 seconds
        time_t startWait = time(NULL);
        while (time(NULL) - startWait < waitTime) {}

        cout << "GOOO!!!\n";

        clock_t startVar = clock();
        clock_t* start = &startVar; // pointer to start
        cin.get();
        clock_t endVar = clock();
        clock_t* end = &endVar;     // pointer to end

        // calculate reaction using pointers
        *reaction = double(*end - *start) / CLOCKS_PER_SEC * 1000;

        cout << "Your reaction time: " << *reaction << " ms\n";

        cout << "Play again? (y/n): ";
        *playAgain = cin.get();
        cin.get(); // remove leftover ENTER

    } while (*playAgain == 'y' || *playAgain == 'Y');

    cout << "\nThanks for playing!\n";
    return 0;
}
