#include <iostream>
#include <vector>
using namespace std;
int main(){
    cout<<"Enter 5 numbers: ";
    vector<int>v;
    for(int a=1;a<=5;a++){
        int x;cin>>x;
        v.push_back(x);
    }
    for(int a=0;a<v.size();a++)
    cout<<v[a]<<" ";
}