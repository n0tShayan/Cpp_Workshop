#include<iostream>

using namespace std;
void swap2(int & n1 , int &n2){
    int  temp = n1 ;
    n1 = n2 ;
    n2 = temp ;
}

void swap1(int n1,int n2){
    int temp = n1 ;
    n1 = n2 ;
    n2 = temp ;
}


int main(){

    int a ,b;
    cout<<"Enter the first number"<<endl;
    cin>>a;
    cout<<"Enter the second number"<<endl;
    cin>>b;
    swap2(a,b);
    cout<<"After swapping the numbers are "<<a<<" "<<b<<endl;
    return 0;
}