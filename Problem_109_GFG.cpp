/*
Addition of two square matrices

https://practice.geeksforgeeks.org/problems/addition-of-two-square-matrices4916/1?page=4&difficulty[]=-2&difficulty[]=-1&sortBy=accuracy

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

void Addition(vector<vector<int>> &matrixA, vector<vector<int>> &matrixB)
{
    // Code here
    int i, j, n = matrixA.size();

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            matrixA[i][j] += matrixB[i][j];
        }
    }
}

int main()
{
    return 0;
}