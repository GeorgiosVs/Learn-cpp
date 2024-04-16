#include <time.h>
#include<stdlib.h>
#include <iostream>
using namespace std;
int main() {
    
    int magic,option;
    
    srand(time(NULL));
    magic=rand()%10+1;
    
    do{
        cout << "\nEnter a random number from 1 to 10 :";
        cin>>option;
    
    if (magic<option) cout << "\nGuess a LOWER number" << endl;
    
    else if (magic>option) cout << "\nGuess a HIGHER number" << endl;
    }
    
    while(magic!=option);
        cout << "\nWELL DONE ! You found it" << endl;
    
    
    
    return 0;
}
