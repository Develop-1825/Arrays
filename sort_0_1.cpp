#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void sort_0_1(int arr[],int n)
{
    int  j=0; // j is used for tracking the 0's/1's
    for(int i=0;i<n;i++) // i is used for traversing the array
    {
        //initially i and j ar pointing at 0th index
        // j is fixed on a position where a 0 can be brought in via swapping
        if(arr[i]==0) //if an element in the array is 0,swap it with arr[j]
        {
            swap(arr[i],arr[j]);
            //increament j so that the next time another 0 is found it is put in the next index
            j++;
        }
    }
    
}
int main()
{
    system("cls");
    int arr[13]={1,1,1,1,0,0,1,0,1,0,0,0,1};
    for(int e:arr)
    {
        cout<<e<<" ";
    }
    cout<<endl;
    
    sort_0_1(arr,13);

    for(int e:arr)
    {
        cout<<e<<" ";
    }
    cout<<endl;
    return 0;
}