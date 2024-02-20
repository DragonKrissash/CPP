#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the number of elements: ";
    int n;cin>>n;
    cout<<"Enter the elements: ";
    int arr[n];
    for(int a=0;a<n;a++)
    cin>>arr[a];
    vector<int>v;
    for(int a=n-1;a>=0;a--)
    v.push_back(arr[a]);
    cout<<"Elements in reverse order: ";
    for(int a=0;a<n;a++)
    cout<<v[a]<<" ";
}