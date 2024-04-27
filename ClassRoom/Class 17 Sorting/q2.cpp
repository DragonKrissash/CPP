#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the number of elements: ";
    int n;
    cin>>n;
    cout<<"Enter the elements: ";
    vector <int>v(n,0);
    for(int a=0;a<n;a++)
    cin>>v[a];
    int l=distance(v.begin(),lower_bound(v.begin(),v.end(),1));
    cout<<n-l;
}