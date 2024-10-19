#include <iostream>
#include <string>
using namespace std;

int main() {
    // 1. Getting string input using cin
    string firstName;
    cout << "Enter your first name (single word): ";
    cin >> firstName;    

    // 3. Concatenation of two strings
    string lastName = "Doe";
    string fullNameConcatenated = firstName + " " + lastName;
    cout << "Concatenated Name: " << fullNameConcatenated << endl;

    // 4. Finding the length of the string
    cout << "Length of your full name: " << firstName.length() << " characters." << endl;



    return 0;
}
