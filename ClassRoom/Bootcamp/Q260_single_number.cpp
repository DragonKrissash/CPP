#include <bits/stdc++.h>
using namespace std;
vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        int var=0;
        for (int a=0;a<n;a++)
        {
            var=var^nums[a];
        }
        int i=0;int temp=var;
        for(int a=1;a<=32;a++){
            if(temp&1==1)
            {   i=a;
                break;
            }
            else{
                temp=temp>>1;
            }
        }
        int num1=0,num2=0;
        for(int a=0;a<n;a++){
            if((nums[a]>>i)&1 ==1)
            num1=num1^nums[a];
            else
            num2=num2^nums[a];
        }
        vector<int> ans;
        ans.push_back(num1);
        ans.push_back(num2);
        return ans;
    }