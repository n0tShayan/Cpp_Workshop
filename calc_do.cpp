#include<iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2;
    char choice;

    // While loop to keep the calculator running
    do {
        // Display available operations
        cout << "Enter the operator (+, -, *, /): ";
        cin >> operation;

        // Get two numbers for the operation
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        // Switch case to perform the operation based on user's input
        switch (operation) {
            case '+':
                cout << "Result: " << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
                break;
            case '-':
                cout << "Result: " << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
                break;
            case '*':
                cout << "Result: " << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
                break;
            case '/':
                if (num2 != 0) {
                    cout << "Result: " << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
                } else {
                    cout << "Error! Division by zero is not allowed." << endl;
                }
                break;
            default:
                cout << "Invalid operator!" << endl;
                break;
        }

        // Ask the user if they want to perform another calculation
        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y'); // Continue while the user inputs 'y' or 'Y'

    cout << "Calculator exited." << endl;

    return 0;
}
