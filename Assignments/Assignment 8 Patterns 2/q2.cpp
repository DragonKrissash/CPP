#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;
    for(int a=1;a<=n;a++)
    {
        for(int b=a;b<n;b++)
        cout<<" ";
        for(int c=1;c<=2*a-1;c++)
        cout<<(char)(c+64);
        cout<<endl;
    }       
}