#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;
    for(int a=1;a<=n;a++){
        if(a==1)
        for(int b=1;b<=2*n-1;b++)
        cout<<"*";
        else{
            for(int b=n;b>=a;b--)
            cout<<"*";
            for(int c=1;c<=2*(a-1)-1;c++)
            cout<<" ";
            for(int d=n;d>=a;d--)
            cout<<"*";
        }
        cout<<endl;
    }
}