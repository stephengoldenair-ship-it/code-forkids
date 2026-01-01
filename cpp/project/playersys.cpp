
#include <iostream>
#include <string>
using namespace std;


enum GlobalState {
    GLOBAL_IDLE,
    GLOBAL_RUNNING,
    GLOBAL_ATTACKING
};

struct Player {
  
    enum State {
        IDLE,
        RUNNING,
        ATTACKING
    };

    string name;
    int health;
    State currentState;  
};

int main() {

    Player p1;
    p1.name = "Jack";
    p1.health = 100;
    p1.currentState = Player::RUNNING;  

    cout << "Player Name: " << p1.name << endl;
    cout << "Health: " << p1.health << endl;

 
    switch (p1.currentState) {
        case Player::IDLE:
            cout << "State: Idle" << endl;
            break;
        case Player::RUNNING:
            cout << "State: Running" << endl;
            break;
        case Player::ATTACKING:
            cout << "State: Attacking" << endl;
            break;
    }

    
    GlobalState gameState = GLOBAL_ATTACKING;

    if (gameState == GLOBAL_ATTACKING) {
        cout << "Global game state: Attacking mode active!" << endl;
    }

    return 0;
}