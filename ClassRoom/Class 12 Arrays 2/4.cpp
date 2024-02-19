#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>v(5,7);
    cout<<v.size()<<endl;
    cout<<v.capacity();
    cout<<endl<<v[4];

}