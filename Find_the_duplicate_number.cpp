#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

//Method-1
// O(nlogn)
int brute_f(vector<int>& nums)
{
    int ans;
    sort(nums.begin(),nums.end());
    // cout<<"Printing nums.end(): "<<*(nums.end())<<endl;
    for(int i=0;i<nums.size()-1;i++)
    {
        if(nums[i]==nums[i+1])
        ans = nums[i];
    }
    return ans;
}


//Method-2
//! Negative marking method -> using the elements to move to index
//Why it works?
//-> Once we visit the first occurence of the repeating element, we mark the element at the arr[first_occurence] to be -1.
// Therefore, when we visit the second occurence of the repeating element we will visit the same element again but this time it will already be marked negative
//That's how we'll know that it is the repeating element.
//O(n)
int negative_marking(vector<int>& nums)
{
    int n=nums.size();
    int ans;
    for(int i=0;i<n;i++)
    {
        // int index=abs(nums[i]);
        // vector<int>nums={1,3,4,2,2};
        //visit the position of ith element //take abs() because ith element might have been visited by some other element previously
        if(nums[abs(nums[i])]<0) //if number has been previously marked -ve => it has been visited before
        {
            //therefore the index => i_th element is the ans
            // ans = index;
            ans = abs(nums[i]);
            break;
        }
       
        //mark the nums[i_th element] visited
        nums[abs(nums[i])]=-1*nums[abs(nums[i])]; //abs because we've marked the elements 0
    
    }
    return ans;
}

//Method-3 : Positioning method
//! Put the elements in their proper position in the array.
//Why it works
//-> in our array we have n+1 element [1,n]. Therefore , all the elements will obviously have index < n+1 because ekta element duplicate acche
//For example if we have array of size 5, 5=4+1 => n=4....therefore array will contain [1,4] with one element repeating.
//In an array of size 5 we have the index = 0,1,2,3,4.
//Now, if we use swapping for putting 1 at index=1 , 2 at index=2 , 3 at index=3 and 4 at index=4 then
// the 0th position will be left with the duplicate element.
//that's how it will work
int duplicate(vector<int>& nums)
{
    int n=nums.size();
    int i=0;
    int ans;
    while(i<n)
    {
        if(nums[i]==i)
        i++;
        else
        {
            if(nums[i]==nums[nums[i]])
            {
                ans = nums[i];
                break;
            }
            else
            {
                swap(nums[i],nums[nums[i]]);
            }
        }   
    }
    return ans;
} 


//positioning method
int duplicate2(vector<int>&nums)
{
    while(nums[0] != nums[nums[0]])
    {
        swap(nums[0],nums[nums[0]]);
    }
    return nums[0];
}

int duplicate3(vector<int>&nums)
{
    int n=nums.size();
    int i=0;
    while(i<n)
    {
        swap(nums[0],nums[nums[0]]);
        i++;
    }
    return nums[0];
}


int main()
{
    system("cls");
    // vector<int>nums={1,2,4,3,4};
    // vector<int>nums={3,1,3,4,2};
    vector<int>nums={1,3,4,2,2};
    cout<<"Duplicate:"<<duplicate3(nums);
    return 0;
}