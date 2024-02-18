#include <iostream>
using namespace std;
int main(){
    cout<<"Enter a character to check if it is character or not! ";
    char c;cin>>c;
    if(c>='a'&&c<='z' || c<='Z' && c>='A')
    cout<<"The entered input is a character!";
    else
    cout<<"The input is not a character!";
}