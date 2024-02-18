#include <iostream>
using namespace std;
int main(){
    cout<<"Enter a number: ";
    int n;cin>>n;
    while(n>0){
        cout<<n%10<<" ";
        n/=10;
    }
}