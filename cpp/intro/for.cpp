#include <iostream>
using namespace std;
int main(){
  //print numbers  
  for (int i = 0; i < 5; i++) {
  cout << i << "\n";
}
// sum of numbers
int sum = 0;
for (int i = 0; i < 5; i++ ) {
  sum = sum + i;
}
cout << "sum is " << sum << endl;


//nested loop
for (int i = 1; i <= 2; ++i) {
  cout << "Outer: " << i << "\n"; 

  for (int j = 1; j <= 3; ++j) {
    cout << " Inner: " << j << "\n"; 
  }
}
// for each loop
int myNumbers[5] = {10, 20, 30, 40, 50};
for (int num : myNumbers) {
  cout << num << "\n";
}

// loop through a string 
string word = "Hello";
for (char c : word) {
  cout << c << "\n";
}





























return 0;
}