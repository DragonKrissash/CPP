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
}