#include<iostream>
using namespace std;

int main() {

    // Using a for loop
    cout << "Using for loop:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    // Using a while loop
    cout << "Using while loop:" << endl;
    int j = 1;
    while (j <= 5) {
        cout << j << " ";
        j++;
    }
    cout << endl;

    // Using a do-while loop
    cout << "Using do-while loop:" << endl;
    int k = 1;
    do {
        cout << k << " ";
        k++;
    } while (k <= 5);

    cout << endl;
    
    return 0;
}
