#include <bits/stdc++.h>
using namespace std;
int singleNumber(vector<int>& nums) {
     int n=nums.size();
     int on=0;
     int num=0;
     for(int a=0;a<32;a++){
        on=0;
        for (int b=0;b<n;b++){
            if(((nums[b]>>a)&1) == 1)
            on++;
            }
        if(on%3==1)
        num=num+(1<<a);
     }   
     return num;
    }