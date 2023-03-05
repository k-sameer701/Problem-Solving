/*

Minimum Sum of Absolute Differences of Pairs

https://practice.geeksforgeeks.org/problems/minimum-sum-of-absolute-differences-of-pairs/1?page=1&difficulty[]=0&difficulty[]=1&category[]=Arrays&sortBy=accuracy

Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

long long findMinSum(vector<int> &A, vector<int> &B, int N)
{
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    long long int min_Sum;
    for (int i = 0; i < N; i++)
    {
        if (A[i] < 0)
            A[i] * (-1);
        if (B[i] < 0)
            B[i] * (-1);

        if (A[i] > B[i])
            min_Sum = min_Sum + (A[i] - B[i]);
        else
            min_Sum = min_Sum + (B[i] - A[i]);
    }
    return min_Sum;
}

int main()
{
    return 0;
}