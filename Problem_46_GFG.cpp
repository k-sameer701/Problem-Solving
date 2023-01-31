/*

Number of occurrence

https://practice.geeksforgeeks.org/problems/number-of-occurrence2259/1?page=2&difficulty[]=-2&difficulty[]=-1&sortBy=submissions

Status - Unsubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int count(int arr[], int n, int x)
{
    // code here
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    int ans = mpp[x];

    return ans;
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