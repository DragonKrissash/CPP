#include <iostream>
using namespace std;
int main(){
    int x;cout<<"Enter the first number: ";
    cin>>x; int y,m;cout<<"Enter the second number and value for taking modulus: ";
    cin>>y>>m;
    int z=(x*y)%m;
    cout<<"Output is: "<<z;
}