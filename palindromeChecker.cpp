#include <iostream>
using namespace std;

int main() {
    int num, reversedNum = 0, remainder, originalNum;

    // Taking input from the user
    cout << "Enter an integer: ";
    cin >> num;

    // Store the original number to compare later
    originalNum = num;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;            // Get the last digit
        reversedNum = reversedNum * 10 + remainder;  // Build the reversed number
        num /= 10;                       // Remove the last digit
    }

    // Check if the original number and reversed number are equal
    if (originalNum == reversedNum) {
        cout << originalNum << " is a palindrome." << endl;
    } else {
        cout << originalNum << " is not a palindrome." << endl;
    }

    return 0;
}
