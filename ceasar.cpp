#include <iostream>
using namespace std;

// Δήλωση των συναρτήσεων κρυπτογράφησης και αποκρυπτογράφησης
string encryptCaesar(string plaintext, int shift);
string decryptCaesar(string ciphertext, int shift);

int main() {
    // Κείμενο προς κρυπτογράφηση
    string plaintext = "Hello, World!";
    // Μετατόπιση για τον κρυπτογράφηση Καίσαρα
    int shift = 3;

    // Κρυπτογράφηση του κειμένου
    string encryptedText = encryptCaesar(plaintext, shift);
    cout << "Encrypted text: " << encryptedText << endl;

    // Αποκρυπτογράφηση του κρυπτογραφημένου κειμένου
    string decryptedText = decryptCaesar(encryptedText, shift);
    cout << "Decrypted text: " << decryptedText << endl;

    return 0;
}

// Συνάρτηση για την κρυπτογράφηση Καίσαρα
string encryptCaesar(string plaintext, int shift) {
    string ciphertext = "";

    for (int i = 0; i < plaintext.length(); i++) {
        if (isalpha(plaintext[i])) {
            char shiftedChar = plaintext[i] + shift;

            if (islower(plaintext[i]) && shiftedChar > 'z') {
                shiftedChar = 'a' + (shiftedChar - 'z' - 1);
            } else if (isupper(plaintext[i]) && shiftedChar > 'Z') {
                shiftedChar = 'A' + (shiftedChar - 'Z' - 1);
            }

            ciphertext += shiftedChar;
        } else {
            ciphertext += plaintext[i];
        }
    }

    return ciphertext;
}

// Συνάρτηση για την αποκρυπτογράφηση Καίσαρα
string decryptCaesar(string ciphertext, int shift) {
    return encryptCaesar(ciphertext, -shift);
}
