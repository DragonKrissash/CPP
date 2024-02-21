#include <bits/stdc++.h>
using namespace std;

void mergeSortedArrays(int arr1[],int arr2[],int n1,int n2){
    int arrf[n1+n2];
    for(int a=0,b=0,k=0;a<n1 || b<n2;){
        if(a==n1)
        arrf[k++]=arr2[b++];
        if(b==n2)
        arrf[k++]=arr1[a++];
        if(arr1[a]<arr2[b])
        arrf[k++]=arr1[a++];
        else 
        arrf[k++]=arr2[b++];
    }
    for(int  i=0;i<n1+n2;i++)
    cout<<arrf[i]<<" ";
}

int main(){
    cout<<"Enter the size of 1st array: ";
    int n1;cin>>n1;
    int arr1[n1];
    cout<<"Enter the elements of 1st array: ";
    for(int a=0;a<n1;a++)
    cin>>arr1[a];
    cout<<"Enter the size of the 2nd array: ";
    int n2;cin>>n2;
    int arr2[n2];
    cout<<"Enter the elements of the 2nd array: ";
    for(int a=0;a<n2;a++)
    cin>>arr2[a];
    mergeSortedArrays(arr1,arr2,n1,n2);
}