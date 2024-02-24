#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the rows and columns of matrix 1: ";
    int m,n;cin>>m>>n;
    cout<<"Enter the elements: \n";
    int arr1[m][n];
    for(int a=0;a<m;a++)
    for(int b=0;b<n;b++)
    cin>>arr1[a][b];
    cout<<"Enter the rows and columns of matrix 2: ";
    int p,q;cin>>p>>q;
    cout<<"Enter the elements: \n";
    int arr2[p][q];
    for(int a=0;a<p;a++)
    for(int b=0;b<q;b++)
    cin>>arr2[a][b];

    int res[m][q];
    for(int a=0;a<m;a++)
    {for(int b=0;b<q;b++)
            {res[a][b]=0;
            for(int c=0;c<n;c++)
            res[a][b]=res[a][b]+arr1[a][c]*arr2[c][b];
            }
        }
    

    cout<<"The resultant: "<<endl;
    for(int a=0;a<m;a++)
    {for(int b=0;b<q;b++)
    cout<<res[a][b]<<" ";
    cout<<endl;
    }
} 
