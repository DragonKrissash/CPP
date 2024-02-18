#include <iostream>
using namespace std;
int main(){
    cout<<"Enter a number: ";
    int n;cin>>n;int sum=0;
    while(n>0){
        sum=sum+n%10;
        n/=10;
    }
    cout<<"The sum is: "<<sum;
}