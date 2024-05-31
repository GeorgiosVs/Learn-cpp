#include <iostream>
using namespace std;
//Function Prototype
float divide(float a, float b);

int main() {
    float num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    float result = divide(num1, num2);

    if (result == -1.0f) {
        cerr << "Error: Division by zero is not allowed." << endl;
    } else {
        cout << num1 << " / " << num2 << " = " << result << endl;
    }

    return 0;
}
//Divide Function
float divide(float a, float b) {
    if (a == 0 || b == 0) {
        return -1.0f;
    }
    return a / b;
}
