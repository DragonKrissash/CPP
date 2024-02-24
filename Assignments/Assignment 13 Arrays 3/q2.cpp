#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the number to find factorial: ";
    int n;cin>>n;
    int fact[n+1];
    fact[0]=1;
    for(int a=1;a<=n;a++)
    fact[a] = fact[a-1]*a;
    cout<<fact[n];
}