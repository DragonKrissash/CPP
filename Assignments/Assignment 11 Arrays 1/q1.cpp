#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the size of the array: ";
    int n;cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int a=0;a<n;a++)
    cin>>arr[a];
    int pro=1;
    for(int a=0;a<n;a++)
    pro*=arr[a];
    cout<<"The product of elements of array: "<<pro;    
}