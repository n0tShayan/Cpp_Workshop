#include<iostream>

using namespace std;

int main(){

    int a = 2 , b=3;
    cout<<" A > B and A < B : "<<((a>b)  && (a<b))<<endl;
    cout<<" A < B or A > B  : "<<((a<b) ||  (a>b))<<endl;
    cout<<" NOT (A >= B) : "<<!(a>=b)<<endl;

    return 0;
}
