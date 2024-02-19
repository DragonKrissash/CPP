#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;
    for(int a=1;a<=n;a++)
    {   if(a==1)
        for(int b=1;b<=2*n-1;b++)
        cout<<char(64+b);
        else{int d=1;
            for(int b=n,c=1;b>=a;b--)
            cout<<char(64+d++);
            for(int b=1;b<=2*(a-1)-1;b++,d++)
            cout<<" ";
            for(int b=n,c=1;b>=a;b--)
            cout<<char(64+d++);
        }
        
        cout<<endl;
    }       
}