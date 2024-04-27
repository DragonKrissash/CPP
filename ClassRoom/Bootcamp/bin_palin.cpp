#include <bits/stdc++.h>
using namespace std;

string numtobin(int n){
    string word="";
    while(n>0){
        if(n%2==0)
        word=word+'0';
        else
        word=word+'1';
        n=n/2;
    }
    string word2="";
    for(int a=0;a<word.length();a++)
    word2=word[a]+word2;
    return word2;
}

int bintonum(string word){
    int num=0;
    for(int a=word.length()-1;a>=0;a--)
    if(word[a]=='1')
    num=num+pow(2,word.length()-1-a);
    return num;
}

int main(){
    cout<<"Enter a number: ";
    int n;
    cin>>n;
}