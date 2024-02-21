#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the number of elements: ";
    int n;cin>>n;
    int arr[n];
    cout<<"Enter the array elements: ";
    for(int a=0;a<n;a++)
    cin>>arr[a];
    bool yes=true;
    for(int a=0,b=n-1;a<=b;a++,b--)
    if(arr[a]==arr[b])
    continue;
    else {yes=false;break;}
    if(yes)cout<<"The array is palindrome!";
    else cout<<"The array is not palindrome!";
}