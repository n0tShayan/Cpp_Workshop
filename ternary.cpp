#include<iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    string result = (number >= 60) ? "Passed" : "Failed";
    cout << "The number is: " << result << endl;

    return 0;
}
