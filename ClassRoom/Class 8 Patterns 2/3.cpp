#include <iostream>
using namespace std;
int main(){
    for(int a=1;a<=5;a++){
        for(int b=4;b>=a;b--)
        cout<<" ";
        for(int c=1;c<=2*a-1;c++)
        cout<<"*";
        cout<<endl;
    }
    for(int a=1;a<=4;a++){
        for(int c=1;c<=a;c++)
        cout<<" ";
        for(int b=1;b<=2*(5-a)-1;b++)
        cout<<"*";
        cout<<endl;

    }
}