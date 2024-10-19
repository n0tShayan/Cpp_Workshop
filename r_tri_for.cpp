#include<iostream>
using namespace std;

int main() {
    int rows;

    // Input number of rows for the triangle
    cout << "Enter the number of rows for the right-angle triangle: ";
    cin >> rows;

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop for printing stars
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;  // Move to the next line after each row
    }

    return 0;
}
