/*

Sum of Array

https://practice.geeksforgeeks.org/problems/sum-of-array2326/1?page=5&difficulty[]=-2&difficulty[]=-1&difficulty[]=0&sortBy=accuracy

Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int n)
{
    // code here
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
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