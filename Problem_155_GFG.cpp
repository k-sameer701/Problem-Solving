/*
Search in a matrix

https://practice.geeksforgeeks.org/problems/search-in-a-matrix17201720/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=search-in-a-matrix

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int matSearch(vector<vector<int>> &mat, int N, int M, int X)
{
    // your code here
    int low = 0;
    int high = N * M - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (mat[mid / M][mid % M] == X)
            return 1;

        else if (mat[mid / M][mid % M] < X)
            low = mid + 1;

        else
            high = mid - 1;
    }
    return 0;
}

int main()
{
    return 0;
}