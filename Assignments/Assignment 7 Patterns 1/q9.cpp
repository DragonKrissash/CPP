#include <iostream>
using namespace std;
int main(){
    for(int a=5;a>0;a--){
        for(int b=1;b<a;b++)
        cout<<" ";
        for(int c=1,d=5;d>=a;d--,c++)
        cout<<(char)(64+c);
        cout<<endl;
    }
}