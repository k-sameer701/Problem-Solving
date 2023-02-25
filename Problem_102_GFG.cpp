/*
Nearly sorted

https://practice.geeksforgeeks.org/problems/nearly-sorted-1587115620/1?page=1&difficulty[]=0&difficulty[]=1&category[]=Arrays&sortBy=accuracy

Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

vector<int> nearlySorted(int arr[], int num, int K)
{
    // Your code here
    vector<int> v;
    for (int i = 0; i < num; i++)
    {
        v.emplace_back(arr[i]);
    }
    sort(v.begin(), v.end());

    return v;
}

int main()
{
    return 0;
}