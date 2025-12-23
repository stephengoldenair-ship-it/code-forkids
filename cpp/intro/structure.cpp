#include <iostream>
#include <string>
using namespace std;

int main(){
    
typedef struct {
    string name;
    int age; 
    char grade;
} Student;

Student steven;
steven.name = "Stephen Ly";
steven.age = 11;
steven.grade = 'A';

Student will = {"Stephen ly", 11, 'A'};

Student *student;
Student s;

int age_game;
cout << "Enter a student'age to guess: ";
cin >> age_game;

if(age_game == 11) {
  student = &steven;
  s = steven;
}
else if(age_game == 15) {
  student = &will;
  s = will; 
}
else {
    cout << "invalid input" ;
    return -1;
}



typedef struct {
    int length; // 4 // 8
    char* content; // 8

} MyString;



cout << "The size of s is: " << sizeof(s) << endl;
cout << "The size of stuend is: " << sizeof(student) << endl;
cout << "The size of an int is: " << sizeof(int) << endl;
cout << "The size of a char is: " << sizeof(char) << endl;
cout << "The size of a a pointer is: " << sizeof(char*) << endl;
cout << "The size of a string is: " << sizeof(string) << endl;

cout << "Name:" << student->name << "\n";
cout << "Age:" << student->age << "\n";
cout << "Grade:" << student->grade << "\n";

    return 0;
}