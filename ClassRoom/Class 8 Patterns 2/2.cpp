#include <iostream>
using namespace std;
int main(){
    for(int a=1;a<=5;a++){
        for(int b=4;b>=a;b--)
        cout<<" ";
        for(int c=1;c<=a;c++)
        cout<<c;
        for(int d=a-1;d>0;d--)
        cout<<d;
        cout<<endl;
    }
}