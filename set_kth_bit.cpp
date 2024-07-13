#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int set_k_th_bit(int n,int k)
{
    int mask=1<<k;
    int ans=n|mask;
    return ans;
}
int main()
{
    system("cls");
    // int n=15;
    // int k=3;
    //expected ans=15;

    int n=10;
    int k=2;
    //expected ans = 14
    cout<<set_k_th_bit(n,k);
    return 0;
}