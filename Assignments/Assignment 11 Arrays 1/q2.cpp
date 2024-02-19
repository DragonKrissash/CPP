#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the size of the array: ";
    int n;cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int a=0;a<n;a++)
    cin>>arr[a];
    int min=INT_MAX;
    for(int a=0;a<n;a++)
    if(min>arr[a])
    min=arr[a];
    cout<<"The minimum of the array: "<<min;
}