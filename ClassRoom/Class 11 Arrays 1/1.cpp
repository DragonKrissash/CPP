#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the array size: ";
    int n;cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int a=0;a<n;a++)
    cin>>arr[a];
    int sum=0;
    for(int a=0;a<n;a++)
    sum+=arr[a];
    cout<<"The sum of the elements: "<<sum;
}