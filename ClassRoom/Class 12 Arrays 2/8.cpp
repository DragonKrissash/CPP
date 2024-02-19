#include <iostream>
#include <vector>
using namespace std;
int main(){
    cout<<"Enter the number of elements: ";
    int n;cin>>n;
    cout<<"Enter the elements of the array: ";
    int arr[n];
    for(int a=0;a<n;a++)
    cin>>arr[a];
    int x=7;
    for(int a=0;a<n;a++)
    for(int b=a+1;b<n;b++)
    {
        if((arr[a]+arr[b])==x)
        {cout<<"("<<a<<","<<b<<") ";
        cout<<endl;}
    }
}