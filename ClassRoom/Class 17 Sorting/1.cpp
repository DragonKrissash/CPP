#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the size of the array: ";
    int n;cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int a=0;a<n;a++)
    cin>>arr[a];
    for(int a=1;a<n;a++)
    {   if(n==1)
        break;
        while(a>=1 && arr[a]<arr[a-1]){
            swap(arr[a],arr[a-1]);
            a--;
        }
    }
    for(int a=0;a<n;a++)
    cout<<arr[a]<<" ";
}