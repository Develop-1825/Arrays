#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
//!Not Correct
void sort_signed_values(vector<int>& nums)
{
    int n=nums.size();
    int pos=0;
    int neg=1;
    int index=0;
    while(index<n)
    {
        if(index&1)//odd position => negative values
        {
            if(nums[index]<0)
            {
                // index++;
                neg+=2;
            }
            else
            {
                swap(nums[index],nums[pos]);
                
            }
        }
        else //even position =>positive values
        {
            if(nums[index]>0)
            {
                pos+=2;
                // index++;
            }
            else
            {
                swap(nums[index],nums[neg]);
            }
        }
        index++;
    }
    


}



int main()
{
    system("cls");
    // vector<int> arr={3,1,-2,-5,2,-4};
    vector<int> arr={28,-41,22,-8,-37,46,35,-9,18,-6,19,-26,-37,-10,-9,15,14,31};
    //ans -> 28,-41,22,-8,46,-37,35,-9,18,-6,19,-26,15,-37,14,-10,31,-9
    for(int e:arr)
    {
        cout<<e<<" ";
    }
    cout<<endl;
    sort_signed_values(arr);
    for(int e:arr)
    {
        cout<<e<<" ";
    }
    cout<<endl;
    return 0;
}