#include <iostream>
#include <cmath>
using namespace std;
int main() {
    
    double num1, num2;
    char op;


    cout << "Enter first number:";
    cin >> num1;


    cout << "Enter first operator (+, -, /, *): ";
    cin >> op;
    

    cout << "Enter second number:";
    cin >> num2;


    if(op == '+') {
        cout << "Result = " << num1 + num2 << endl;
    }

    
    if (op == '-') {
        cout << "Result = " << num1 - num2 << endl;
    }
    
    if (op == '/') {
        cout << "Result = " << num1 / num2 << endl;
    }
    
    
    if(op == '*') {
        cout << "Result = " << num1 * num2;
    }
    
    
    return 0;
}