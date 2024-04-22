#include <bits/stdc++.h>
using namespace std;
int sumdig(int n){
    if(n==0)
    return 0;
    else return n%10 + sumdig(n/10);
}

int digsum(int n){
    if(sumdig(n)<=9)
    return sumdig(n);
    else
    return digsum(sumdig(n));
}

int superDigit(string n, int k) {
    string t=n;
    int sum=0;
    for(int a=0;a<n.length();a++)
    sum=sum+n[a]-'0';
    sum=sum*k;
    return digsum(sum);
}

int main(){
    string n;int k;
    cin>>n>>k;
    cout<<superDigit(n,k);
}