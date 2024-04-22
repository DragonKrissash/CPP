#include <bits/stdc++.h>
using namespace std;
int findlog(int n,int b){
       return log(n)/log(b);
   }
bool isPowerOfFour(int n) {
    if(n<=0)
    return false;
        int exp=findlog(n,4);
        if(n==1)
        return true;
        if(exp*exp*exp*exp==n)
        return true;
        else
        return false;
    }
   int main(){
       int n;
       cin>>n;
       cout<<findlog(n,4);
   }