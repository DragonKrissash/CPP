#include <bits/stdc++.h>
using namespace std;

void sortVector(vector<int>& v,int n) {
    int noo=0,noz=0;
    for(int a=0;a<n;a++)
    {
        if(v[a]==0)noz++;
        else noo++;
    }
    for(int a=0;a<n;a++){
        if(a<noz)v[a]=0;
        else v[a]=1;
    }
}

int main(){
    cout<<"Enter the number of elements: ";
    int n;cin>>n;
    cout<<"Enter the array elements: ";
    vector<int>v;
    for(int a=0;a<n;a++)
    {
        int x;cin>>x;v.push_back(x);
    }
    sortVector(v,n);
    cout<<"The sorted array is: ";
    for(int a=0;a<n;a++)
    cout<<v[a]<<" ";

}