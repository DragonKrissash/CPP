#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the number of rows and columns: ";
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    for(int a=0;a<r;a++)
    for(int b=0;b<c;b++)
    cin>>arr[a][b];
    cout<<"The transpose is: ";
    for(int a=0;a<c;a++)
    {for(int b=0;b<r;b++)
    cout<<arr[b][a]<<" ";
    cout<<"\n";}
    
}