#include <iostream>
using namespace std;

float max(float num1, float num2);    //Προτότυπο συνάρτησης max

int main() {
    float num1,num2;  //Δήλωση μεταβλητών
    
    cout << "Finding the biggest of two numbers" << endl;   //Λογότυπο προγράμματος
    cout << ".................................." << endl;
    
    cout << "Give the first number :";  //Προτρεπτικό μήνυμα προς το χρήστη να εισάγει αριθμό
    cin>>num1;
    
    cout << "Give the second number :"; //Προτρεπτικό μήνυμα προς το χρήστη να εισάγει αριθμό
    cin>>num2;
    
    cout << "\nWe found it !!" << endl;
    
    //Αποτελέσματα
    cout << "\nThe biggest number is :" << max(num1,num2) << endl;
    
    return 0;
}

//Κάλεσμα συνάρτησης max
float max(float num1,float num2){
    return (num1>num2) ? num1 : num2;}
