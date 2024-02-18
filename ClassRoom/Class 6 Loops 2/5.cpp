#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the number: ";
    int n;cin>>n;
    int p=1,pp=1;
    for(int a=1;a<=n;a++)
    {p*=a;
    cout<<"The factorial of "<<a<<" is : "<<p<<"\n";
    }
}