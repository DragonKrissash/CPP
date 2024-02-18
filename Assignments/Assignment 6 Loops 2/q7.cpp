#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the number of terms: ";
    int n;cin>>n;
    int a=0,b=1,c;
    for(int d=1;d<=n;d++)
    {   c=a+b;
        cout<<b<<" ";
        a=b;b=c;c=a+b;
    }
}