#include <bits/stdc++.h>
using namespace std;
int main(){
    string name="Raghav garg is a math teacher";
    stringstream s(name);
    string temp;
    while(s>>temp)
    cout<<temp<<endl;
}