#include <iostream>
using namespace std;
int main(){
    for(int a=1;a<=4;a++)
    {
        for(int b=3;b>=a;b--)
        cout<<" ";
        for(int c=1;c<=a;c++)
        cout<<"*";
        cout<<endl;
    }
    for(int a=1;a<=4;a++)
    {
        for(int b=1;b<=a;b++)
        cout<<" ";
        for(int c=3;c>=a;c--)
        cout<<"*";
        cout<<endl;
    }
}