#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));
    char playAgain;

    cout << "----- Reaction Time Test -----\n";
    cout << "Press ENTER when you see GO!\n";

    do {
        cout << "\nGet ready...\n";

        int waitTime = rand() % 4 + 2; 
        time_t startWait = time(NULL);
        while (time(NULL) - startWait < waitTime) {}

        cout << "GOOO!!!\n";

        clock_t start = clock();
        cin.get();   
        clock_t end = clock();

        double reaction =
            double(end - start) / CLOCKS_PER_SEC * 1000;

        cout << "Your reaction time: " << reaction << " ms\n";

        cout << "Play again? (y/n): ";
        playAgain = cin.get();   

        cin.get(); 

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "\nThanks for playing!\n";
    return 0;
}
