#include<iostream>
#include<stdlib.h>
#include<vector>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
vector<int> add_nums(vector<int>&num1,vector<int>&num2)
{
    int i=num1.size()-1;
    int j=num2.size()-1;
    vector<int>ans;
    int carry=0;
    while(i>=0 && j>=0)
    {
        int sum = num1[i]+num2[j]+carry;
        int res = sum % 10;
        ans.push_back(res);
        carry = sum / 10; 
        i--;
        j--;
    }

    //if second number is exhausted
    while(i>=0)
    {
        int sum = num1[i] + carry;
        ans.push_back(sum%10);
        carry=sum/10;
        i--;
    }

    //if first number is exhausted
    while(j>=0)
    {
        int sum = num2[j] + carry;
        ans.push_back(sum%10);
        carry = sum/10;
        j--;
    }

    // if carry is remaining after adding all numbers
    while(carry)
    {
        ans.push_back(carry%10);
        carry = carry/10;
    }

    reverse(ans.begin(),ans.end());
    return ans;
}


int main()
{

    system("cls");
    // vector<int> num1 = {8,9,2,1};
    // vector<int> num2 = {9,9};
    vector<int> num1 = {1,1,1};
    vector<int> num2 = {1,1,1};
    for(int i : add_nums(num1,num2))
    {
        cout<<i;
    }
    return 0;
}