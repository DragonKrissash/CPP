#include <iostream>
using namespace std;
int main(){
    cout<<"Enter a number: ";
    int n;cin>>n;int rev=0;
    while(n>0){
        rev=rev*10+n%10;
        n/=10;
    }
    cout<<"The reverse of the number is: "<<rev;
}