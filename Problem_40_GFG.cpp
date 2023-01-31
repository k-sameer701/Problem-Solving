/*

Sort The Array

https://practice.geeksforgeeks.org/problems/sort-the-array0055/1?page=3&difficulty[]=-2&difficulty[]=-1&sortBy=submissions

Status - Unsubmitted

*/
#include <bits/stdc++.h>
using namespace std;

vector<int> sortArr(vector<int> arr, int n)
{
    // complete the function here
    sort(arr.begin(), arr.end());
    return arr;
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