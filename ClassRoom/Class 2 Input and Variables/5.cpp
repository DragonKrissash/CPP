#include <iostream>
using namespace std;
int main(){
    float x;
    cin>>x;
    if(x>=0){
      cout<<"Fractional part of "<<x<<" is "<<(float)(x-(int)x);  
    }
    else{
        float y=-x;
    cout<<"Fractional part of "<<x<<" is "<<(float) (int)y+1-y;  //To get the fractional part we
    }
}