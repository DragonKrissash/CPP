#include <iostream>
using namespace std;
int count(int n){
    if(n==0)return 0;
    else return 1+count(n/10);
}
int main(){
    cout<<"Enter a number: ";
    int n;cin>>n;
    cout<<"The number of digits in the number are: "<<count(n)<<" and sqaure of the number is: "<<n*n;
}