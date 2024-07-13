#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

//!Method - Negative marking
//-> for each element in the array, mark arr[element] visited. That way the element that is not present in the array will not be marked and we'll return that index.
//Eg: if we've the array{1,3,5,3,4} we will mark the indexes 1,3,4,5 will be marked but the index 2 will not be marked => 2 is the missing element
int missing(vector<int>& nums)
{
    int n=nums.size();
    // it is given that the array will contain element [1,n]
    // So, when we want to access the 0th index we do element-1 => i-1
    for(int i=0;i<n;i++)
    {
        // cout<<"->"<<i<<" "<<abs(nums[i])-1<<endl;
        if(nums[abs(nums[i])-1]>0) //important step because the index for the the duplicate element will be negated twice,which will make it positive.So make an element visited(-ve) only when it is greater than 0.
        nums[abs(nums[i])-1]*=-1;
    }

    int ans;
    for(int i=0;i<n;i++)
    {
        if(nums[i]>0)
        {
            ans=i+1;
            break;
        }
    }
    
    return ans;
}
int main()
{
    system("cls");
    vector<int> arr={1,3,5,3,4};
    cout<<missing(arr);
    return 0;
}