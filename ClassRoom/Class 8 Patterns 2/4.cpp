#include <iostream> 
using namespace std;
int main(){
    int n; cin>>n;
    int nst=1,nsp=n-1;
    for(int a=1;a<=2*n-1;a++){
        for(int b=1;b<=nsp;b++)
        cout<<" ";
        if(a<=n-1)nsp--;
        else nsp++;
        for(int c=1;c<=nst;c++)
        cout<<"*";
        if(a<=n-1)nst+=2;
        else nst-=2;
        cout<<endl;
    }
}