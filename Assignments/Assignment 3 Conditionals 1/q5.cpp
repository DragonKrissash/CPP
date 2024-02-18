#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the x co-ordinate: ";
    int x;cin>>x;
    cout<<"Enter the y co-ordinate: ";
    int y;cin>>y;
    if(x==0 && y==0)cout<<"The point is at origin!";
    else if(x==0 && y!=0) cout<<"The point is on y-axis!";
    else if(x!=0 && y==0)cout<<"The point is on x-axis!";
    else cout<<"The point is not on any axis or origin! ";
}