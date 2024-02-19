#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;
    for(int a=1;a<=2*n-1;a++){
        if(a<=n)
        for(int b=1,c=n;b<=a;b++)
        cout<<c--;
        else
        for(int b=1,c=n;b<=n-(a-n);b++)
        cout<<c--;
        if(a<=n)
        for(int b=1,c=n+1-a;b<=2*(n-a)-1;b++)
        cout<<c;
        else
        for(int b=1,c=a-n+1;b<=2*(a-n)-1;b++)
        cout<<c;
        if(a<=n)
        for(int b=1,c=n+1-a;b<=a;b++,c++)
        {if(c==1)
        continue;
        else
        cout<<c;}
        else
        for(int b=1,c=b+a-n;b<=n-(a-n);b++)
        cout<<c++;
        cout<<endl;
    }
    
}