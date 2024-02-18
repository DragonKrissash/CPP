#include <iostream>
using namespace std;
int main(){
    for(int a=1;a<=5;a++)
    {for(int b=1,c=1;b<=a;c+=2,b++)
    cout<<c;
    cout<<endl;
    }
}