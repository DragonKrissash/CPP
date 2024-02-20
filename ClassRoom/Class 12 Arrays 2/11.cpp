#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void swap(int *p,int *q){
    int t=*p;*p=*q;*q=t;
}
void revPart(int arr[],int l,int h){
    for(int a=l,b=h;a<=b;){
        swap(&arr[a++],&arr[b--]);
    }
}
int main(){
    cout<<"Enter the number of elements: ";
    int n;cin>>n;
    cout<<"Enter the elements: ";
    int arr[n];
    for(int a=0;a<n;a++)
    cin>>arr[a];
    cout<<"Enter the number of times to rotate: ";
    int x;cin>>x;
    revPart(arr,n-x,n-1);
    revPart(arr,0,n-1-x);
    revPart(arr,0,n-1);
    for(int a=0;a<n;a++)
    cout<<arr[a]<<" ";
}