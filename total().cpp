/*Πρόγραμμα στην γλώσσα Cpp
 Απόδοση αρχικών τιμών με την συνάρτηση total()
 
 Το πρόγραμμα χρησιμοποιεί την συνάρτηση total() προσθέτει τα ψηφία από το 1 μέχρι την τιμή που μεταβιβάζεται.
 Κάθε φορά που καλείται η total(), στη sum  αποδίδεται ως αρχική τιμή το μηδέν.
 π.χ το παραγοντικό άθροισμα του 3 είναι 1+2+3 δηλαδή 6
 */
#include <iostream>
using namespace std;

void total(int x);      //Πρωτότυπο συνάρτησης total

int main() {
    
    cout << "Computing summation of 5." << endl;
    total(5);
    
    cout << "\nComputing summation of 6." << endl;
    total(6);
    
    return 0;
}

//Κάλεσμα συνάρτησης total()
void total(int x){
    int sum=0;          //Απόδοση αρχικής τιμής sum
    int i, count;
    for (i=i; i<=x; i++){
        sum=sum+i;
        for (count=0; count<10; count++) cout << '*';   //σημείο μορφοποίησης με το σύμβολο '*'
        cout << "The current sum is " << sum << endl;
        }
    }
