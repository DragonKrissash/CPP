#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;
    for(int a=1;a<=n;a++)
    {   for(int b=2;b<=a;b++)
            cout<<" ";
        if(a==n)
        cout<<"*";
        else{
            
            cout<<"*";
            for(int b=1;b<=2*(n-a)-1;b++)
            cout<<" ";
            cout<<"*";
        }    
        cout<<endl;
    }       
}