#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


bool ask_question();

int main() {
    srand(time(0));

    int score = 0;
    char choice;

    while (true) {
        if (ask_question()) {
            score++;
        }

        cout << "Do you want to continue? (y/n): ";
        cin >> choice;

        if (choice == 'n' || choice == 'N') {
            break;
        }
    }

    cout << "\nQuiz over!\n";
    cout << "Your score: " << score << endl;

    return 0;
}

bool ask_question() {
    int a = rand() % 10 + 1;
    int b = rand() % 10 + 1;
    int op = rand() % 3;
    enum Operator {
        ADDITION,
        SUBTRACTION,
        MULTIPLY
    };
    
    
    
    
    int answer, user_answer;

    if (op == ADDITION) {
        cout << a << " + " << b << " = ";
        answer = a + b;
    }
    else if (op == SUBTRACTION) {
        cout << a << " - " << b << " = ";
        answer = a - b;
    }
    else {
        cout << a << " * " << b << " = ";
        answer = a * b;
    }

    cin >> user_answer;

    if (user_answer == answer) {
        cout << "Correct!\n";
        return true;
    } else {
        cout << "Wrong! Answer: " << answer << "\n";
        return false;
    }
}