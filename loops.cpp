#include<iostream>
using namespace std;

int main(){
    for(int i=10; i>0 ; i--){
        cout << i << endl;
    }

    cout<<"While loop  "<<endl;
    int k =1;
    while(k<=10){
        cout<<k<<" ";
        k++;
    }

    cout<<"Do-While loop"<<endl;
    int j=11;
    do{
        cout<<j <<" ";
        j++;
    }while (j<=10);
    

}