#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the number of terms: ";
    int n;cin>>n;
    for(int a=1,b=4;a<=n;a++,b+=3)
    cout<<b<<" ";
}