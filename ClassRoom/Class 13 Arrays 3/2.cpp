#include <bits/stdc++.h>
using namespace std;

void swap(int *p,int *q){
    int t=*p;*p=*q;*q=t;
}

void sortBinArr(int arr[], int n) { 
    int zp=n-1,op=0;
    while(zp>op){
        while(arr[op]!=1)
        op++;
        while(arr[zp]!=0)
        zp--;
        swap(&arr[op],&arr[zp]);
        op++;zp--;
    }
}

int main(){
    cout<<"Enter the number of elements: ";
    int n;cin>>n;
    cout<<"Enter the array elements: ";
    int arr[n];for(int i=0;i<n;i++) 
    cin>>arr[i];
    sortBinArr(arr,n);
    cout<<"The sorted array is: ";
    for(int a=0;a<n;a++)
    cout<<arr[a]<<" ";

}