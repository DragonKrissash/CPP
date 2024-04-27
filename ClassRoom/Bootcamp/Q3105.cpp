#include <bits/stdc++.h>
using namespace std;
int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        int inclen=0,leninc=1,lendec=1,declen=0;
        for(int a=0;a<n-1;a++)
        {
            if(nums[a]<nums[a+1])
            {leninc++;}
            else
            {
                if(inclen<=leninc)
                inclen=leninc;
                leninc=1;
            }
            if(nums[a]>nums[a+1])
            {lendec++;}
            else{
                if(declen<=lendec)
                    declen=lendec;
                    lendec=1;
            }
        }
        if(inclen<leninc)
        inclen=leninc;
        if(declen<lendec)
        declen=lendec;
        return inclen>declen ? inclen:declen;
    }

int main(){
    cout<<"Enter the number of elements: ";
    int n;cin>>n;
    vector<int> nums(n,0);
    for(int a=0;a<n;a++)
    cin>>nums[a];
    cout<<longestMonotonicSubarray(nums);
    return 0;
}