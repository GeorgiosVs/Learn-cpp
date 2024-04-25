#include <iostream>
using namespace std;

int mul(int x, int y);      // <---- mul prototype

int main() {
    
    int answer;
    
    answer = mul(10, 11);   //Δήλωση αριθμών της επιστρεφόμενης τιμής x και y.
    cout << "The answer is " << answer << endl;
    
    return 0;
}




//Αυτή η συνάρτηση επιστρέφει μία τιμή.
int mul(int x, int y){      //Κάλεσμα της mul
    return x * y;           //επιστροφή του γινομένου των x και y
}
