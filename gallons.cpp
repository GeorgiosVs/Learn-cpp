#include <iostream>
using namespace std;
int main() {
    
    float gallons,liters;   //Δήλωση μεταβλητών.
    
    cout << "Enter number of gallons: ";    //Προτρεπτικό μήνυμα προς τον χρήστη.
    cin>>gallons;
    
    liters=gallons*3.7854;      //Μετατροπή από γαλόνια σε λίτρα.
    
    cout << "Liters: " << liters << endl;   //εκτύπωση αποτελέσματος.
    
    return 0;
}
//Πρόγραμμα σε γλώσσα Cpp μετατροπή γαλόνια σε λίτρα.
//Άσκηση κατανόησης.
