#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void rotate(vector<int>& arr,int k)
{
    int n=arr.size();
    vector<int> ans(n); //! initialisation is crucial step

    for(int index=0;index<n;index++)
    {
        //position after the rotation
        int new_pos=(index+k)%n;
        ans[new_pos]=arr[index];// jokhon e ekta notun vector a value assign korbi tokhon make sure je vector tar size initialise kora thake,nahole kajj korbena
    }
    //update the old array with the rotated ans
    arr=ans;
    
}
int main()
{
    system("cls");
    vector<int> arr={1,2,3,4,5};
    int k;
    cout<<"Enter the value of K:"<<endl;
    cin>>k;
    for(int e:arr)
    {
        cout<<e<<" ";
    }
    cout<<endl;

    rotate(arr,k);

    for(int e:arr)
    {
        cout<<e<<" ";
    }
    cout<<endl;
    return 0;
}