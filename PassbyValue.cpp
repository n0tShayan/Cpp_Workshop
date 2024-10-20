#include <iostream> 
using namespace std; 

void f(int & x) 
{ 
cout<<--x; 
} 

void foo( int x){
    cout<<--x<<endl;
}

// Driver code 
int main() 
{ 
int a = 5; 
cout << a << endl; 
f(a);
cout<<a;
}
