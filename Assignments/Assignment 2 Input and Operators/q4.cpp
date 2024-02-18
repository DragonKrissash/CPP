#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the height of the cylinder: ";
    int h;cin>>h;
    cout<<"Enter the radius of the cylinder: ";
    int r;cin>>r;
    float vol=22.0/7.0 * r*r*h;
    cout<<"The volume of the cylinder is: "<<vol;
}