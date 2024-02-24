#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the roll number and marks simultaneously: ";
    int arr[4][2];
    for(int a=0;a<4;a++)
    for(int b=0;b<2;b++)
    cin>>arr[a][b];
    cout<<"The marks are: ";
    for(int a=0;a<4;a++)
    {for(int b=0;b<2;b++)
    cout<<arr[a][b]<<" ";
    cout<<"\n";}
    
}