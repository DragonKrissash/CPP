#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the size of the array: ";
    int n;cin>>n;
    int arr[n];
    for(int a=0;a<n;a++)
    cin>>arr[a];
    cout<<"Enter the element to search in the array: ";
    int x;cin>>x;
    bool y=false;
    for(int a=0;a<n;a++)
    if (arr[a]==x) {y=true;break;}
    cout<<(y? "Element is present": "Element is absent");
}