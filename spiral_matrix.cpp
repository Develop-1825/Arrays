#include <iostream>
#include <stdlib.h>
#include <vector>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
void spiral_print(vector<vector<int>> &mat)
{
    int row_start, col_start, row_end, col_end;
    row_start = col_start = 0;
    row_end = mat.size()-1;
    col_end = mat[0].size() - 1;
    int count = 0;
    int total_elements= mat.size()*mat[0].size();
    while(count<total_elements)
    {
        for (int i = col_start; i <= col_end && count<total_elements; i++)
        {
            cout << mat[row_start][i] << " ";
            count++;
        }
        row_start++;

        for (int i = row_start; i <= row_end && count<total_elements; i++)
        {
            cout << mat[i][col_end] << " ";
            count++;
        }
        col_end--;

        for (int i = col_end; i >= col_start && count<total_elements; i--)
        {
            cout << mat[row_end][i] << " ";
            count++;
        }
        row_end--;

        for (int i = row_end; i >= row_start && count<total_elements; i--)
        {
            cout << mat[i][col_start] << " ";
            count++;
        }
        col_start++;
    }
}
int main()
{

    system("cls");
    // vector<vector<int>> nums{
    //     {1, 2, 3, 4},
    //     {12, 13, 14, 5},
    //     {11, 16, 15, 6},
    //     {10, 9, 8, 7}};
    vector<vector<int>> nums{
        {1, 2, 3, 4,5,6},
        {20,21,22,23,24,7},
        {19,32,33,34,25,8},
        {18,31,36,35,26,9},
        {17,30,29,28,27,10},
        {16,15,14,13,12,11}};
    spiral_print(nums);
    return 0;
}