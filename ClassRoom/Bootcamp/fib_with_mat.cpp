#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mat_mul(vector<vector<int>>mat1,vector<vector<int>>mat2){
    int n=mat1.size();
    vector<vector<int>>res(n,(vector<int>(n,0)));
    for(int a=0;a<n;a++){
        for (int b=0;b<n;b++){
            res[a][b]=0;
            for(int k=0;k<n;k++){
                res[a][b]=res[a][b]+mat1[a][k]*mat2[k][b];
            }
        }
    }
    return res;
}

vector<vector<int>> mat_pow(vector<vector<int>>mat,int n){
    vector<vector<int>> id={{1,0,0},{0,1,0},{0,0,1}};
    if(n==0)
    return id;
    else if(n==1)
    return mat;
    vector<vector<int>> res=mat_pow(mat,n/2);
    if(n&1 == 1)
    return mat_mul(mat_mul(res,res),mat);
    else
    return mat_mul(res,res);
}

int main(){
    cout<<"Enter the number of term of fibonacci series: ";
    int n;cin>>n;
    vector<vector<int>>kernel={{1,1},{1,0}};
    vector<vector<int>>fib=mat_mul(mat_pow(kernel,n-1),{{1},{0}});
    cout<<"The "<<n<<"th term of fibonacci series is: "<<fib[0][0]<<endl;
}