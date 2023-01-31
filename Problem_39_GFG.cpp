/*

Sum of Series

https://practice.geeksforgeeks.org/problems/sum-of-series2811/1?page=2&difficulty[]=-2&difficulty[]=-1&sortBy=submissions

Status - Unsubmitted

*/
#include <bits/stdc++.h>
using namespace std;

long long seriesSum(int n)
{
    // code here
    long long sum = 0;
    for (long long i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    return sum;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // cout << findSum(a, n);
}