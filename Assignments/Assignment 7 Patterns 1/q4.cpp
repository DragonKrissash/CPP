#include <iostream>
using namespace std;
int main(){
    for(int a=1;a<=5;a++)
    {if(a%2!=0)
        for(int b=1;b<=a;b++)
        cout<<b;
    else
        for(int b=1;b<=a;b++)
        cout<<(char)(64+b);
    cout<<endl;
    }
}