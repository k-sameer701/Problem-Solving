/*

Max Min

https://practice.geeksforgeeks.org/problems/max-min/1?page=1&difficulty[]=-2&difficulty[]=-1&difficulty[]=0&sortBy=accuracy

Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

int findSum(int A[], int N)
{
    // code here.
    vector<int> v;
    for (int i = 0; i < N; i++)
    {
        int x = A[i];
        v.emplace_back(x);
    }
    sort(v.begin(), v.end());

    int mini = v[0];
    int maxi = v[N - 1];

    int sum = maxi - (-1 * mini);
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

    cout << findSum(a, n);
}