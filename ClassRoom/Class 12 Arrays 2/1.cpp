#include <iostream>
using namespace std;
int main(){
    int arr[4]={1,2,3,4};
    int *p=arr;
    for(int a=0;a<4;a++)
    cout<<p[a]<<" ";
}