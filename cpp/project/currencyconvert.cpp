#include <iostream>
using namespace std;
int main () {
    int choice;
    double amount;
    char proceed;
    const double RATE = 4000;
do {
    cout << "Currency converter\n";
    cout << "1. USD TO KHR\n";
    cout << "2. KHR TO USD\n";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter USD amount:";
        cin >> amount;
        cout << "KHR:" << amount * RATE << endl;
    }

    else if (choice == 2) {
        cout << "Enter KHR amount:";
        cin >> amount;
        cout << "USD:" << amount / RATE << endl;
    }

    else {
        cout << "Invalid input";
    }
    cout << "do you want to proceed (Y/N):";
    cin >> proceed;
} while (proceed == 'Y' || proceed == 'N');
cout << "Thanks for using currency converter";

return 0;
}

