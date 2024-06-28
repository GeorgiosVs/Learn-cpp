#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// Function to encrypt the given text using the Caesar cipher
string encrypt(string text, int shift) {
    string result = "";

    // Iterate through each character in the text
    for (int i = 0; i < text.length(); i++) {
        // Encrypt uppercase characters
        if (isupper(text[i]))
            result += char(int(text[i] + shift - 65) % 26 + 65);
        // Encrypt lowercase characters
        else if (islower(text[i]))
            result += char(int(text[i] + shift - 97) % 26 + 97);
        // Leave non-alphabetic characters unchanged
        else
            result += text[i];
    }

    return result;
}

// Function to decrypt the given text using the Caesar cipher
string decrypt(string text, int shift) {
    return encrypt(text, 26 - shift);
}

int main() {
    string text;
    string shiftInput;
    int shift;

    cout << "Enter text: ";
    getline(cin, text);

    // Loop until valid shift input is received
    while (true) {
        cout << "Enter shift (positive for encryption, negative for decryption): ";
        getline(cin, shiftInput);

        // Attempt to convert the input to an integer
        stringstream ss(shiftInput);
        if (ss >> shift) {
            break; // Exit loop if conversion successful
        } else {
            cout << "Invalid input. Please enter an integer.\n";
        }
    }

    // Ensure that the shift value is within the range of 0 to 25
    shift = shift % 26;

    // Adjust shift for negative values
    if (shift < 0)
        shift += 26;

    // Encrypt or decrypt based on the sign of the shift
    switch (shift >= 0) {
        case true:
            cout << "Encrypted text: " << encrypt(text, shift) << endl;
            break;
        case false:
            cout << "Decrypted text: " << decrypt(text, shift) << endl;
            break;
    }

    return 0;
}
