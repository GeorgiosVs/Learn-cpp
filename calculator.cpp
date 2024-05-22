#include <iostream>
using namespace std;

float menu(char op, float num1, float num2);
void menu2(char &op, float &num1, float &num2);

int main() {
    char op;
    float num1, num2, result;
    char choice;

    do {
        menu2(op, num1, num2);
        result = menu(op, num1, num2);
        cout << "Result: " << result << endl;

        cout << "Do you want to perform another operation? (y/n):";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}

void menu2(char &op, float &num1, float &num2) {
    cout << "Enter operator (+, -, *, /):";
    cin >> op;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;
}

float menu(char op, float num1, float num2) {
    float result;

    switch(op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                cout << "Error! Division by zero." << endl;
                result = 0;
            }
            break;
        default:
            cout << "Error! Operator is not correct." << endl;
            result = 0;
            break;
    }

    return result;
}
