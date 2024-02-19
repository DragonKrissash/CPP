#include <iostream>
using namespace std;
void find(int n,int *fd,int *ld){
    *ld=n%10;
    while(n>9)n/=10;
    *fd=n;
}
int main(){
    cout<<"Enter a number: ";
    int n;cin>>n;
    int fd,ld;
    find(n,&fd,&ld);
    cout<<"The first digit is: "<<fd<<"\nThe last digit is: "<<ld;
}