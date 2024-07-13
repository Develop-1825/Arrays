#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int unique_element(int arr[],int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}
int main()
{
    system("cls");
    int arr[9]={10,2,11,10,2,13,15,13,15};
    cout<<"The unique element is: "<<unique_element(arr,9);
    return 0;
}