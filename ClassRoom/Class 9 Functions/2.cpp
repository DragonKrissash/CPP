#include <iostream>
#include <cmath>
using namespace std;
int f(int n){
    if(n==0)return 1;
    else return n*f(n-1);
}
int comb(int n,int r){
return f(n)/(f(n-r)*f(r));
}
int perm(int n,int r){
    return  f(n)/f(n-r);
}
int main(){
    cout<<"Enter the value of n: ";
    int n;cin>>n;
    cout<<"Enter the value of r: ";
    int r;cin>>r;
    cout<<"The combination is: "<<comb(n,r);
    cout<<"\nThe permutation is: "<<perm(n,r);
}