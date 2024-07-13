#include<iostream>
#include<stdlib.h>
#include<vector>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int remove_duplicate(vector<int>&nums)
{
    int i=1,j=0; //i to traverse and j to keep unique elements.
    while(i<nums.size())
    {
        if(nums[i]==nums[j]) //if simultaneous elements are same then move i forward to find unique element
        i++;
        else //if an unique element is found then
        {
            j++; //increase the j pointer and put the unique element at new j
            nums[j]=nums[i];
            i++; //increase i
        }
    }

    return j+1;
}

int main()
{

    system("cls");
    vector<int>a={0,0,1,1,1,2,2,3,3,4};
    for(auto element:a)
    {
        cout<<element<<" ";
    }
    int ans=remove_duplicate(a);
    cout<<endl<<endl;
    for(int i=0;i<ans;i++)
    {
        cout<<a[i]<< " ";
    }
    return 0;
}