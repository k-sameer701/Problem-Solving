/*

1351. Count Negative Numbers in a Sorted Matrix
https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/
Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

int countNegatives(vector<vector<int>> &grid)
{
    int count = 0;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i].size(); j++)
        {
            if (grid[i][j] < 0)
                count++;
        }
    }
    return count;
}

int main()
{

    return 0;
}