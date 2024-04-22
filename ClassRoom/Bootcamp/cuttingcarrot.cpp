#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,h;
    cin>>n>>h;
    double tot_area=0.5*h;
    double sm_area=tot_area/n;
    float ht[n];
    cout<<fixed<<setprecision(12);
    for(int a=0;a<n;a++){
        float x=sqrt(2*h*sm_area*(a+1));
        ht[a]=x;
    }
    for(int a=0;a<n-1;a++){
        cout<<ht[a]<<" ";
    }
}