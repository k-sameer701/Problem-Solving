/*
Count zeros in a sorted matrix

https://practice.geeksforgeeks.org/problems/count-zeros-in-a-sorted-matrix/1?page=1&difficulty[]=-2&difficulty[]=-1&sortBy=accuracy

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int countZeros(vector<vector<int>> A)
{
    // code here
    int count = 0;
    for (int i = 0; i < A.size(); i++)
    {
        for (int j = 0; j < A[i].size(); j++)
        {
            if (A[i][j] == 0)
                count++;
        }
    }
    return count;
}

int main()
{
    return 0;
}