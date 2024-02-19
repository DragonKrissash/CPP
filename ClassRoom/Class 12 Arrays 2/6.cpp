#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(9);
    v.push_back(4);
    v.push_back(2);
    v.push_back(7);
    sort(v.begin(),v.end());
    for(int a=0;a<v.size();a++)
    cout<<v[a]<<" ";
}