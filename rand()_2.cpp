#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    
    int magic;               //Variable declaration to set a random number
    int guess;               //User's guess input
    
    srand(time(NULL));       //This lets the program choose a number from clock
    
    magic = rand() % 10 + 1; //function rand() inputs random number from 1 to 10.
    
    while (true) {
        cout << "Enter your guess: ";
        cin>>guess;
        
        if (guess == magic) {
            cout << "*** Right ***" << endl;
            cout << magic << " is the random number." << endl;
            break;
        }
        else cout << "...Sorry, you're wrong." << endl;
        
        if (guess > magic) {
            cout << "Your guess is too high." << endl;
        }
        else cout << "Your guess is too low." << endl;
    }
        return 0;
        
    }

