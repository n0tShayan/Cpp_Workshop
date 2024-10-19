#include<iostream>
using namespace std;

int main() {
    int rows;

    // Input number of rows for the triangle
    cout << "Enter the number of rows for the equilateral triangle: ";
    cin >> rows;

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop for printing spaces
        for (int j = i; j < rows; j++) {
            cout << "  ";  
        }
        // Inner loop for printing stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "* ";
        }
        cout << endl;  
    }

    return 0;
}
