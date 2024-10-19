#include<iostream>
using namespace std;

int main() {
    float calculus, english, programming, physics, chemistry, totalMarks, percentage;
    const int totalSubjects = 5;
    const int maxMarksPerSubject = 100; 
    const int maxTotalMarks = totalSubjects * maxMarksPerSubject;

    cout << "Enter marks for Calculus: ";
    cin >> calculus;

    cout << "Enter marks for English: ";
    cin >> english;

    cout << "Enter marks for Programming: ";
    cin >> programming;

    cout << "Enter marks for Physics: ";
    cin >> physics;

    cout << "Enter marks for Chemistry: ";
    cin >> chemistry;

    // Calculate total marks
    totalMarks = calculus + english + programming + physics + chemistry;

    // Calculate percentage
    percentage = (totalMarks / maxTotalMarks) * 100;

    // Display the total marks and percentage
    cout << "Total Marks: " << totalMarks << "/" << maxTotalMarks << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}
