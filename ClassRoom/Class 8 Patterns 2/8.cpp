#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;
    for(int a=1;a<=2*n-1;a++){
        for(int b=1;b<=2*n-1;b++)
        {int i=a,j=b;
            if(a>n)i=2*n-a;
            if(b>n)j=2*n-b;
            cout<<n+1-min(i,j);

        }
        cout<<endl;
    }
}