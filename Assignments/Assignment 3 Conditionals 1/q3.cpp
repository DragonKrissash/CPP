#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the year number: ";
    int y;cin>>y;
    if(y%4==0 && y%100!=0)cout<<"It is a leap year!";
    else if(y%400==0)cout<<"It is a leap year!";
    else cout<<"It is not a leap year!";
}