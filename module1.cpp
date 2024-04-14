#include <iostream>
using namespace std;

int poso;   //Καθολική μεταβλητή

int main() {
    
    cout << "Give the amount :";    //Προτρεπτικό μήνυμα στο χρήστη να εισάγει ποσό
    cin>>poso;
    
    int d50 = poso/50;      //
    int d10 = poso%50/10;   //  Τοπικές μεταβλητές χαρτονομισμάτων
    int d5 = poso%10/5;     //
    
    //Εκτύπωση αποτελεσμάτων
    cout << "The amount of " << poso << " euro " << " can be splited to :" << endl
    << d50 << " of 50 euros" << endl
    << d10 << " of 10 euros" << endl
    << d5  << " of 5  euros" << endl;
    
    return 0;
}
