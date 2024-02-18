#include <iostream>
using namespace std;
int main(){
    cout<<"Enter a number: ";
    int n;cin>>n;int sum=0;
    for(int a=1;a<=n;a++){
        sum=(a%2==0)? sum-a:sum+a;
    }
    cout<<"The sum of the series is: "<<sum;
}