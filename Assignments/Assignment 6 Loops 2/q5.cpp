#include <iostream>
using namespace std;
int main(){
    cout<<"Enter a number: ";
    int n;cin>>n;
    int t=n,ld;int sum=0;
    while(t>0){
        ld=t%10;
        if(ld%2==0)
        sum=sum+ld;
        t/=10;
    }
    cout<<"The sum of the even digits of the number: "<<sum;
}