#include<iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2;
    char choice = 'y';  // Initialize choice to 'y' to enter the loop

    // While loop to keep the calculator running as long as the user wants
    while (choice == 'y' || choice == 'Y') {
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
    }

    cout << "Calculator exited." << endl;

    return 0;
}
