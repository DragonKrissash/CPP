#include <iostream>
using namespace std;
int main(){
    int n;cout<<"Enter a number to check if it is divisible by 3 or 5: ";
    cin>>n;
    if(n%3==0 && n%5!=0)cout<<"The number is divisible only by 3";
    else if (n%5==0 && n%3!=0) cout << "The number is divisible only by 5";
    else if(n%3==0 && n%5==0) cout << "The number is divisible by both 3 and 5";
    else cout << "The number is not divisible by 3 or 5";
}