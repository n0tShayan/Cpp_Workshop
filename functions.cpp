#include <iostream>
using namespace std;
// Function to add two numbers
float Area(int base , int height){
    float c = 0.5*base*height;
    return c;
}
float Diameter(int radius){
    float d = 2*radius;
    return d;
}

string greetings(string statement){
    string s2 = statement + " " + "asasdsad ";
    return s2;
}

int main() {
    string s1;
    getline(cin,s1);
    cout<<greetings(s1);

    

    return 0;
}
