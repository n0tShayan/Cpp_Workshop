#include<iostream>
using namespace std;

int main() {
    
    for (int i = 1; i <= 10; i++) {
        

        if (i == 5) {
            continue;  // Skip when i == 5
        }

        // Print the current number
        cout << i << " ";
    }

    cout << "\nLoop finished." << endl;

    return 0;
}
