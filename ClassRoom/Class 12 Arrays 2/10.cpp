#include <bits/stdc++.h>
using namespace std;
void swap(int* p, int *q){
    int temp=*p;
    *p=*q;*q=temp;
}
int main(){
    cout<<"Enter the number of elements: ";
    int n;cin>>n;
    cout<<"Enter the elements: ";
    int arr[n];
    for(int a=0;a<n;a++)
    cin>>arr[a];
    for(int a=0,b=n-1;a!=b;){
        swap(&arr[a++],&arr[b--]);
    }
    for(int a=0;a<n;a++)
    cout<<arr[a];
}