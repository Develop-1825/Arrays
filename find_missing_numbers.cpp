#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int missing_number(vector<int>& nums)
{
    int n=nums.size();
    int expected_sum = (n*(n+1))/2;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=nums[i];
    }

    return expected_sum-sum;
}

int missing_number2(vector<int>& nums)
{
    int n=nums.size();
    int ans=0; //when doing XOR,always make sure that you intitialise the variable with 0
    //because, otherwise , it  will xor with the garbage value in the variable.

  //XOR the whole range
   for(int i=0;i<=n;i++)
   {
     ans=ans^i;
   }

   //XOR the elements of the array with previous XOR
   //That way all the same elements will become zero and only the missing element will remain which will be XOR-ed with 0 
   // 0 ^ 3 = 3
   for(int i=0;i<n;i++)
   {
     ans=ans^nums[i];
   }
   return ans;
}

int main()
{
    system("cls");
    vector<int> arr={3,1,0};
    cout<<"Missing number : "<<missing_number2(arr);
    return 0;
}