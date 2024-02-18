#include <iostream>
using namespace std;
int main(){
    for(int a=1,c=1;a<=5;a++)
    {   c=(a%2!=0)? 1:0;
        for(int b=1;b<=a;b++)
        {cout<<c;
         c=(c==0)? 1:0;   
        }
        cout<<endl;
    }
}