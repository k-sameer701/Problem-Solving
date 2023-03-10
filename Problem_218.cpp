/*

240. Search a 2D Matrix II
https://leetcode.com/problems/search-a-2d-matrix-ii/description/
Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int n = matrix.size();
    int m = matrix[0].size();

    int low = 0;
    int high = n * m - 1;

    if (!matrix.size())
        return false;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (matrix[mid / m][mid % m] == target)
            return true;
        else if (matrix[mid / m][mid % m] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return false;
}

int main()
{

    return 0;
}