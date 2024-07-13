#include<iostream>
#include<stdlib.h>
#include<vector>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
//TLE
double brute_force(vector<int>& nums,int k)
{
    int i=0;
    int j=k-1;
    double avg;
    int max_sum=INT_MIN;
    while(j<nums.size())
    {
        int sum=0;
        for(int y=i;y<=j;y++)
        {
            sum+=nums[y];
        }
        max_sum=max(max_sum,sum);
        i+=1;
        j+=1;
    }
    avg = max_sum/(double)k;
    return avg;
}

double sliding_window(vector<int>&nums ,int k)
{
    int i=0;
    int j=k-1;
    double avg;
    int max_sum=INT_MIN;
    int sum=0;
    for(int y=i;y<=j;y++)
    {
        sum+=nums[y];
        max_sum=max(max_sum,sum);
    }
    j++; //to handle the case of n==k

    while(j<nums.size())
    {
        sum-=nums[i];
        i++;
        sum+=nums[j];
        j++;
        max_sum=max(max_sum,sum);
    }

    avg=max_sum/(float)k;
    return avg;

}
int main()
{

    system("cls");
    // vector<int>nums={1,12,-5,-6,50,3};
    vector<int>nums={5};
    cout<<sliding_window(nums,1);
    return 0;
}