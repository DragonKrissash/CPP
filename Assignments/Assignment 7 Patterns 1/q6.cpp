#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the values of m and n: ";
    int m,n;cin>>m>>n;
    for(int a=1;a<=m;a++)
    {
        if(a==1 || a==m)
        for(int b=1;b<=n;b++)
        cout<<"*";
        else{
            cout<<"*";
            for(int b=1;b<=n-2;b++)
            cout<<" ";
            cout<<"*";
        }
        cout<<endl;
    }
}