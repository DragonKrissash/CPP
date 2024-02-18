#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the first character: ";
    char c1; cin>>c1;
    cout<<"Enter the second character: ";
    char c2; cin>>c2;
    cout<<"The difference between their ascii values is: "<<abs(int(c1) - int(c2));
}