#include<iostream>
using namespace std;

int main(){
    int n,sum;
    sum=0;
    cout<<"enter n :";
    cin>>n;

    for(int i=0;i<=n;i++){
        if( i%2 ==0){
            sum = sum + i;
        }

    }
    cout<<"The value of sum is :"<<sum;

    return 0;
}