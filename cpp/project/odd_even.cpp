#include <iostream>
#include <sstream>
#include <string>
using namespace std;
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter numbers separated by commas: ";
    cin >> input;

    stringstream ss(input);
    string part;

    string oddNumbers = "";
    string evenNumbers = "";

    while (getline(ss, part, ',')) {
        int num = stoi(part);

        if (num % 2 == 0) {
            evenNumbers += to_string(num) + " ";
        } else {
            oddNumbers += to_string(num) + " ";
        }
    }

    cout << "Odd numbers: " << oddNumbers << endl;
    cout << "Even numbers: " << evenNumbers << endl;

    return 0;

}