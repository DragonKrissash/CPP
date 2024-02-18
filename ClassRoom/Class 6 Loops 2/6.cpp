#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the base: ";
    int a;cin>>a;
    cout<<"Enter the power: ";
    int b;cin>>b;float p=1;
    for(int c=1;c<=abs(b);c++)
    p*=a;
    if(b<0)
    p=1.0/p;
    cout<<"The power of the base "<<a<<" raised to "<<b<<" is: "<<p;
}