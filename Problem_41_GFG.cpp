/*

Arrays (Sum of array)

https://practice.geeksforgeeks.org/problems/c-arrays-sum-of-array-set-14805/1?page=3&difficulty[]=-2&difficulty[]=-1&sortBy=submissions

Status - Unsubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int getSum(int a[], int n)
{
    // Your code goes here

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
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