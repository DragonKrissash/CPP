#include <bits/stdc++.h>
using namespace std;

bool check(int arr[],int n,int arrsm[],int t){
    int a,b=0;
    for(a=0;a<n;){
        if(arr[a]==arrsm[b]){
            a++;
            b++;
        }
        else a++;
    }
    return b==t;
}

int main(){
    cout<<"Enter the number of elements: ";
    int n;cin>>n;
    cout<<"Enter the array elements: ";
    int arr[n];
    for(int a=0;a<n;a++)
    cin>>arr[a];
    cout<<"Enter the number of elements of the small array: ";
    int t;cin>>t;int arrsm[t];
    cout<<"Enter the elements: ";
    for(int a=0;a<t;a++)
    cin>>arrsm[a];
    cout<<check(arr,n,arrsm,t);

}