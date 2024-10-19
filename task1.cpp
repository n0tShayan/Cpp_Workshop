#include<iostream>
using namespace std;

int main() {
    int units;
    float totalBill, tax = 0.0, billWithoutTax;

    // Get the number of units consumed from the user
    cout << "Enter the number of electricity units consumed: ";
    cin >> units;

    //(1 unit = 20)
    billWithoutTax = units * 20;

    if (units <= 50) {
        tax = 0;  // 0% tax for 50 or fewer units
    } 
    else if (units <= 100) {
        tax = 0.05 * billWithoutTax;  // 5% tax for units between 51 and 100
    } 
    else if (units <= 150) {
        tax = 0.07 * billWithoutTax;  // 7% tax for units between 101 and 150
    } 
    else {
        tax = 0.10 * billWithoutTax;  // 10% tax for units greater than 150
    }

    // Total bill = base bill + tax
    totalBill = billWithoutTax + tax;

    cout << "Total bill (including tax) is: " << totalBill << endl;

    return 0;
}
