#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the number of terms: ";
    int n;cin>>n;
    int a=0,b=1,c=1;
    for(int d=1;d<=n;d++)
    {
        cout<<c<<" ";
        a=b;b=c;c=a+b;
    }
}