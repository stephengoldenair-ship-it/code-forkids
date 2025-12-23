#include <iostream>
using namespace std;
int main() {
    int choice;
    float temp, result;
    cout << "Temperature Converter\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "Choose (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
       cout << "Enter temperature in Celsius: ";
        cin >> temp;
        result = (temp * 9 / 5) + 32;
        cout << "Fahrenheit: " << result << endl;
    }
    else if (choice == 2) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        result = (temp - 32) * 5 / 9;
        cout << "Celsius: " << result << endl;
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    