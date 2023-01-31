/*

Prime Number

https://practice.geeksforgeeks.org/problems/prime-number2314/1?page=2&difficulty[]=-2&difficulty[]=-1&sortBy=submissions


Status - Unsubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int isPrime(int N)
{
    // code here
    int count = 0;
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
        return 1;
    return 0;
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