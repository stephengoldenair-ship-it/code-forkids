#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter numbers separated by commas: ";

    // 12,21,34,5
    cin >> input;

    stringstream ss(input);
    string part;

    int num;
    int largest;
    int smallest;
    
    // get the first number and it is the largest
    
    getline(ss, part, ',');
    largest = stoi(part);
    smallest = stoi(part);
    
    while (getline(ss, part, ',')) {
        num = stoi(part);
        cout << num << endl;
        
        if (num > largest) {
            largest = num;
        }
        if (num < smallest) {
            smallest = num;
        }-
    
    
    }

    cout << "Largest number: " << largest << endl;
    cout << "the smallest number: " << smallest << endl;
    return 0;
}