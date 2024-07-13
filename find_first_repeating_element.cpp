#include<iostream>
#include<stdlib.h>
#include<vector>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int repeat(vector<int>&nums)
{
    unordered_map<int,int>hash;
    for(int i=0;i<nums.size();i++)
    {
        hash[nums[i]]++;
    }

    for(int i=0;i<nums.size();i++)
    {
        if(hash[nums[i]]>1){
            return nums[i];
            break;
        }
    }

    return -1;
   
}

int repeat2(vector<int>&nums)
{
    //using array instead of map but simulating map only 
    vector<int>hash(nums.size(),0);
    for(int i=0;i<nums.size();i++)
    {
        hash[nums[i]]++;
    }

    for(int i=0;i<nums.size();i++)
    {
        if(hash[nums[i]]>1){
            return nums[i];
            break;
        }
    }

    return -1;
}
int main()
{

    system("cls");
    vector<int>nums = {1,5,3,4,3,5,6};
    cout<<repeat2(nums);
    return 0;
}