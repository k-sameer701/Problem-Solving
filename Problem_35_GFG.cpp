/*

Check if two arrays are equal or not

https://practice.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not3847/1?page=1&difficulty[]=-2&difficulty[]=-1&sortBy=submissions

Status - Unsubmitted

*/
#include <bits/stdc++.h>
using namespace std;

bool check(vector<ll> A, vector<ll> B, int N)
{
    // code here
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    int i = 0, j = 0;
    int count = 0;
    while (i < N && j < N)
    {
        if (A[i] == A[j])
        {
            count++;
        }
        i++;
        j++;
    }
    if (count == N)
        return true;

    return false;
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