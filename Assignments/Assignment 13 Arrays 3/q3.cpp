#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the number of elements: ";
    int n;cin>>n;
    cout<<"Enter the array elements: ";
    int arr[n];
    for(int a=0;a<n;a++)
    cin>>arr[a];
    sort(arr,arr+n);
    for(int a=1;a<n-1;a++)
    if(arr[a]!=arr[a-1] && arr[a]!=arr[a+1])
        cout<<"The element is: "<<arr[a]<<endl;
}