#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the number of rows and columns: ";
    int n;cin>>n;
    int arr[n][n];
    cout<<"Enter the elements of the matrix: \n";
    for(int a=0;a<n;a++)
    for(int b=0;b<n;b++)
    cin>>arr[a][b];
    for(int a=0;a<n;a++)
    for(int b=a+1;b<n;b++)
    swap(arr[a][b],arr[b][a]);
    for(int a=0;a<n;a++)
    {for(int b=0;b<n;b++)
    cout<<arr[a][b]<<" ";
    cout<<endl;}
    
}