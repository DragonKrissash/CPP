#include <iostream>
using namespace std;
int main(){
    cout<<"Enter a number: ";
    int n;cin>>n;
    int t=n,rev=0;
    while(t>0){
        rev=rev*10+t%10;
        t/=10;
    }
    cout<<"The sum of the number and its reverse is: "<<n+rev;
}