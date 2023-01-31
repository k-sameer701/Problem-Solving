/*

Searching a number

https://practice.geeksforgeeks.org/problems/searching-a-number0324/1?page=3&difficulty[]=-2&difficulty[]=-1&sortBy=submissions

Status - Unsubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int k)
{
    // code here
    int ans;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            ans = i + 1;
        }
    }
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