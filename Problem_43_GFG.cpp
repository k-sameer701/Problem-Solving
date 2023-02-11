/*

Factorial

https://practice.geeksforgeeks.org/problems/factorial5739/1?page=3&difficulty[]=-2&difficulty[]=-1&sortBy=submissions

Status - submitted

*/
#include <bits/stdc++.h>
using namespace std;

long long int factorial(int N)
{
    // code here
    long long int f = 1;
    for (long long int i = 1; i <= N; i++)
    {
        f = f * i;
    }
    return f;
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