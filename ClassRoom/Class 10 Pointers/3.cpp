#include <iostream>
using namespace std;
void swap(int *p,int *q){
    int t=*p;
    *p=*q;*q=t;
}
int main(){
    cout<<"Enter 2 numbers to swap: ";
    int a,b;cin>>a>>b;
    cout<<"Before swapping: a: "<<a<<" b: "<<b;
    swap(&a,&b);
    cout<<"\nAfter swapping: a: "<<a<<" b: "<<b;
}