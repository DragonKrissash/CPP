#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(6);
    v.push_back(7);
    v.push_back(3);
    v.push_back(4);
    for(int a=0;a<v.size();a++)
    cout<<v[a]<<" ";
}