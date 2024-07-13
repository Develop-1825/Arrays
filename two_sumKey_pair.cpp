#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
class Solution {
public:
    
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        // for(int i=0;i<nums.size();i++)
        // {
        //     for(int j=i+1;j<nums.size();j++)
        //     {
        //         if(nums[i]+nums[j]==target)
        //         {
        //         ans.push_back(i);
        //         ans.push_back(j);
        //         }

        //     }
        // }
        vector<int> copy=nums;
        sort(nums.begin(),nums.end());
    
        int left=0;
        int right=nums.size()-1;
        int ans1,ans2;
        while(left<right)
        {
            int sum=nums[left]+nums[right];
            if(sum>target)
            {
                right--;
            }
            else if(sum<target)
            {
                left++;
            }
            else
            {
                ans1=nums[left];
                ans2=nums[right];
                break;
            }
        }

        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(copy[i]==ans1 || copy[i]==ans2)
            ans.push_back(i);
        }
        
        return ans;
        
    }
};