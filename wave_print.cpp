#include <iostream>
#include <stdlib.h>
#include <vector>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
void wave_print(vector<vector<int>> &mat)
{
    for (int col = 0; col < mat[0].size(); col++)
    {
        if ((col & 1) == 0) // even
        {
            for (int row = 0; row < mat.size(); row++)
            {
                cout << mat[row][col] << " ";
            }
        }
        else
        {
            for (int row = mat.size()-1; row >= 0; row--)
            {
                cout << mat[row][col] << " ";
            }
        }
    }
}
int main()
{

    system("cls");
    vector<vector<int>> nums{
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};
    wave_print(nums);
    return 0;
}