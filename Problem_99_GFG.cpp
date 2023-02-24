/*

Peak element

https://practice.geeksforgeeks.org/problems/peak-element/1?page=2&category[]=Searching&sortBy=accuracy

Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

int peakElement(int arr[], int n)
{
    // Your code here
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        v.emplace_back(arr[i]);
    }
    int peak = *max_element(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == peak)
            return i;
    }
    return -1;
}

int main()
{
    return 0;
}