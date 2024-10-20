#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> n;

    int a = 0, b = 1; // First two terms
    cout << "Fibonacci Series using for loop: " << endl;

    for (int i = 0; i < n; i++) {
        cout << a << " "; // Print current term
        int nextTerm = a + b; // Calculate next term
        a = b; // Update a to the next term
        b = nextTerm; // Update b to the next term
    }

    cout << endl;
    return 0;
}
