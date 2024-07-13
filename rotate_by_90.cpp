#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void  print_matrix(vector<vector<int>>& matrix,int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

//handles m x n
// void transpose(vector<vector<int>>& matrix,int r,int c)
// {
//     vector<vector<int>> trnsps(c,vector<int>(r));
//     for(int i=0;i<r;i++)
//     {
//         for(int j=0;j<c;j++)
//         {
//             // swap(matrix[i][j],matrix[j][i]);
//             trnsps[j][i]=matrix[i][j];
//         }
//     }

//     print_matrix(trnsps,c,r);
// }

//handles n x n
void transpose(vector<vector<int>>& matrix,int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=i;j<c;j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
    }

    print_matrix(matrix,r,c);
}
 void rotate_by_90(vector<vector<int>>& matrix,int r,int c)
 {
    cout<<"Transpose: "<<endl;
    transpose(matrix,r,c);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c/2;j++) //inner loop only till half way
        {
            swap(matrix[i][j],matrix[i][c-j-1]); //c-j-1 not c-i-1
        }
    }
    cout<<"90 rotate:"<<endl;
    print_matrix(matrix,r,c);
 }
int main()
{
    system("cls");
    int r,c;
    cout<<"Enter the no.of rows and cols:"<<endl;
    cin>>r>>c;
    cout<<"Enter the elements of the matrix:"<<endl;
    vector<vector<int>> matrix(r,vector<int>(c));
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>matrix[i][j];
        }
        cout<<endl;
    }
    print_matrix(matrix,r,c);
    cout<<endl;
    // transpose(matrix,r,c);
    rotate_by_90(matrix,r,c);
    // print_matrix(matrix,r,c);
    return 0;
}