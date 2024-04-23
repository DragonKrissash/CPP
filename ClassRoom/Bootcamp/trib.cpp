#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mat_mul(vector<vector<int>>mat1,vector<vector<int>>mat2){
    int n=mat1.size();
    vector<vector<int>>res(n,vector<int>(n,0));
    for(int a=0;a<n;a++){
        for(int b=0;b<n;b++)
        {
            res[a][b]=0;
            for(int c=0;c<n;c++)
            res[a][b]=res[a][b]+mat1[a][c]*mat2[c][b];
        }
    }
    return res;
}

vector<vector<int>> mat_pow(vector<vector<int>>mat,int n){
    if(n==1)
    return mat;
    else if(n==0)
    return {{1,0,0},{0,1,0},{0,0,1}};
    vector<vector<int>>res=mat_pow(mat,n/2);
    if(n&1 == 1)
    return mat_mul(mat_mul(res,res),mat);
    else
    return mat_mul(res,res);
}


int main(){
    cout<<"Enter the nth term to find the tribonacci: ";
    int n;cin>>n;
    vector<vector<int>>res=mat_mul(mat_pow({{1,2,3},{1,0,0},{0,1,0}},n-2),{{1},{0},{0}});
    cout<<"The nth tribonacci is: "<<res[0][0];
}