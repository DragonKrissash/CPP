#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the number of rows and columns: ";
    int n;cin>>n;
    cout<<"Enter the elements: ";
    int arr[n][n];
    for(int a=0;a<n;a++){
        for(int b=0;b<n;b++)
        cin>>arr[a][b];
    }
    cout<<endl;
    for(int a=0;a<n;a++){
        for(int b=0;b<n;b++)
        if(a==(n/2)||b==(n/2))
        cout<<arr[a][b]<<" ";
        else cout<<"  ";
        cout<<endl;
    }
}