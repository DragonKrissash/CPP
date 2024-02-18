#include <iostream>
using namespace std;
int main(){
    for(int a=1;a<=5;a++)
    {
        for(int b=1;b<=5;b++)
        if(a==b || b==6-a)
        cout<<"*";
        else cout<<" ";
        cout<<endl;
    }
}