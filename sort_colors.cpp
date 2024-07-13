#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void sort_colors(int arr[],int n)
{
    int left=0; // for 0's
    int right = n-1; //for 2's

    //! For loop
    // The 1 is automatically adjusted in between
    // for(int i=0;i<n;i++) // i is used for traversing the array
    // {
    //     //after the right pointer all the elments are 2's 
    //     //therefore our traversing variable i only needds to go till just before right pointer.
    //     if(i>=right) //this condition can be put in the for loop itself as "i<=right"
    //     break;

    //     if(arr[i]==0) //if an element in the array is 0,swap it with arr[left]
    //     {
    //         //Crucial step
    //         if(arr[left]==0) //if by chance left is already on a zero then first increament the pointer then swap
    //         left++;

    //         swap(arr[left],arr[i]);
    //         //increament left so that the next time another 0 is found it is put in the next index
    //         left++;
    //     }
    //     else if(arr[i]==2)
    //     {
    //         swap(arr[right],arr[i]);
    //         //decreament right so that the next time another 2 is found it is put in the next available position
    //         right--;
    //     }
    // }

    //! while loop
    int index=0;
    while(index<=right)
    {
        if(arr[index]==0) //if an element in the array is 0,swap it with arr[left]
        {
            //Crucial step
            // if(arr[left]==0) //if by chance left is already on a zero then first increament the pointer then swap
            // left++;

            swap(arr[left],arr[index]);
            //increament left so that the next time another 0 is found it is put in the next index
            left++;
        }
        else if(arr[index]==2)
        {
            swap(arr[right],arr[index]);
            //decreament right so that the next time another 2 is found it is put in the next available position
            right--;
        }
        else
        {
            index++;
        }
    }
}
int main()
{
    system("cls");
    int arr[13]={1,2,1,2,0,0,1,0,1,0,2,0,1};
    for(int e:arr)
    {
        cout<<e<<" ";
    }
    cout<<endl;
    
    sort_colors(arr,13);

    for(int e:arr)
    {
        cout<<e<<" ";
    }
    cout<<endl;
    return 0;
}