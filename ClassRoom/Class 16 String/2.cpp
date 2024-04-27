#include <bits/stdc++.h>
using namespace std;
int main(){
    string sen;
    getline(cin,sen);
    stringstream ss(sen);
    string temp;
    while(ss>>temp)
    cout<<temp;
}