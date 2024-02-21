#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the number of elements: ";
    int n;cin>>n;
    int arr[n];
    for(int a=0;a<n;a++)
    cin>>arr[a];
    cout<<"Enter the value of x: ";
    int x;cin>>x;
    int c=0;
    for(int a=0;a<n;a++)
    if(arr[a]>x)c++;
    cout<<"The number of elements strictly greater than "<<x<<" are: "<<c;
}