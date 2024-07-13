#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void print_pairs(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i]<<","<<arr[j]<<"\t";
        }
        cout<<endl;
    }
}
int main()
{
    system("cls");
    int arr[3]={10,20,30};
    print_pairs(arr,3);
    return 0;
}