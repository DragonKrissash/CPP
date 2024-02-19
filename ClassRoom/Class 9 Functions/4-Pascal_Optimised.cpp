#include <iostream>
#include <cmath>
using namespace std;
int f(int n){
    if(n==0)return 1;
    else return n*f(n-1);
}
int c(int n,int r){
    return f(n)/(f(n-r)*f(r));
}
int main(){
    cout<<"Enter a number: ";
    int n;cin>>n;
    for(int a=0;a<=n;a++){
        int curr=1;
        for(int b=n;b>a;b--)
        cout<<" ";
        for(int b=0;b<=a;b++){
            cout<<curr<<" ";
            int next=curr*(a-b)/(b+1);
            curr=next;
        }
        cout<<endl;
    }
}