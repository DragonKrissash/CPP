#include <iostream>
using namespace std;
void fun(int a,int b){
    for(int c=(a%2==0 ? a+1:a);c<=b;c+=2)
    cout<<c<<" ";
}
int main(){
    int n;cout<<"Enter two numbers: ";
    int a,b;cin>>a>>b;
    fun(a,b);
}