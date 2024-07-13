#include<iostream>
#include<stdlib.h>
#include<vector>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
//Keyword : Array is sorted
set<int> common(vector<int>&a,vector<int>&b,vector<int>&c)
{
    int i,j,k;
    i=j=k=0;
    int size1 = a.size();
    int size2 = b.size();
    int size3 = c.size();
    set<int>ans;
    while(i<size1 && j<size2 && k<size3)
    {
        if(a[i]<b[j])
        i++;
        else if(b[j]<c[k])
        j++;
        else
        k++;

        if(a[i]==b[j] && b[j]==c[k])
        {
            ans.insert(a[i]);
            i++;j++;k++;
        }


    }

    return ans;
    
}

int main()
{
    system("cls");
    vector<int>a={1,5,10,20,30,30,40,80};
    vector<int>b={6,7,20,30,30,80,100};
    vector<int>c={3,4,15,20,30,30,70,80,120};
    for(auto element:common(a,b,c))
    {
        cout<<element<<" ";
    }
    return 0;
}