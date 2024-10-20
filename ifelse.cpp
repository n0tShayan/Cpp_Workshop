#include<iostream>
using namespace std;

int main() {
    int num1,num2;
    cout << "Enter values: ";
    cin >> num1>>num2;
    char operation;
    cout<<"Enter the operation you want to perform :";
    cin>>operation;
    switch(operation){
        case '+':
        cout<<"The sum is :"<<num1+num2;
        break;
        case '-':
        cout<<"The differnece is :"<<num1-num2;
        break;
        case '*' :
        cout<<"The product is :"<<num1*num2;
        break;
        case '/':
        if(num2 == 0){
            break;
        }
        cout<<"The answer is :"<<num1/num2;
        break;
        default:
        cout<<"you havent entered 1 and 2.";

    }

    return 0;
}
