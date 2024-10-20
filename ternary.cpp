#include<iostream>
using namespace std;

int main() {
    int number;
    string result;
    cout << "Enter a number: ";
    cin >> number;

    result = (number >= 60) ? "Passed" : "Failed";
    cout << "The result is: " << result << endl;

    return 0;
}
