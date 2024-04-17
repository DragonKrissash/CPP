#include <bits/stdc++.h>
using namespace std;
int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int num=0;
        for (int a=0;a<n;a++)
        {
            num=num^nums[a];
        }
        return num;
    }