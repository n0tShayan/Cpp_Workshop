#include<iostream>
using namespace std;

int main() {
    int x = 5, y = 5;

    // Pre-Increment
    cout << "Initial value of x: " << x << endl;
    cout << "Using Pre-Increment (++x): " << ++x << endl;  // x is incremented to 6, then used
    // Post-Increment
    cout << "Using Post-Increment (y++): " << y++ << endl; // y is used as 5, then incremented to 6
    cout << "Value of y after Post-Increment: " << y << endl;

    // Reset values for decrement example
    x = 5;
    y = 5;

    // Pre-Decrement
    cout << "Initial value of x: " << x << endl;
    cout << "Using Pre-Decrement (--x): " << --x << endl;  // x is decremented to 4, then used

    // Post-Decrement
    cout << "Using Post-Decrement (y--): " << y-- << endl; // y is used as 5, then decremented to 4
    cout << "Value of y after Post-Decrement: " << y << endl;

    return 0;
}
