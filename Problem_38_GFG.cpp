/*

Searching an element in a sorted array

https://practice.geeksforgeeks.org/problems/who-will-win-1587115621/1?page=2&difficulty[]=-2&difficulty[]=-1&sortBy=submissions

Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

int searchInSorted(int arr[], int N, int K)
{

    // Your code here
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == K)
            return 1;
    }
    return -1;
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