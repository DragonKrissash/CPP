#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the size of the array: ";
    int n;cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int a=0;a<n;a++)
    cin>>arr[a];
    int max=0,max2=0;
    for(int a=0;a<n;a++)
    {
        if(max<=arr[a])
        {
            max2=max;
            max=arr[a];
        }
    }
    cout<<"The second largest element: "<<max2;
}