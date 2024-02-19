#include <iostream>
using namespace std;
int main(){
    cout<<"Enter 2 numbers: ";
    int a,b;cin>>a>>b;
    int *p=&a,*q=&b;
    cout<<*p * *q;
}