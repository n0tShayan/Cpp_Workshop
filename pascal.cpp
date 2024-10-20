#include <iostream>
using namespace std;

int main() {
    int n; // Number of rows
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int number = 1; // First number in a row

        // Print leading spaces for formatting
        for (int space = 0; space < n - i - 1; space++) {
            cout << " ";
        }

        // Print numbers in the row
        for (int j = 0; j <= i; j++) {
            cout << number << " "; // Print current number
            number = number * (i - j) / (j + 1); // Calculate next number using binomial coefficient
        }

        cout << endl; // Move to the next row
    }

    return 0;
}
