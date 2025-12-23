
#include <iostream>
#include <string>
using namespace std;

int main() {
   
    //string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    //cars[0] = "Opel";  // Update first element
    //cout << "First array, updated first element: " << cars[0] << "\n\n";

    
    //string cars2[] = {"tesla", "Ford", "volvo", "BMW", "go"};

    //cout << "Second array elements:\n";
    // int sizeCars2 = sizeof(cars2) / sizeof(cars2[0]); 
    // for (int i = 0; i < sizeCars2; i++) {
        //cout << i << " = " << cars2[i] << "\n";
//     }
//     cout << "\n";

//     int Mynum[] = {10, 20, 30, 40, 50};
//     int sizeMynum = sizeof(Mynum) / sizeof(Mynum[0]);
//     cout << "Mynum array has " << sizeMynum << " elements.\n";

     
// string letters [2] [4] = {
//     {"books", "pen", "correction", "fineliner"},
//     {"Paper", "pencil", "eraser", "pen"}
// };

// cout << letters [0] [3];


string letters2 [2] [2] [2] = {
{ {"seat", "table"},
{"chair", "desk"}
},
{
{"locker", "books"},
{"stationary", "grade"}
}


};

cout << letters2 [0] [0] [1];




return 0;
}








