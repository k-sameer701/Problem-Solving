/*
Fighting the darkness

https://practice.geeksforgeeks.org/problems/fighting-the-darkness3949/1?page=5&difficulty[]=-2&difficulty[]=-1&sortBy=accuracy

Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

int maxDays(int arr[], int n)
{
    // code here
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        v.emplace_back(arr[i]);
    }
    sort(v.begin(), v.end());
    return v[v.size() - 1];
}

int main()
{
    return 0;
}