#include <bits/stdc++.h>
using namespace std;

bool isSpecial(string word,char c,int ind){
    for(int a=ind;a<word.length();a++){
        if(islower(c) && word[a]==toupper(c))
        return true;
        else if(isupper(c) && word[a]==tolower(c))
        return true;
    }
    return false;
}

int numberOfSpecialChars(string word) {
        char c;int spe=0;
        for(int a=0;a<word.length();a++)
        {   if(a==0)
            {
                if(isSpecial(word,word[a],1))
                spe++;
            }
            else{
                if(word[a]==word[a-1])
                continue;
                else{
                    if(isSpecial(word,word[a],a+1))
                    spe++;
                }
            }
            
        }
        return spe;
    }

int main(){
    string word;
    cin>>word;
    sort(word.begin(),word.end());
    cout<<numberOfSpecialChars(word);
}