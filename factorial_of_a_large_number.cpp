#include<iostream>
#include<stdlib.h>
#include<vector>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
vector<int> factorial(int num)
{
    vector<int>ans;
    int carry=0;
    ans.push_back(1);
    for(int i=2;i<=num;i++) //numbers
    {
        for(int j=0;j<ans.size();j++) // multiply with each digit in the prev answer.
        {
            int multiplication_result = ans[j]*i + carry;
            ans[j] = multiplication_result%10;
            carry = multiplication_result/10;
            // cout<<"i="<<i<<"|| Multi:"<<multiplication_result<<"||"<<"Carry:"<<carry<<endl;
        }
        // if carry is remaining store it in the answer to store the final result Eg: In 5! after storing 2 0 we have a carry 1 that is to be stored in order to get 1 2 0.
        while(carry)
        {
            ans.push_back(carry%10);
            carry = carry/10;
        }
    }

   
    cout<<endl;
    reverse(ans.begin(),ans.end());
    return ans;
}


int main()
{

    system("cls");
    int num=20;
    vector<int>ans=factorial(600);
    for(auto res:ans)
    {
        cout<<res;
    }
    return 0;
}