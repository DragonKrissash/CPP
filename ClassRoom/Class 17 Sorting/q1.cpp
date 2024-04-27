#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the number of elements: ";
    int n;
    cin>>n;
    cout<<"Enter the elements: ";
    int arr[n];
    for(int a=0;a<n;a++)
    cin>>arr[a];
    int l=0,h=n-1,m;
    int ans;
    cout<<"Enter the target: ";
    int x;cin>>x;
    while(l<=h){
        m=l+(h-l)/2;
        if(arr[m]==x){ans=m;l=m+1;}
        else if(arr[m]<x){l=m+1;}
        else h=l-1;
    }
    cout<<ans;
}