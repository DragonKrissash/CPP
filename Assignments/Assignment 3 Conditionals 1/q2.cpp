#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the radius of the circle: ";
    int r;cin>>r;
    float area=3.14*r*r;
    float cir=2*3.14*r;
    if(area>cir)cout<<"The area is greater than the circumference."<<endl;
    else cout<<"The circumference is greater thant the area.";
}