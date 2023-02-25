/*
K largest elements

https://practice.geeksforgeeks.org/problems/k-largest-elements3736/1?page=7&difficulty[]=-2&difficulty[]=-1&sortBy=accuracy

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

vector<int> kLargest(int arr[], int n, int k)
{
    // code here
    vector<int> v;
    vector<int> vv;
    for (int i = 0; i < n; i++)
    {
        v.emplace_back(arr[i]);
    }
    sort(v.rbegin(), v.rend());
    for (int i = 0; i < k; i++)
    {
        vv.emplace_back(v[i]);
    }
    return vv;
}

int main()
{
    return 0;
}