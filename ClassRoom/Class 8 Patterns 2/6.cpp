#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;
    for(int a=1;a<=2*n-1;a++){
        cout<<a;
    }
    cout<<endl;
    for(int a=1;a<n;a++){
        for(int b=n-1,e=1;b>=a;b--)
        cout<<e++;
        for(int c=1;c<=2*a-1;c++)
        cout<<" ";
        for(int d=n-1,f=n+a;d>=a;d--,f++)
        cout<<f;
        cout<<endl;
    }
}