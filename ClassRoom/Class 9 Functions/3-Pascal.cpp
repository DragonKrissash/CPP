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
    int n;cin>>n;
    for(int a=0;a<=n;a++){
        for(int b=n;b>a;b--)
        cout<<" ";
        for(int b=0;b<=a;b++)
        cout<<c(a,b)<<" ";
        cout<<endl;
    }
}