#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int sum(vector<int> nums, int s,int e)
{
    int sum = 0;
    for (int i = s; i < e; i++)
    {
        sum += nums[i];
    }
    return sum;
}

//most optimal
int leet_code(vector<int>&nums)
{
    int n = nums.size();
    int pivot = 0;
    int left_sum=0;//initially 0
    int right_sum=sum(nums,1,n);// initially, it is the sum of the whole array

    //at worst case, pivot element can be the second last
    while (pivot < n)
    {

        if (left_sum == right_sum)
        {
            return pivot;
            break;
        }
        else //if sums are not equal
        {
           pivot++;//increase the pointer 
           //if it is standing on n,then it went out of bound and pivot doesn't exist
            if(pivot == n)
            break; 
            //otherwise -> keep balancing
            //add the elements to left_sum as we go from left to right
           left_sum+=nums[pivot-1];
            //minus the elements from right_sum as we go from left to right
           right_sum-=nums[pivot];
        }
    }
    return -1;
}

//better -> takes o(n) space
int lakshay(vector<int>&nums)
{
    vector<int>left_sum(nums.size(),0);
    vector<int>right_sum(nums.size(),0);
    int n=nums.size();

    for(int i=1;i<n;i++)
    {
        left_sum[i]=nums[i-1]+left_sum[i-1];
    }

    for(int i=n-2;i>=0;i--)
    {
        right_sum[i]=nums[i+1]+right_sum[i+1];
    }


    for(int e:left_sum)
    {
        cout<<e<<" ";
    }
    cout<<endl;
    for(int e:right_sum)
    {
        cout<<e<<" ";
    }

    for(int i=0;i<n;i++)
    {
        if(left_sum[i]==right_sum[i])
        return i;
    }
    return -1;
}

// //cannot handle the edge cases like {2,1,-1} where lsum=0 , rsum=0 and pivot = 0th index
// int pivot(vector<int>&arr,int n)
// {
//     int ans=-1;
//     int s=0;
//     int e=n-1;
//     int lsum=arr[0];
//     int rsum=arr[n-1];
//     while(s<e)
//     {
//         if(lsum==rsum)
//         {
//             if(e-s==2)
//             {
//                 return s+1;
//             }
//             else
//             return -1;
//         }
//         else if(lsum<rsum)
//         {
//             s++;
//             lsum+=arr[s];
//         }
//         else //lsum > rsum
//         {
//             e--;
//             rsum+=arr[e];
//         }
//     }
//     return ans;
// }

int main()
{
    system("cls");
    vector<int> arr={1,7,3,6,5,6};
    // vector<int> arr={1,2,3};
    // vector<int> arr={2,1,-1};
    // for(int e:arr)
    // {
    //     cout<<e<<" ";
    // }
    // cout<<endl;
    
    cout<<lakshay(arr);

    // for(int e:arr)
    // {
    //     cout<<e<<" ";
    // }
    // cout<<endl;
    return 0;
}