#include <bits/stdc++.h>
using namespace std;

int scoreOfString(string s) {
        int sum=0;
        for(int a=0;a<s.length()-1;a++){
            cout<<abs(s[a]-s[a+1])<<endl;
            sum=sum+abs(s[a]-s[a+1]);
        }
        return sum;
    }

int main(){
    string word;
    cin>>word;
    cout<<scoreOfString(word);
}