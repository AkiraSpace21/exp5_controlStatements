#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    int choice;

    cout << "Choose an operation:\n";
    cout << "1 - Addition\n2 - Subtraction\n3 - Multiplication\n4 - Division\n";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (choice) {
        case 1:
            cout << "Result: " << num1 + num2;
            break;
        case 2:
            cout <<"Result: " << num1 - num2;
            break;
        case 3:
            cout<< "Result: " << num1 * num2;
            break;
        case 4:
            if (num2 != 0)
                cout<< "Result: " << num1 / num2;
            else
                cout<< "Error: Division by zero!";
            break;
        default:
            cout << "Invalid choice!";
    }

    return 0;
}

