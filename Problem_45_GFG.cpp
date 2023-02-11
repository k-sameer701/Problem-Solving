/*

Find the median

https://practice.geeksforgeeks.org/problems/find-the-median0527/1?page=3&difficulty[]=-2&difficulty[]=-1&sortBy=submissions

Status - Unsubmitted -> WRONG ANSWER


*/
#include <bits/stdc++.h>
using namespace std;

int find_median(vector<int> v)
{
    // Code here.
    sort(v.begin(), v.end());

    int mid = v.size() / 2;

    return v[mid];
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