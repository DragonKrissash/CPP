#include <iostream>
#include<vector>
using namespace std;
void change(vector<int> &v){
    v[0]=100;
}
int main(){
    vector<int>v;
    v.push_back(1);v.push_back(4);v.push_back(8);v.push_back(3);
    for(int a=0;a<v.size();a++)
    cout<<v[a]<<" ";
    change(v);
    cout<<endl;
    for(int a=0;a<v.size();a++)
    cout<<v[a]<<" ";
}