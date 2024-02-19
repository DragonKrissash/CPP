#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;
    for(int a=1;a<=n;a++)
    {
        for(int b=a;b<n;b++)
        cout<<" ";
        for(int c=a;c>0;c--)
        cout<<char(c+64);
        for(int c=2;c<=a;c++)
        cout<<char(c+64);
        cout<<endl;
    }       
}