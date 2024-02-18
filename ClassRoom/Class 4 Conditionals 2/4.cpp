#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the month number: ";
    int n;cin>>n;
    //1 3 5 7 8 10 12
    //4 6 9 11
    //2
    switch((n<=7 && n%2!=0) || (n>=8 && n%2==0)){
    case 1:cout<<"31";break;
    }
    switch(n==4 || n==6 || n==9 || n==11){
        case 1:cout<<"30";break;
    }
    if(n==2)cout<<"29";
}