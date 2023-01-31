/*

Count Squares

https://practice.geeksforgeeks.org/problems/count-squares3649/1?page=2&difficulty[]=-2&difficulty[]=-1&sortBy=submissions

Status - Unsubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int countSquares(int N)
{
    // code here
    int count = 0;
    for (int i = 1; i < N; i++)
    {
        if (i * i < N)
        {
            count++;
        }
    }
    return count;
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