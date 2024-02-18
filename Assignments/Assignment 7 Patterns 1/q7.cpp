#include <iostream>
using namespace std;
int main(){
    for(int a=4;a>0;a--)
    {
        for(int b=1;b<a;b++)
        cout<<" ";
        for(int c=1;c<=4;c++)
        cout<<"*";
        cout<<endl;
    }
}