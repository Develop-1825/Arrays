#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void dutch_national_flag(vector<int>&arr,int n)
{
    int neg=0; //for negative numbers
    int pos=n-1; //for positive numbers

    while(neg<=pos)
    {
        if(arr[neg]<0) //if negative pointer is pointing to a negative element
        {
            //then no problem,forward the negative pointer
            neg++;
        }
        else if(arr[pos]>=0)//if positive pointer is pointing to a positive element
        {
            //then no problem,forward the positive pointer
            pos--;
        }
        else // if both the pointers point to opposite signed numbers
        {
            //then swap the elements
            swap(arr[neg],arr[pos]);

        }
    }
    
}
int main()
{
    system("cls");
    vector<int> arr={1,2,-3,4,-5,6};
    for(int e:arr)
    {
        cout<<e<<" ";
    }
    cout<<endl;
    
    dutch_national_flag(arr,6);

    for(int e:arr)
    {
        cout<<e<<" ";
    }
    cout<<endl;
    return 0;
}