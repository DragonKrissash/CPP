#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the length and breadth of the rectangle: ";
    int l,b;cin>>l>>b;
    int area=l*b;
    int per=2*(l+b);
    if(area>per)cout<<"The area is greater than the perimeter! ";
    else if(per>area)cout<<"The perimeter is greater than area! ";
    else cout<<"Both are equal!";
}