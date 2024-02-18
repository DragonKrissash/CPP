#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the cost price of the item: ";
    int cp;cin>>cp;
    cout<<"Enter the selling price of the item: ";
    int sp;cin>>sp;
    if(sp>cp)cout<<"The profit is: "<<(sp-cp);
    else if(sp<cp)cout<<"The loss is: "<<(cp-sp);
    else cout<<"There is no profit or loss!";
}