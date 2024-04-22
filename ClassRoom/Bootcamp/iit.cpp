#include <bits/stdc++.h>
using namespace std;

long long len(long long n){
    if(n==1 || n==0)
    return 1;
    else
    return 2*(len(n/2))+1;
}

long long ind(long long n,long long index){
    long long l=len(n);
    if (index==(l+1)/2)
    return n%2;
    else if (index<(l+1)/2) {
        return ind(n/2,index);       
    }
    else 
    return ind(n/2,index-((l+1)/2));
}

int main(){
    long long n,l,r;
    cin>>n;
    cin>>l>>r;
    long long ones=0;
    for(long long a=l;a<=r;a++){
        ones=ones+ind(n,a);
    }
    cout<<ones;
}